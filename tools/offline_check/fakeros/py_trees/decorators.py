from py_trees.behaviour import Behaviour
from py_trees.common import OneShotPolicy, Status


class Decorator(Behaviour):
    def __init__(self, name, child):
        super().__init__(name)
        if child.parent is not None:
            raise RuntimeError(f"'{child.name}' already has a parent")
        child.parent = self
        self.decorated = child
        self.children = [child]

    def tip(self):
        t = self.decorated.tip()
        return t if t is not None else super().tip()

    def stop(self, new_status=Status.INVALID):
        if self.decorated.status == Status.RUNNING:
            self.decorated.stop(Status.INVALID)
        super().stop(new_status)


class FailureIsSuccess(Decorator):
    def update(self):
        s = self.decorated.tick_once()
        return Status.SUCCESS if s == Status.FAILURE else s


class OneShot(Decorator):
    def __init__(self, name, child, policy):
        super().__init__(name, child)
        self.policy = policy
        self.final = None

    def tick_once(self):
        if self.final is not None:
            return self.status
        return super().tick_once()

    def update(self):
        s = self.decorated.tick_once()
        if s in self.policy.value:
            self.final = s
        return s
