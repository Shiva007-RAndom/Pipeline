import threading


class CallbackGroup:
    def __init__(self):
        self.lock = None

    def run(self, fn, *args):
        if self.lock is None:
            return fn(*args)
        with self.lock:
            return fn(*args)


class MutuallyExclusiveCallbackGroup(CallbackGroup):
    def __init__(self):
        super().__init__()
        self.lock = threading.RLock()


class ReentrantCallbackGroup(CallbackGroup):
    pass
