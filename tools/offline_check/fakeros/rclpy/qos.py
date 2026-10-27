import enum


class QoSReliabilityPolicy(enum.Enum):
    RELIABLE = 1
    BEST_EFFORT = 2


class QoSDurabilityPolicy(enum.Enum):
    TRANSIENT_LOCAL = 1
    VOLATILE = 2


class QoSHistoryPolicy(enum.Enum):
    KEEP_LAST = 1
    KEEP_ALL = 2


class QoSProfile:
    def __init__(self, depth=10, reliability=QoSReliabilityPolicy.RELIABLE,
                 durability=QoSDurabilityPolicy.VOLATILE, history=QoSHistoryPolicy.KEEP_LAST, **kw):
        self.depth = depth
        self.reliability = reliability
        self.durability = durability
        self.history = history


qos_profile_sensor_data = QoSProfile(depth=5, reliability=QoSReliabilityPolicy.BEST_EFFORT)


def as_profile(qos):
    return QoSProfile(depth=qos) if isinstance(qos, int) else qos
