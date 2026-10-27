"""Generate strict ROS-2-like message classes from .msg/.srv/.action text (test harness only).

Field typing follows rclpy's generated setters: float fields need float, ints need int in range,
strings need str, fixed arrays need the exact length, nested fields need the right class.
"""
import array
import importlib.abc
import importlib.machinery
import math
import os
import sys
import types

import numpy as np

INT_RANGES = {
    "int8": (-2**7, 2**7 - 1), "uint8": (0, 2**8 - 1), "int16": (-2**15, 2**15 - 1), "uint16": (0, 2**16 - 1),
    "int32": (-2**31, 2**31 - 1), "uint32": (0, 2**32 - 1), "int64": (-2**63, 2**63 - 1), "uint64": (0, 2**64 - 1),
    "byte": (0, 255), "char": (0, 255),
}
FLOATS = ("float32", "float64")
PRIMS = set(INT_RANGES) | set(FLOATS) | {"bool", "string"}

DEFS = {}      # "pkg/Name" -> text (msg)
SRV_DEFS = {}
ACTION_DEFS = {}
CLASSES = {}


def parse(text, pkg):
    fields, consts = [], {}
    for raw in text.splitlines():
        line = raw.split("#", 1)[0].strip()
        if not line:
            continue
        typ, rest = line.split(None, 1)
        if "=" in rest:
            name, val = [x.strip() for x in rest.split("=", 1)]
            consts[name] = float(val) if typ in FLOATS else (val.strip('"') if typ == "string" else int(val))
            continue
        name = rest.split()[0]
        arr = None
        if "[" in typ:
            typ, n = typ[:-1].split("[")
            arr = int(n) if n else -1
        if typ not in PRIMS and "/" not in typ:
            typ = f"{pkg}/{typ}"
        if typ == "Header":
            typ = "std_msgs/Header"
        fields.append((name, typ, arr))
    return fields, consts


def get_class(full):
    if full not in CLASSES:
        pkg, name = full.split("/")
        if full not in DEFS:
            raise ImportError(f"no definition for {full}")
        CLASSES[full] = make_class(name, pkg, DEFS[full])
    return CLASSES[full]


def default(typ, arr):
    if arr is not None:
        if arr > 0:
            if typ in FLOATS:
                return np.zeros(arr, dtype=np.float32 if typ == "float32" else np.float64)
            if typ in INT_RANGES:
                return np.zeros(arr, dtype=np.int64)
            return [default(typ, None) for _ in range(arr)]
        return [] if typ not in INT_RANGES and typ not in FLOATS else array.array("d" if typ in FLOATS else "q")
    if typ in FLOATS:
        return 0.0
    if typ in INT_RANGES:
        return 0
    if typ == "bool":
        return False
    if typ == "string":
        return ""
    return get_class(typ)()


def check_scalar(cls_name, name, typ, v):
    if typ in FLOATS:
        if not isinstance(v, float):
            raise AssertionError(f"{cls_name}.{name} ({typ}) needs float, got {type(v).__name__} {v!r}")
        if typ == "float32" and math.isfinite(v) and abs(v) > 3.4028235e38:
            raise AssertionError(f"{cls_name}.{name} out of float32 range")
    elif typ in INT_RANGES:
        if not isinstance(v, int) or isinstance(v, bool) and typ != "bool":
            raise AssertionError(f"{cls_name}.{name} ({typ}) needs int, got {type(v).__name__} {v!r}")
        lo, hi = INT_RANGES[typ]
        if not lo <= v <= hi:
            raise AssertionError(f"{cls_name}.{name} ({typ}) out of range: {v}")
    elif typ == "bool":
        if not isinstance(v, bool):
            raise AssertionError(f"{cls_name}.{name} (bool) needs bool, got {type(v).__name__}")
    elif typ == "string":
        if not isinstance(v, str):
            raise AssertionError(f"{cls_name}.{name} (string) needs str, got {type(v).__name__}")
    else:
        if not isinstance(v, get_class(typ)):
            raise AssertionError(f"{cls_name}.{name} needs {typ}, got {type(v).__name__}")


def make_class(name, pkg, text):
    fields, consts = parse(text, pkg)
    spec = {f[0]: (f[1], f[2]) for f in fields}

    def __init__(self, **kw):
        for fname, (typ, arr) in spec.items():
            object.__setattr__(self, fname, default(typ, arr))
        for k, v in kw.items():
            setattr(self, k, v)

    def __setattr__(self, key, value):
        if key not in spec:
            raise AttributeError(f"{pkg}/{name} has no field {key!r}")
        typ, arr = spec[key]
        if arr is None:
            check_scalar(name, key, typ, value)
        else:
            if typ == "uint8" and isinstance(value, (bytes, bytearray)):
                pass
            else:
                seq = list(value)
                if arr > 0 and len(seq) != arr:
                    raise AssertionError(f"{name}.{key} needs {arr} elements, got {len(seq)}")
                for v in seq:
                    if typ in FLOATS and isinstance(v, (np.floating,)) and isinstance(value, np.ndarray):
                        continue
                    check_scalar(name, key, typ, v)
                if arr > 0 and typ in FLOATS:
                    value = np.array(seq, dtype=np.float32 if typ == "float32" else np.float64)
        object.__setattr__(self, key, value)

    def __repr__(self):
        return f"{pkg}.{name}(" + ", ".join(f"{k}={getattr(self, k)!r}" for k in list(spec)[:8]) + ")"

    attrs = {"__init__": __init__, "__setattr__": __setattr__, "__repr__": __repr__,
             "_fields": spec, "__slots__": tuple(spec)}
    attrs.update(consts)
    return type(name, (object,), attrs)


def make_service(name, pkg, text):
    req, res = text.split("---", 1)
    return type(name, (), {"Request": make_class(f"{name}_Request", pkg, req),
                           "Response": make_class(f"{name}_Response", pkg, res)})


def make_action(name, pkg, text):
    goal, res, fb = text.split("---")
    return type(name, (), {"Goal": make_class(f"{name}_Goal", pkg, goal),
                           "Result": make_class(f"{name}_Result", pkg, res),
                           "Feedback": make_class(f"{name}_Feedback", pkg, fb)})


def load_dir(pkg, path):
    for kind, target in (("msg", DEFS), ("srv", SRV_DEFS), ("action", ACTION_DEFS)):
        d = os.path.join(path, kind)
        if os.path.isdir(d):
            for f in os.listdir(d):
                target[f"{pkg}/{os.path.splitext(f)[0]}"] = open(os.path.join(d, f)).read()


class Finder(importlib.abc.MetaPathFinder, importlib.abc.Loader):
    def find_spec(self, fullname, path, target=None):
        parts = fullname.split(".")
        pkgs = {k.split("/")[0] for k in list(DEFS) + list(SRV_DEFS) + list(ACTION_DEFS)}
        if parts[0] in pkgs and (len(parts) == 1 or (len(parts) == 2 and parts[1] in ("msg", "srv", "action"))):
            return importlib.machinery.ModuleSpec(fullname, self, is_package=len(parts) == 1)
        return None

    def create_module(self, spec):
        return types.ModuleType(spec.name)

    def exec_module(self, module):
        parts = module.__name__.split(".")
        module.__path__ = [] if len(parts) == 1 else None
        if len(parts) == 2:
            pkg, kind = parts
            src = {"msg": DEFS, "srv": SRV_DEFS, "action": ACTION_DEFS}[kind]
            for full, text in list(src.items()):
                p, n = full.split("/")
                if p != pkg:
                    continue
                if kind == "msg":
                    setattr(module, n, get_class(full))
                elif kind == "srv":
                    setattr(module, n, make_service(n, p, text))
                else:
                    setattr(module, n, make_action(n, p, text))


BUILTIN = {
    "builtin_interfaces/Time": "int32 sec\nuint32 nanosec",
    "std_msgs/Header": "builtin_interfaces/Time stamp\nstring frame_id",
    "std_msgs/Float64": "float64 data",
    "std_msgs/String": "string data",
    "std_msgs/Bool": "bool data",
    "geometry_msgs/Point": "float64 x\nfloat64 y\nfloat64 z",
    "geometry_msgs/Vector3": "float64 x\nfloat64 y\nfloat64 z",
    "geometry_msgs/Point32": "float32 x\nfloat32 y\nfloat32 z",
    "geometry_msgs/Quaternion": "float64 x\nfloat64 y\nfloat64 z\nfloat64 w 1.0",
    "geometry_msgs/Pose": "geometry_msgs/Point position\ngeometry_msgs/Quaternion orientation",
    "geometry_msgs/PoseStamped": "std_msgs/Header header\ngeometry_msgs/Pose pose",
    "geometry_msgs/Twist": "geometry_msgs/Vector3 linear\ngeometry_msgs/Vector3 angular",
    "geometry_msgs/TwistStamped": "std_msgs/Header header\ngeometry_msgs/Twist twist",
    "geometry_msgs/Vector3Stamped": "std_msgs/Header header\ngeometry_msgs/Vector3 vector",
    "geographic_msgs/GeoPoint": "float64 latitude\nfloat64 longitude\nfloat64 altitude",
    "geographic_msgs/GeoPointStamped": "std_msgs/Header header\ngeographic_msgs/GeoPoint position",
    "sensor_msgs/Image": "std_msgs/Header header\nuint32 height\nuint32 width\nstring encoding\n"
                         "uint8 is_bigendian\nuint32 step\nuint8[] data",
    "sensor_msgs/NavSatStatus": "int8 STATUS_NO_FIX = -1\nint8 STATUS_FIX = 0\nint8 status\nuint16 service",
    "sensor_msgs/NavSatFix": "std_msgs/Header header\nsensor_msgs/NavSatStatus status\nfloat64 latitude\n"
                             "float64 longitude\nfloat64 altitude",
    "action_msgs/GoalStatus": "int8 STATUS_UNKNOWN = 0\nint8 STATUS_ACCEPTED = 1\nint8 STATUS_EXECUTING = 2\n"
                              "int8 STATUS_CANCELING = 3\nint8 STATUS_SUCCEEDED = 4\nint8 STATUS_CANCELED = 5\n"
                              "int8 STATUS_ABORTED = 6\nint8 status",
    "mavros_msgs/State": "std_msgs/Header header\nbool connected\nbool armed\nbool guided\nbool manual_input\n"
                         "string mode\nuint8 system_status",
    "mavros_msgs/ExtendedState": "uint8 LANDED_STATE_UNDEFINED = 0\nuint8 LANDED_STATE_ON_GROUND = 1\n"
                                 "uint8 LANDED_STATE_IN_AIR = 2\nuint8 LANDED_STATE_TAKEOFF = 3\n"
                                 "uint8 LANDED_STATE_LANDING = 4\nstd_msgs/Header header\nuint8 landed_state",
    "mavros_msgs/PositionTarget": "uint8 FRAME_LOCAL_NED = 1\nuint16 IGNORE_PX = 1\nuint16 IGNORE_PY = 2\n"
                                  "uint16 IGNORE_PZ = 4\nuint16 IGNORE_VX = 8\nuint16 IGNORE_VY = 16\n"
                                  "uint16 IGNORE_VZ = 32\nuint16 IGNORE_AFX = 64\nuint16 IGNORE_AFY = 128\n"
                                  "uint16 IGNORE_AFZ = 256\nuint16 IGNORE_YAW = 1024\nuint16 IGNORE_YAW_RATE = 2048\n"
                                  "std_msgs/Header header\nuint8 coordinate_frame\nuint16 type_mask\n"
                                  "geometry_msgs/Point position\ngeometry_msgs/Vector3 velocity\n"
                                  "geometry_msgs/Vector3 acceleration_or_force\nfloat32 yaw\nfloat32 yaw_rate",
    "mavros_msgs/AttitudeTarget": "uint8 IGNORE_ROLL_RATE = 1\nuint8 IGNORE_PITCH_RATE = 2\n"
                                  "uint8 IGNORE_YAW_RATE = 4\nuint8 IGNORE_THRUST = 64\nuint8 IGNORE_ATTITUDE = 128\n"
                                  "std_msgs/Header header\nuint8 type_mask\ngeometry_msgs/Quaternion orientation\n"
                                  "geometry_msgs/Vector3 body_rate\nfloat32 thrust",
    "mavros_msgs/RCOut": "std_msgs/Header header\nuint16[] channels",
    "mavros_msgs/Waypoint": "uint8 frame\nuint16 command\nbool is_current\nbool autocontinue\nfloat32 param1\n"
                            "float32 param2\nfloat32 param3\nfloat32 param4\nfloat64 x_lat\nfloat64 y_long\n"
                            "float64 z_alt",
    "rcl_interfaces/ParameterType": "uint8 PARAMETER_NOT_SET = 0\nuint8 PARAMETER_BOOL = 1\n"
                                    "uint8 PARAMETER_INTEGER = 2\nuint8 PARAMETER_DOUBLE = 3\nuint8 placeholder",
    "rcl_interfaces/ParameterValue": "uint8 type\nbool bool_value\nint64 integer_value\nfloat64 double_value",
    "rcl_interfaces/Parameter": "string name\nrcl_interfaces/ParameterValue value",
    "rcl_interfaces/SetParametersResult": "bool successful\nstring reason",
}
BUILTIN_SRV = {
    "mavros_msgs/CommandBool": "bool value\n---\nbool success\nuint8 result",
    "mavros_msgs/CommandTOL": "float32 min_pitch\nfloat32 yaw\nfloat64 latitude\nfloat64 longitude\n"
                              "float32 altitude\n---\nbool success\nuint8 result",
    "mavros_msgs/SetMode": "uint8 base_mode\nstring custom_mode\n---\nbool mode_sent",
    "mavros_msgs/StreamRate": "uint8 stream_id\nuint16 message_rate\nbool on_off\n---\n",
    "mavros_msgs/WaypointClear": "---\nbool success",
    "mavros_msgs/WaypointPush": "uint16 start_index\nmavros_msgs/Waypoint[] waypoints\n---\nbool success\n"
                                "uint32 wp_transfered",
    "rcl_interfaces/SetParameters": "rcl_interfaces/Parameter[] parameters\n---\n"
                                    "rcl_interfaces/SetParametersResult[] results",
    "std_srvs/Trigger": "---\nbool success\nstring message",
    "std_srvs/SetBool": "bool data\n---\nbool success\nstring message",
    "mavros_msgs/CommandLong": "bool broadcast\nuint16 command\nuint8 confirmation\nfloat32 param1\n"
                               "float32 param2\nfloat32 param3\nfloat32 param4\nfloat32 param5\n"
                               "float32 param6\nfloat32 param7\n---\nbool success\nuint8 result",
}


def install(interfaces_dir):
    DEFS.update(BUILTIN)
    SRV_DEFS.update(BUILTIN_SRV)
    load_dir("mission_interfaces", interfaces_dir)
    sys.meta_path.insert(0, Finder())
