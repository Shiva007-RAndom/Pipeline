import collections
import threading
import time

from rclpy import _core
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from rclpy.qos import QoSDurabilityPolicy, as_profile

PARAM_OVERRIDES = {}   # node name -> {param: value}; "/**" applies to every node


class Parameter:
    def __init__(self, name, value):
        self.name, self.value = name, value


class Time:
    def __init__(self, ns):
        self.nanoseconds = ns

    def to_msg(self):
        from builtin_interfaces.msg import Time as T
        return T(sec=int(self.nanoseconds // 1_000_000_000), nanosec=int(self.nanoseconds % 1_000_000_000))

    def __sub__(self, other):
        return Time(self.nanoseconds - other.nanoseconds)


class Clock:
    def now(self):
        return Time(time.time_ns())


class Logger:
    def __init__(self, name):
        self.name = name
        self._last = {}

    def _log(self, level, msg, throttle_duration_sec=None, **_):
        if throttle_duration_sec:
            now = time.monotonic()
            if now - self._last.get(msg, -1e9) < throttle_duration_sec:
                return
            self._last[msg] = now
        _core.log(level, self.name, msg)

    def info(self, msg, **kw):
        self._log("INFO", msg, **kw)

    def warn(self, msg, **kw):
        self._log("WARN", msg, **kw)

    warning = warn

    def error(self, msg, **kw):
        self._log("ERROR", msg, **kw)

    def debug(self, msg, **kw):
        pass


class Publisher:
    def __init__(self, node, msg_type, topic, qos):
        self.node, self.msg_type, self.topic, self.qos = node, msg_type, topic, as_profile(qos)

    def publish(self, msg):
        if not isinstance(msg, self.msg_type):
            raise TypeError(f"{self.topic}: publishing {type(msg).__name__}, expected {self.msg_type.__name__}")
        if self.qos.durability == QoSDurabilityPolicy.TRANSIENT_LOCAL:
            _core.LATCHED[self.topic] = msg
        with _core.LOCK:
            subs = list(_core.SUBS[self.topic])
        for s in subs:
            s.deliver(msg)


class Subscription:
    def __init__(self, node, msg_type, topic, callback, qos, group):
        self.node, self.msg_type, self.topic, self.callback = node, msg_type, topic, callback
        self.qos = as_profile(qos)
        self.group = group
        self.queue = collections.deque(maxlen=max(1, self.qos.depth))
        self.lock = threading.Lock()
        self.draining = False

    def deliver(self, msg):
        if not isinstance(msg, self.msg_type):
            raise TypeError(f"{self.topic}: type mismatch {type(msg).__name__} vs {self.msg_type.__name__}")
        with self.lock:
            self.queue.append(msg)
            if self.draining:
                return
            self.draining = True
        _core.POOL.submit(self._drain)

    def _drain(self):
        while True:
            with self.lock:
                if not self.queue:
                    self.draining = False
                    return
                msg = self.queue.popleft()
            try:
                self.group.run(self.callback, msg)
            except Exception:  # noqa: BLE001
                _core.report_exception(f"{self.node.get_name()} subscription {self.topic}")


class Timer:
    def __init__(self, node, period, callback, group):
        self.period, self.callback, self.group, self.node = period, callback, group, node
        self.cancelled = False
        threading.Thread(target=self._loop, daemon=True).start()

    def _loop(self):
        import rclpy
        nxt = time.monotonic() + self.period
        while not self.cancelled and rclpy.ok():
            delay = nxt - time.monotonic()
            if delay > 0:
                time.sleep(delay)
            nxt = max(nxt + self.period, time.monotonic())
            if self.cancelled:
                return
            try:
                self.group.run(self.callback)
            except Exception:  # noqa: BLE001
                _core.report_exception(f"{self.node.get_name()} timer")

    def cancel(self):
        self.cancelled = True


class Service:
    def __init__(self, node, srv_type, name, callback, group):
        self.node, self.srv_type, self.name, self.callback, self.group = node, srv_type, name, callback, group


class Client:
    def __init__(self, node, srv_type, name, group):
        self.node, self.srv_type, self.name = node, srv_type, name

    def service_is_ready(self):
        return self.name in _core.SERVICES

    def wait_for_service(self, timeout_sec=None):
        end = time.monotonic() + (timeout_sec if timeout_sec is not None else 1e9)
        while time.monotonic() < end:
            if self.service_is_ready():
                return True
            time.sleep(0.02)
        return self.service_is_ready()

    def call_async(self, request):
        if not isinstance(request, self.srv_type.Request):
            raise TypeError(f"{self.name}: wrong request type {type(request).__name__}")
        fut = _core.Future()
        srv = _core.SERVICES.get(self.name)
        if srv is None:
            return fut  # never completes, like an unavailable service

        def run():
            try:
                resp = srv.group.run(srv.callback, request, srv.srv_type.Response())
                fut.set_result(resp)
            except Exception as e:  # noqa: BLE001
                _core.report_exception(f"service {self.name}")
                fut.set_exception(e)
        _core.POOL.submit(run)
        return fut


class Node:
    def __init__(self, node_name, **kw):
        self._name = node_name
        self._logger = Logger(node_name)
        self._clock = Clock()
        self._params = {}
        self.default_callback_group = MutuallyExclusiveCallbackGroup()
        self._timers = []

    def get_name(self):
        return self._name

    def get_logger(self):
        return self._logger

    def get_clock(self):
        return self._clock

    # parameters
    def declare_parameter(self, name, value=None, *a, **kw):
        if name in self._params:
            raise RuntimeError(f"{self._name}: parameter {name} declared twice")
        over = dict(PARAM_OVERRIDES.get("/**", {}))
        over.update(PARAM_OVERRIDES.get(self._name, {}))
        if name in over:
            v = over[name]
            if value is not None and type(v) is not type(value):
                raise TypeError(f"{self._name}: parameter {name} override {v!r} ({type(v).__name__}) does not "
                                f"match declared type {type(value).__name__} (rclpy InvalidParameterTypeException)")
            value = v
        p = Parameter(name, value)
        self._params[name] = p
        return p

    def get_parameter(self, name):
        if name not in self._params:
            raise RuntimeError(f"{self._name}: parameter {name} not declared")
        return self._params[name]

    def has_parameter(self, name):
        return name in self._params

    # graph
    def create_publisher(self, msg_type, topic, qos, **kw):
        topic = _core.resolve(self._name, topic)
        return Publisher(self, msg_type, topic, qos)

    def create_subscription(self, msg_type, topic, callback, qos, callback_group=None, **kw):
        topic = _core.resolve(self._name, topic)
        sub = Subscription(self, msg_type, topic, callback, qos, callback_group or self.default_callback_group)
        with _core.LOCK:
            _core.SUBS[topic].append(sub)
        latched = _core.LATCHED.get(topic)
        if latched is not None and sub.qos.durability == QoSDurabilityPolicy.TRANSIENT_LOCAL:
            sub.deliver(latched)
        return sub

    def create_timer(self, period, callback, callback_group=None, **kw):
        t = Timer(self, period, callback, callback_group or self.default_callback_group)
        self._timers.append(t)
        return t

    def create_service(self, srv_type, name, callback, callback_group=None, **kw):
        name = _core.resolve(self._name, name)
        if name in _core.SERVICES:
            raise RuntimeError(f"service {name} created twice")
        srv = Service(self, srv_type, name, callback, callback_group or self.default_callback_group)
        _core.SERVICES[name] = srv
        return srv

    def create_client(self, srv_type, name, callback_group=None, **kw):
        return Client(self, srv_type, _core.resolve(self._name, name), callback_group)

    def destroy_node(self):
        for t in self._timers:
            t.cancel()
