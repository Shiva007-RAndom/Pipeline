import enum


class Status(enum.Enum):
    SUCCESS = "SUCCESS"
    FAILURE = "FAILURE"
    RUNNING = "RUNNING"
    INVALID = "INVALID"


class OneShotPolicy(enum.Enum):
    ON_COMPLETION = [Status.SUCCESS, Status.FAILURE]
    ON_SUCCESSFUL_COMPLETION = [Status.SUCCESS]


class Duration(enum.Enum):
    INFINITE = float("inf")
