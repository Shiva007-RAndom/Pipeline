# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mission_interfaces:msg/QrDetection.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'corners'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_QrDetection(type):
    """Metaclass of message 'QrDetection'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mission_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mission_interfaces.msg.QrDetection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__qr_detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__qr_detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__qr_detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__qr_detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__qr_detection

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class QrDetection(metaclass=Metaclass_QrDetection):
    """Message class 'QrDetection'."""

    __slots__ = [
        '_header',
        '_detected',
        '_corners',
        '_u',
        '_v',
        '_decoded_text',
        '_reference_ready',
        '_score',
        '_matched',
        '_match_threshold',
        '_image_width',
        '_image_height',
        '_pose_valid',
        '_alt_rel',
        '_drone_x',
        '_drone_y',
        '_drone_z',
        '_drone_heading',
        '_position_estimate',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'detected': 'boolean',
        'corners': 'float[8]',
        'u': 'float',
        'v': 'float',
        'decoded_text': 'string',
        'reference_ready': 'boolean',
        'score': 'float',
        'matched': 'boolean',
        'match_threshold': 'float',
        'image_width': 'uint32',
        'image_height': 'uint32',
        'pose_valid': 'boolean',
        'alt_rel': 'float',
        'drone_x': 'float',
        'drone_y': 'float',
        'drone_z': 'float',
        'drone_heading': 'float',
        'position_estimate': 'geometry_msgs/Point',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 8),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.detected = kwargs.get('detected', bool())
        if 'corners' not in kwargs:
            self.corners = numpy.zeros(8, dtype=numpy.float32)
        else:
            self.corners = kwargs.get('corners')
        self.u = kwargs.get('u', float())
        self.v = kwargs.get('v', float())
        self.decoded_text = kwargs.get('decoded_text', str())
        self.reference_ready = kwargs.get('reference_ready', bool())
        self.score = kwargs.get('score', float())
        self.matched = kwargs.get('matched', bool())
        self.match_threshold = kwargs.get('match_threshold', float())
        self.image_width = kwargs.get('image_width', int())
        self.image_height = kwargs.get('image_height', int())
        self.pose_valid = kwargs.get('pose_valid', bool())
        self.alt_rel = kwargs.get('alt_rel', float())
        self.drone_x = kwargs.get('drone_x', float())
        self.drone_y = kwargs.get('drone_y', float())
        self.drone_z = kwargs.get('drone_z', float())
        self.drone_heading = kwargs.get('drone_heading', float())
        from geometry_msgs.msg import Point
        self.position_estimate = kwargs.get('position_estimate', Point())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.detected != other.detected:
            return False
        if any(self.corners != other.corners):
            return False
        if self.u != other.u:
            return False
        if self.v != other.v:
            return False
        if self.decoded_text != other.decoded_text:
            return False
        if self.reference_ready != other.reference_ready:
            return False
        if self.score != other.score:
            return False
        if self.matched != other.matched:
            return False
        if self.match_threshold != other.match_threshold:
            return False
        if self.image_width != other.image_width:
            return False
        if self.image_height != other.image_height:
            return False
        if self.pose_valid != other.pose_valid:
            return False
        if self.alt_rel != other.alt_rel:
            return False
        if self.drone_x != other.drone_x:
            return False
        if self.drone_y != other.drone_y:
            return False
        if self.drone_z != other.drone_z:
            return False
        if self.drone_heading != other.drone_heading:
            return False
        if self.position_estimate != other.position_estimate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def detected(self):
        """Message field 'detected'."""
        return self._detected

    @detected.setter
    def detected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'detected' field must be of type 'bool'"
        self._detected = value

    @builtins.property
    def corners(self):
        """Message field 'corners'."""
        return self._corners

    @corners.setter
    def corners(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'corners' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 8, \
                    "The 'corners' numpy.ndarray() must have a size of 8"
                self._corners = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 8 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'corners' field must be a set or sequence with length 8 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._corners = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def u(self):
        """Message field 'u'."""
        return self._u

    @u.setter
    def u(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'u' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u = value

    @builtins.property
    def v(self):
        """Message field 'v'."""
        return self._v

    @v.setter
    def v(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'v' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'v' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._v = value

    @builtins.property
    def decoded_text(self):
        """Message field 'decoded_text'."""
        return self._decoded_text

    @decoded_text.setter
    def decoded_text(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'decoded_text' field must be of type 'str'"
        self._decoded_text = value

    @builtins.property
    def reference_ready(self):
        """Message field 'reference_ready'."""
        return self._reference_ready

    @reference_ready.setter
    def reference_ready(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'reference_ready' field must be of type 'bool'"
        self._reference_ready = value

    @builtins.property
    def score(self):
        """Message field 'score'."""
        return self._score

    @score.setter
    def score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._score = value

    @builtins.property
    def matched(self):
        """Message field 'matched'."""
        return self._matched

    @matched.setter
    def matched(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'matched' field must be of type 'bool'"
        self._matched = value

    @builtins.property
    def match_threshold(self):
        """Message field 'match_threshold'."""
        return self._match_threshold

    @match_threshold.setter
    def match_threshold(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'match_threshold' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'match_threshold' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._match_threshold = value

    @builtins.property
    def image_width(self):
        """Message field 'image_width'."""
        return self._image_width

    @image_width.setter
    def image_width(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'image_width' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'image_width' field must be an unsigned integer in [0, 4294967295]"
        self._image_width = value

    @builtins.property
    def image_height(self):
        """Message field 'image_height'."""
        return self._image_height

    @image_height.setter
    def image_height(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'image_height' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'image_height' field must be an unsigned integer in [0, 4294967295]"
        self._image_height = value

    @builtins.property
    def pose_valid(self):
        """Message field 'pose_valid'."""
        return self._pose_valid

    @pose_valid.setter
    def pose_valid(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'pose_valid' field must be of type 'bool'"
        self._pose_valid = value

    @builtins.property
    def alt_rel(self):
        """Message field 'alt_rel'."""
        return self._alt_rel

    @alt_rel.setter
    def alt_rel(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'alt_rel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alt_rel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alt_rel = value

    @builtins.property
    def drone_x(self):
        """Message field 'drone_x'."""
        return self._drone_x

    @drone_x.setter
    def drone_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'drone_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'drone_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._drone_x = value

    @builtins.property
    def drone_y(self):
        """Message field 'drone_y'."""
        return self._drone_y

    @drone_y.setter
    def drone_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'drone_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'drone_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._drone_y = value

    @builtins.property
    def drone_z(self):
        """Message field 'drone_z'."""
        return self._drone_z

    @drone_z.setter
    def drone_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'drone_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'drone_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._drone_z = value

    @builtins.property
    def drone_heading(self):
        """Message field 'drone_heading'."""
        return self._drone_heading

    @drone_heading.setter
    def drone_heading(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'drone_heading' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'drone_heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._drone_heading = value

    @builtins.property
    def position_estimate(self):
        """Message field 'position_estimate'."""
        return self._position_estimate

    @position_estimate.setter
    def position_estimate(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position_estimate' field must be a sub message of type 'Point'"
        self._position_estimate = value
