"""Graph registry, dispatch pool, futures, logging."""
import collections
import sys
import threading
import time
import traceback
from concurrent.futures import ThreadPoolExecutor

POOL = ThreadPoolExecutor(max_workers=64)
LOCK = threading.RLock()
SUBS = collections.defaultdict(list)       # topic -> [Subscription]
LATCHED = {}                               # topic -> last msg from a transient-local publisher
SERVICES = {}                              # name -> Service
ACTIONS = {}                               # name -> ActionServer
LOG_FILE = None
T0 = time.monotonic()
ERRORS = []                                # exceptions raised inside callbacks


def log(level, node, text):
    line = f"[{time.monotonic() - T0:8.2f}] [{level:5s}] [{node}] {text}"
    with LOCK:
        if LOG_FILE is not None:
            LOG_FILE.write(line + "\n")
            LOG_FILE.flush()
        if level in ("ERROR", "WARN") or "--quiet" not in sys.argv:
            print(line, flush=True)


def report_exception(where):
    tb = traceback.format_exc()
    ERRORS.append((where, tb))
    log("ERROR", "harness", f"exception in {where}:\n{tb}")


class Future:
    def __init__(self):
        self._event = threading.Event()
        self._result = None
        self._exc = None
        self._callbacks = []

    def done(self):
        return self._event.is_set()

    def result(self):
        if self._exc:
            raise self._exc
        return self._result

    def set_result(self, value):
        self._result = value
        self._event.set()
        for cb in self._callbacks:
            cb(self)

    def set_exception(self, exc):
        self._exc = exc
        self._event.set()

    def add_done_callback(self, cb):
        if self.done():
            cb(self)
        else:
            self._callbacks.append(cb)


def resolve(node_name, name):
    if name.startswith("~/"):
        return f"/{node_name}/{name[2:]}"
    if not name.startswith("/"):
        return "/" + name
    return name
