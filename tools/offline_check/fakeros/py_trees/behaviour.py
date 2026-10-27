import logging

from py_trees.common import Status

TRACE = []  # (name, status) transitions, for the harness report


class Behaviour:
    def __init__(self, name):
        if not isinstance(name, str):
            raise TypeError("Behaviour name must be a str")
        self.name = name
        self.status = Status.INVALID
        self.feedback_message = ""
        self.children = []
        self.parent = None
        self.logger = logging.getLogger(name)

    # user hooks
    def setup(self, **kwargs):
        pass

    def initialise(self):
        pass

    def update(self):
        return Status.INVALID

    def terminate(self, new_status):
        pass

    # engine
    def tick_once(self):
        if self.status != Status.RUNNING:
            self.initialise()
        new = self.update()
        if new not in (Status.SUCCESS, Status.FAILURE, Status.RUNNING):
            raise RuntimeError(f"{self.name}: update() returned {new}")
        if new != Status.RUNNING:
            self.stop(new)
        else:
            if self.status != Status.RUNNING:
                TRACE.append((self.name, "RUNNING"))
            self.status = new
        return self.status

    def stop(self, new_status=Status.INVALID):
        self.terminate(new_status)
        if new_status != self.status:
            TRACE.append((self.name, new_status.value))
        self.status = new_status

    def iterate(self):
        for child in self.children:
            yield from child.iterate()
        yield self

    def tip(self):
        return self if self.status != Status.INVALID else None
