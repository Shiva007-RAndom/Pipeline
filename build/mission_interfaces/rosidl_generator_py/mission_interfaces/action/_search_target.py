# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mission_interfaces:action/SearchTarget.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SearchTarget_Goal(type):
    """Metaclass of message 'SearchTarget_Goal'."""

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
                'mission_interfaces.action.SearchTarget_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__search_target__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__search_target__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__search_target__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__search_target__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__search_target__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SearchTarget_Goal(metaclass=Metaclass_SearchTarget_Goal):
    """Message class 'SearchTarget_Goal'."""

    __slots__ = [
        '_geofence_file',
        '_altitude',
        '_yaw',
        '_wall_margin',
        '_overlap',
        '_rows',
        '_speed',
        '_red_zone_margin',
        '_confirm_matches',
        '_max_revisits',
        '_revisit_time',
        '_skip_fly_to_target',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'geofence_file': 'string',
        'altitude': 'float',
        'yaw': 'float',
        'wall_margin': 'float',
        'overlap': 'float',
        'rows': 'uint8',
        'speed': 'float',
        'red_zone_margin': 'float',
        'confirm_matches': 'uint8',
        'max_revisits': 'uint16',
        'revisit_time': 'float',
        'skip_fly_to_target': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.geofence_file = kwargs.get('geofence_file', str())
        self.altitude = kwargs.get('altitude', float())
        self.yaw = kwargs.get('yaw', float())
        self.wall_margin = kwargs.get('wall_margin', float())
        self.overlap = kwargs.get('overlap', float())
        self.rows = kwargs.get('rows', int())
        self.speed = kwargs.get('speed', float())
        self.red_zone_margin = kwargs.get('red_zone_margin', float())
        self.confirm_matches = kwargs.get('confirm_matches', int())
        self.max_revisits = kwargs.get('max_revisits', int())
        self.revisit_time = kwargs.get('revisit_time', float())
        self.skip_fly_to_target = kwargs.get('skip_fly_to_target', bool())

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
        if self.geofence_file != other.geofence_file:
            return False
        if self.altitude != other.altitude:
            return False
        if self.yaw != other.yaw:
            return False
        if self.wall_margin != other.wall_margin:
            return False
        if self.overlap != other.overlap:
            return False
        if self.rows != other.rows:
            return False
        if self.speed != other.speed:
            return False
        if self.red_zone_margin != other.red_zone_margin:
            return False
        if self.confirm_matches != other.confirm_matches:
            return False
        if self.max_revisits != other.max_revisits:
            return False
        if self.revisit_time != other.revisit_time:
            return False
        if self.skip_fly_to_target != other.skip_fly_to_target:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def geofence_file(self):
        """Message field 'geofence_file'."""
        return self._geofence_file

    @geofence_file.setter
    def geofence_file(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'geofence_file' field must be of type 'str'"
        self._geofence_file = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'altitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._altitude = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw = value

    @builtins.property
    def wall_margin(self):
        """Message field 'wall_margin'."""
        return self._wall_margin

    @wall_margin.setter
    def wall_margin(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'wall_margin' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wall_margin' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wall_margin = value

    @builtins.property
    def overlap(self):
        """Message field 'overlap'."""
        return self._overlap

    @overlap.setter
    def overlap(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'overlap' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'overlap' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._overlap = value

    @builtins.property
    def rows(self):
        """Message field 'rows'."""
        return self._rows

    @rows.setter
    def rows(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'rows' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rows' field must be an unsigned integer in [0, 255]"
        self._rows = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value

    @builtins.property
    def red_zone_margin(self):
        """Message field 'red_zone_margin'."""
        return self._red_zone_margin

    @red_zone_margin.setter
    def red_zone_margin(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'red_zone_margin' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'red_zone_margin' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._red_zone_margin = value

    @builtins.property
    def confirm_matches(self):
        """Message field 'confirm_matches'."""
        return self._confirm_matches

    @confirm_matches.setter
    def confirm_matches(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'confirm_matches' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'confirm_matches' field must be an unsigned integer in [0, 255]"
        self._confirm_matches = value

    @builtins.property
    def max_revisits(self):
        """Message field 'max_revisits'."""
        return self._max_revisits

    @max_revisits.setter
    def max_revisits(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'max_revisits' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_revisits' field must be an unsigned integer in [0, 65535]"
        self._max_revisits = value

    @builtins.property
    def revisit_time(self):
        """Message field 'revisit_time'."""
        return self._revisit_time

    @revisit_time.setter
    def revisit_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'revisit_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'revisit_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._revisit_time = value

    @builtins.property
    def skip_fly_to_target(self):
        """Message field 'skip_fly_to_target'."""
        return self._skip_fly_to_target

    @skip_fly_to_target.setter
    def skip_fly_to_target(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'skip_fly_to_target' field must be of type 'bool'"
        self._skip_fly_to_target = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_SearchTarget_Result(type):
    """Metaclass of message 'SearchTarget_Result'."""

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
                'mission_interfaces.action.SearchTarget_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__search_target__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__search_target__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__search_target__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__search_target__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__search_target__result

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SearchTarget_Result(metaclass=Metaclass_SearchTarget_Result):
    """Message class 'SearchTarget_Result'."""

    __slots__ = [
        '_success',
        '_message',
        '_matched',
        '_score',
        '_decoded_text',
        '_target',
        '_latitude',
        '_longitude',
        '_red_zones',
        '_coverage',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'matched': 'boolean',
        'score': 'float',
        'decoded_text': 'string',
        'target': 'geometry_msgs/Point',
        'latitude': 'double',
        'longitude': 'double',
        'red_zones': 'uint16',
        'coverage': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.matched = kwargs.get('matched', bool())
        self.score = kwargs.get('score', float())
        self.decoded_text = kwargs.get('decoded_text', str())
        from geometry_msgs.msg import Point
        self.target = kwargs.get('target', Point())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.red_zones = kwargs.get('red_zones', int())
        self.coverage = kwargs.get('coverage', float())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.matched != other.matched:
            return False
        if self.score != other.score:
            return False
        if self.decoded_text != other.decoded_text:
            return False
        if self.target != other.target:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.red_zones != other.red_zones:
            return False
        if self.coverage != other.coverage:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

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
    def target(self):
        """Message field 'target'."""
        return self._target

    @target.setter
    def target(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'target' field must be a sub message of type 'Point'"
        self._target = value

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

    @builtins.property
    def red_zones(self):
        """Message field 'red_zones'."""
        return self._red_zones

    @red_zones.setter
    def red_zones(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'red_zones' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_zones' field must be an unsigned integer in [0, 65535]"
        self._red_zones = value

    @builtins.property
    def coverage(self):
        """Message field 'coverage'."""
        return self._coverage

    @coverage.setter
    def coverage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'coverage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'coverage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._coverage = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_SearchTarget_Feedback(type):
    """Metaclass of message 'SearchTarget_Feedback'."""

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
                'mission_interfaces.action.SearchTarget_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__search_target__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__search_target__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__search_target__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__search_target__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__search_target__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SearchTarget_Feedback(metaclass=Metaclass_SearchTarget_Feedback):
    """Message class 'SearchTarget_Feedback'."""

    __slots__ = [
        '_state',
        '_steering',
        '_best_score',
        '_red_zones',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'state': 'string',
        'steering': 'string',
        'best_score': 'float',
        'red_zones': 'uint16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.state = kwargs.get('state', str())
        self.steering = kwargs.get('steering', str())
        self.best_score = kwargs.get('best_score', float())
        self.red_zones = kwargs.get('red_zones', int())

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
        if self.state != other.state:
            return False
        if self.steering != other.steering:
            return False
        if self.best_score != other.best_score:
            return False
        if self.red_zones != other.red_zones:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value

    @builtins.property
    def steering(self):
        """Message field 'steering'."""
        return self._steering

    @steering.setter
    def steering(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'steering' field must be of type 'str'"
        self._steering = value

    @builtins.property
    def best_score(self):
        """Message field 'best_score'."""
        return self._best_score

    @best_score.setter
    def best_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'best_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'best_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._best_score = value

    @builtins.property
    def red_zones(self):
        """Message field 'red_zones'."""
        return self._red_zones

    @red_zones.setter
    def red_zones(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'red_zones' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_zones' field must be an unsigned integer in [0, 65535]"
        self._red_zones = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SearchTarget_SendGoal_Request(type):
    """Metaclass of message 'SearchTarget_SendGoal_Request'."""

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
                'mission_interfaces.action.SearchTarget_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__search_target__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__search_target__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__search_target__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__search_target__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__search_target__send_goal__request

            from mission_interfaces.action import SearchTarget
            if SearchTarget.Goal.__class__._TYPE_SUPPORT is None:
                SearchTarget.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SearchTarget_SendGoal_Request(metaclass=Metaclass_SearchTarget_SendGoal_Request):
    """Message class 'SearchTarget_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'mission_interfaces/SearchTarget_Goal',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mission_interfaces', 'action'], 'SearchTarget_Goal'),  # noqa: E501
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
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from mission_interfaces.action._search_target import SearchTarget_Goal
        self.goal = kwargs.get('goal', SearchTarget_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if self._check_fields:
            from mission_interfaces.action._search_target import SearchTarget_Goal
            assert \
                isinstance(value, SearchTarget_Goal), \
                "The 'goal' field must be a sub message of type 'SearchTarget_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SearchTarget_SendGoal_Response(type):
    """Metaclass of message 'SearchTarget_SendGoal_Response'."""

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
                'mission_interfaces.action.SearchTarget_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__search_target__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__search_target__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__search_target__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__search_target__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__search_target__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SearchTarget_SendGoal_Response(metaclass=Metaclass_SearchTarget_SendGoal_Response):
    """Message class 'SearchTarget_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
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
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SearchTarget_SendGoal_Event(type):
    """Metaclass of message 'SearchTarget_SendGoal_Event'."""

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
                'mission_interfaces.action.SearchTarget_SendGoal_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__search_target__send_goal__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__search_target__send_goal__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__search_target__send_goal__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__search_target__send_goal__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__search_target__send_goal__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SearchTarget_SendGoal_Event(metaclass=Metaclass_SearchTarget_SendGoal_Event):
    """Message class 'SearchTarget_SendGoal_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<mission_interfaces/SearchTarget_SendGoal_Request, 1>',
        'response': 'sequence<mission_interfaces/SearchTarget_SendGoal_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['mission_interfaces', 'action'], 'SearchTarget_SendGoal_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['mission_interfaces', 'action'], 'SearchTarget_SendGoal_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from mission_interfaces.action import SearchTarget_SendGoal_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, SearchTarget_SendGoal_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SearchTarget_SendGoal_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from mission_interfaces.action import SearchTarget_SendGoal_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, SearchTarget_SendGoal_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SearchTarget_SendGoal_Response'"
        self._response = value


class Metaclass_SearchTarget_SendGoal(type):
    """Metaclass of service 'SearchTarget_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mission_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mission_interfaces.action.SearchTarget_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__search_target__send_goal

            from mission_interfaces.action import _search_target
            if _search_target.Metaclass_SearchTarget_SendGoal_Request._TYPE_SUPPORT is None:
                _search_target.Metaclass_SearchTarget_SendGoal_Request.__import_type_support__()
            if _search_target.Metaclass_SearchTarget_SendGoal_Response._TYPE_SUPPORT is None:
                _search_target.Metaclass_SearchTarget_SendGoal_Response.__import_type_support__()
            if _search_target.Metaclass_SearchTarget_SendGoal_Event._TYPE_SUPPORT is None:
                _search_target.Metaclass_SearchTarget_SendGoal_Event.__import_type_support__()


class SearchTarget_SendGoal(metaclass=Metaclass_SearchTarget_SendGoal):
    from mission_interfaces.action._search_target import SearchTarget_SendGoal_Request as Request
    from mission_interfaces.action._search_target import SearchTarget_SendGoal_Response as Response
    from mission_interfaces.action._search_target import SearchTarget_SendGoal_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SearchTarget_GetResult_Request(type):
    """Metaclass of message 'SearchTarget_GetResult_Request'."""

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
                'mission_interfaces.action.SearchTarget_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__search_target__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__search_target__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__search_target__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__search_target__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__search_target__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SearchTarget_GetResult_Request(metaclass=Metaclass_SearchTarget_GetResult_Request):
    """Message class 'SearchTarget_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
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
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SearchTarget_GetResult_Response(type):
    """Metaclass of message 'SearchTarget_GetResult_Response'."""

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
                'mission_interfaces.action.SearchTarget_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__search_target__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__search_target__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__search_target__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__search_target__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__search_target__get_result__response

            from mission_interfaces.action import SearchTarget
            if SearchTarget.Result.__class__._TYPE_SUPPORT is None:
                SearchTarget.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SearchTarget_GetResult_Response(metaclass=Metaclass_SearchTarget_GetResult_Response):
    """Message class 'SearchTarget_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'mission_interfaces/SearchTarget_Result',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mission_interfaces', 'action'], 'SearchTarget_Result'),  # noqa: E501
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
        self.status = kwargs.get('status', int())
        from mission_interfaces.action._search_target import SearchTarget_Result
        self.result = kwargs.get('result', SearchTarget_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if self._check_fields:
            from mission_interfaces.action._search_target import SearchTarget_Result
            assert \
                isinstance(value, SearchTarget_Result), \
                "The 'result' field must be a sub message of type 'SearchTarget_Result'"
        self._result = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SearchTarget_GetResult_Event(type):
    """Metaclass of message 'SearchTarget_GetResult_Event'."""

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
                'mission_interfaces.action.SearchTarget_GetResult_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__search_target__get_result__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__search_target__get_result__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__search_target__get_result__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__search_target__get_result__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__search_target__get_result__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SearchTarget_GetResult_Event(metaclass=Metaclass_SearchTarget_GetResult_Event):
    """Message class 'SearchTarget_GetResult_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<mission_interfaces/SearchTarget_GetResult_Request, 1>',
        'response': 'sequence<mission_interfaces/SearchTarget_GetResult_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['mission_interfaces', 'action'], 'SearchTarget_GetResult_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['mission_interfaces', 'action'], 'SearchTarget_GetResult_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from mission_interfaces.action import SearchTarget_GetResult_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, SearchTarget_GetResult_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SearchTarget_GetResult_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from mission_interfaces.action import SearchTarget_GetResult_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, SearchTarget_GetResult_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SearchTarget_GetResult_Response'"
        self._response = value


class Metaclass_SearchTarget_GetResult(type):
    """Metaclass of service 'SearchTarget_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mission_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mission_interfaces.action.SearchTarget_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__search_target__get_result

            from mission_interfaces.action import _search_target
            if _search_target.Metaclass_SearchTarget_GetResult_Request._TYPE_SUPPORT is None:
                _search_target.Metaclass_SearchTarget_GetResult_Request.__import_type_support__()
            if _search_target.Metaclass_SearchTarget_GetResult_Response._TYPE_SUPPORT is None:
                _search_target.Metaclass_SearchTarget_GetResult_Response.__import_type_support__()
            if _search_target.Metaclass_SearchTarget_GetResult_Event._TYPE_SUPPORT is None:
                _search_target.Metaclass_SearchTarget_GetResult_Event.__import_type_support__()


class SearchTarget_GetResult(metaclass=Metaclass_SearchTarget_GetResult):
    from mission_interfaces.action._search_target import SearchTarget_GetResult_Request as Request
    from mission_interfaces.action._search_target import SearchTarget_GetResult_Response as Response
    from mission_interfaces.action._search_target import SearchTarget_GetResult_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SearchTarget_FeedbackMessage(type):
    """Metaclass of message 'SearchTarget_FeedbackMessage'."""

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
                'mission_interfaces.action.SearchTarget_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__search_target__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__search_target__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__search_target__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__search_target__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__search_target__feedback_message

            from mission_interfaces.action import SearchTarget
            if SearchTarget.Feedback.__class__._TYPE_SUPPORT is None:
                SearchTarget.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SearchTarget_FeedbackMessage(metaclass=Metaclass_SearchTarget_FeedbackMessage):
    """Message class 'SearchTarget_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'mission_interfaces/SearchTarget_Feedback',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mission_interfaces', 'action'], 'SearchTarget_Feedback'),  # noqa: E501
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
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from mission_interfaces.action._search_target import SearchTarget_Feedback
        self.feedback = kwargs.get('feedback', SearchTarget_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if self._check_fields:
            from mission_interfaces.action._search_target import SearchTarget_Feedback
            assert \
                isinstance(value, SearchTarget_Feedback), \
                "The 'feedback' field must be a sub message of type 'SearchTarget_Feedback'"
        self._feedback = value


class Metaclass_SearchTarget(type):
    """Metaclass of action 'SearchTarget'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mission_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mission_interfaces.action.SearchTarget')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__search_target

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from mission_interfaces.action import _search_target
            if _search_target.Metaclass_SearchTarget_SendGoal._TYPE_SUPPORT is None:
                _search_target.Metaclass_SearchTarget_SendGoal.__import_type_support__()
            if _search_target.Metaclass_SearchTarget_GetResult._TYPE_SUPPORT is None:
                _search_target.Metaclass_SearchTarget_GetResult.__import_type_support__()
            if _search_target.Metaclass_SearchTarget_FeedbackMessage._TYPE_SUPPORT is None:
                _search_target.Metaclass_SearchTarget_FeedbackMessage.__import_type_support__()


class SearchTarget(metaclass=Metaclass_SearchTarget):

    # The goal message defined in the action definition.
    from mission_interfaces.action._search_target import SearchTarget_Goal as Goal
    # The result message defined in the action definition.
    from mission_interfaces.action._search_target import SearchTarget_Result as Result
    # The feedback message defined in the action definition.
    from mission_interfaces.action._search_target import SearchTarget_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from mission_interfaces.action._search_target import SearchTarget_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from mission_interfaces.action._search_target import SearchTarget_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from mission_interfaces.action._search_target import SearchTarget_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
