from py_trees.behaviour import Behaviour
from py_trees.common import Status


class Composite(Behaviour):
    def __init__(self, name, memory, children=None):
        super().__init__(name)
        if memory is not True and memory is not False:
            raise TypeError("memory must be given (py_trees >= 2.2)")
        self.memory = memory
        self.children = []
        self.current = None
        for c in children or []:
            if c.parent is not None:
                raise RuntimeError(f"'{c.name}' already has a parent")
            c.parent = self
            self.children.append(c)

    def tip(self):
        if self.current is not None and self.current.status != Status.INVALID:
            return self.current.tip()
        return super().tip()

    def stop(self, new_status=Status.INVALID):
        for c in self.children:
            if c.status == Status.RUNNING:
                c.stop(Status.INVALID)
        super().stop(new_status)


class Sequence(Composite):
    def initialise(self):
        self.index = 0
        for c in self.children:
            c.status = Status.INVALID if c.status != Status.RUNNING else c.status

    def update(self):
        while self.index < len(self.children):
            child = self.children[self.index]
            self.current = child
            s = child.tick_once()
            if s == Status.RUNNING:
                return Status.RUNNING
            if s == Status.FAILURE:
                return Status.FAILURE
            self.index += 1
        return Status.SUCCESS


class Selector(Composite):
    def initialise(self):
        self.index = 0

    def update(self):
        while self.index < len(self.children):
            child = self.children[self.index]
            self.current = child
            s = child.tick_once()
            if s == Status.RUNNING:
                return Status.RUNNING
            if s == Status.SUCCESS:
                return Status.SUCCESS
            self.index += 1
        return Status.FAILURE
