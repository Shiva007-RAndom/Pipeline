# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mission_interfaces:msg/RedZoneResult.idl
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


class Metaclass_RedZoneResult(type):
    """Metaclass of message 'RedZoneResult'."""

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
                'mission_interfaces.msg.RedZoneResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__red_zone_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__red_zone_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__red_zone_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__red_zone_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__red_zone_result

            from mission_interfaces.msg import RedPatch
            if RedPatch.__class__._TYPE_SUPPORT is None:
                RedPatch.__class__.__import_type_support__()

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


class RedZoneResult(metaclass=Metaclass_RedZoneResult):
    """Message class 'RedZoneResult'."""

    __slots__ = [
        '_header',
        '_image_width',
        '_image_height',
        '_detected',
        '_num_patches',
        '_total_area_fraction',
        '_patches',
        '_processing_time_ms',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'image_width': 'uint32',
        'image_height': 'uint32',
        'detected': 'boolean',
        'num_patches': 'uint16',
        'total_area_fraction': 'float',
        'patches': 'sequence<mission_interfaces/RedPatch>',
        'processing_time_ms': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['mission_interfaces', 'msg'], 'RedPatch')),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.image_width = kwargs.get('image_width', int())
        self.image_height = kwargs.get('image_height', int())
        self.detected = kwargs.get('detected', bool())
        self.num_patches = kwargs.get('num_patches', int())
        self.total_area_fraction = kwargs.get('total_area_fraction', float())
        self.patches = kwargs.get('patches', [])
        self.processing_time_ms = kwargs.get('processing_time_ms', float())

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
        if self.image_width != other.image_width:
            return False
        if self.image_height != other.image_height:
            return False
        if self.detected != other.detected:
            return False
        if self.num_patches != other.num_patches:
            return False
        if self.total_area_fraction != other.total_area_fraction:
            return False
        if self.patches != other.patches:
            return False
        if self.processing_time_ms != other.processing_time_ms:
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
    def num_patches(self):
        """Message field 'num_patches'."""
        return self._num_patches

    @num_patches.setter
    def num_patches(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_patches' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'num_patches' field must be an unsigned integer in [0, 65535]"
        self._num_patches = value

    @builtins.property
    def total_area_fraction(self):
        """Message field 'total_area_fraction'."""
        return self._total_area_fraction

    @total_area_fraction.setter
    def total_area_fraction(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'total_area_fraction' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_area_fraction' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_area_fraction = value

    @builtins.property
    def patches(self):
        """Message field 'patches'."""
        return self._patches

    @patches.setter
    def patches(self, value):
        if self._check_fields:
            from mission_interfaces.msg import RedPatch
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
                 all(isinstance(v, RedPatch) for v in value) and
                 True), \
                "The 'patches' field must be a set or sequence and each value of type 'RedPatch'"
        self._patches = value

    @builtins.property
    def processing_time_ms(self):
        """Message field 'processing_time_ms'."""
        return self._processing_time_ms

    @processing_time_ms.setter
    def processing_time_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'processing_time_ms' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'processing_time_ms' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._processing_time_ms = value
