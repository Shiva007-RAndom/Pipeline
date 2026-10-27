"""rclpy.action stand-in: goal accept/reject, execute in a thread, feedback, cancel, result."""
import enum
import threading
import time

from rclpy import _core

SUCCEEDED, CANCELED, ABORTED = 4, 5, 6


class GoalResponse(enum.Enum):
    REJECT = 1
    ACCEPT = 2


class CancelResponse(enum.Enum):
    REJECT = 1
    ACCEPT = 2


class ServerGoalHandle:
    def __init__(self, server, request, client_handle):
        self.server = server
        self.request = request
        self._client = client_handle
        self._cancel = False
        self.status = None

    @property
    def is_cancel_requested(self):
        return self._cancel

    @property
    def is_active(self):
        return self.status is None

    def publish_feedback(self, fb):
        if not isinstance(fb, self.server.action_type.Feedback):
            raise TypeError(f"{self.server.name}: wrong feedback type {type(fb).__name__}")
        cb = self._client.feedback_callback
        if cb is not None:
            cb(type("FeedbackMsg", (), {"feedback": fb})())

    def _terminal(self, status):
        if self.status is not None:
            raise RuntimeError(f"{self.server.name}: goal already terminal ({self.status}), cannot set {status}")
        self.status = status

    def succeed(self):
        self._terminal(SUCCEEDED)

    def abort(self):
        self._terminal(ABORTED)

    def canceled(self):
        if not self._cancel:
            raise RuntimeError(f"{self.server.name}: canceled() without a cancel request")
        self._terminal(CANCELED)


class ActionServer:
    def __init__(self, node, action_type, action_name, execute_callback, goal_callback=None,
                 cancel_callback=None, callback_group=None, **kw):
        self.node = node
        self.action_type = action_type
        self.name = _core.resolve(node.get_name(), action_name)
        self.execute_callback = execute_callback
        self.goal_callback = goal_callback or (lambda g: GoalResponse.ACCEPT)
        self.cancel_callback = cancel_callback or (lambda h: CancelResponse.REJECT)
        if self.name in _core.ACTIONS:
            raise RuntimeError(f"action server {self.name} created twice")
        _core.ACTIONS[self.name] = self

    def _send(self, goal, client_handle):
        if not isinstance(goal, self.action_type.Goal):
            raise TypeError(f"{self.name}: wrong goal type {type(goal).__name__}")
        resp = self.goal_callback(goal)
        if resp != GoalResponse.ACCEPT:
            return None
        handle = ServerGoalHandle(self, goal, client_handle)
        client_handle._server_handle = handle
        client_handle.accepted = True

        def run():
            try:
                result = self.execute_callback(handle)
                if not isinstance(result, self.action_type.Result):
                    raise TypeError(f"{self.name}: execute returned {type(result).__name__}")
                if handle.status is None:
                    _core.log("WARN", self.node.get_name(), f"{self.name}: goal not terminal -> aborted")
                    handle.status = ABORTED
            except Exception:  # noqa: BLE001
                _core.report_exception(f"action {self.name} execute")
                result, handle.status = self.action_type.Result(), ABORTED
            client_handle._finish(handle.status, result)
        threading.Thread(target=run, daemon=True).start()
        return handle


class ClientGoalHandle:
    def __init__(self, feedback_callback):
        self.accepted = False
        self.feedback_callback = feedback_callback
        self._server_handle = None
        self._result_future = _core.Future()

    def get_result_async(self):
        return self._result_future

    def _finish(self, status, result):
        self._result_future.set_result(type("Result", (), {"status": status, "result": result})())

    def cancel_goal_async(self):
        fut = _core.Future()
        h = self._server_handle
        if h is not None and h.status is None:
            if h.server.cancel_callback(h) == CancelResponse.ACCEPT:
                h._cancel = True
        fut.set_result(None)
        return fut


class ActionClient:
    def __init__(self, node, action_type, action_name, callback_group=None, **kw):
        self.node = node
        self.action_type = action_type
        self.name = _core.resolve(node.get_name(), action_name)

    def server_is_ready(self):
        return self.name in _core.ACTIONS

    def wait_for_server(self, timeout_sec=None):
        end = time.monotonic() + (timeout_sec if timeout_sec is not None else 1e9)
        while time.monotonic() < end:
            if self.server_is_ready():
                return True
            time.sleep(0.02)
        return self.server_is_ready()

    def send_goal_async(self, goal, feedback_callback=None):
        fut = _core.Future()
        server = _core.ACTIONS.get(self.name)
        handle = ClientGoalHandle(feedback_callback)

        def run():
            try:
                sh = server._send(goal, handle) if server else None
                handle.accepted = sh is not None
                handle._server_handle = sh
                fut.set_result(handle)
            except Exception as e:  # noqa: BLE001
                _core.report_exception(f"send goal {self.name}")
                fut.set_exception(e)
        _core.POOL.submit(run)
        return fut
