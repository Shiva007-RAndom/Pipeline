# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mission_interfaces:msg/RedPatch.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'bbox_xywh'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RedPatch(type):
    """Metaclass of message 'RedPatch'."""

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
                'mission_interfaces.msg.RedPatch')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__red_patch
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__red_patch
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__red_patch
            cls._TYPE_SUPPORT = module.type_support_msg__msg__red_patch
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__red_patch

            from geometry_msgs.msg import Point32
            if Point32.__class__._TYPE_SUPPORT is None:
                Point32.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RedPatch(metaclass=Metaclass_RedPatch):
    """Message class 'RedPatch'."""

    __slots__ = [
        '_centroid_x',
        '_centroid_y',
        '_offset_x',
        '_offset_y',
        '_area_px',
        '_area_fraction',
        '_bbox_xywh',
        '_contour',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'centroid_x': 'float',
        'centroid_y': 'float',
        'offset_x': 'float',
        'offset_y': 'float',
        'area_px': 'float',
        'area_fraction': 'float',
        'bbox_xywh': 'int32[4]',
        'contour': 'sequence<geometry_msgs/Point32>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 4),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point32')),  # noqa: E501
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
        self.centroid_x = kwargs.get('centroid_x', float())
        self.centroid_y = kwargs.get('centroid_y', float())
        self.offset_x = kwargs.get('offset_x', float())
        self.offset_y = kwargs.get('offset_y', float())
        self.area_px = kwargs.get('area_px', float())
        self.area_fraction = kwargs.get('area_fraction', float())
        if 'bbox_xywh' not in kwargs:
            self.bbox_xywh = numpy.zeros(4, dtype=numpy.int32)
        else:
            self.bbox_xywh = kwargs.get('bbox_xywh')
        self.contour = kwargs.get('contour', [])

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
        if self.centroid_x != other.centroid_x:
            return False
        if self.centroid_y != other.centroid_y:
            return False
        if self.offset_x != other.offset_x:
            return False
        if self.offset_y != other.offset_y:
            return False
        if self.area_px != other.area_px:
            return False
        if self.area_fraction != other.area_fraction:
            return False
        if any(self.bbox_xywh != other.bbox_xywh):
            return False
        if self.contour != other.contour:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def centroid_x(self):
        """Message field 'centroid_x'."""
        return self._centroid_x

    @centroid_x.setter
    def centroid_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'centroid_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'centroid_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._centroid_x = value

    @builtins.property
    def centroid_y(self):
        """Message field 'centroid_y'."""
        return self._centroid_y

    @centroid_y.setter
    def centroid_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'centroid_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'centroid_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._centroid_y = value

    @builtins.property
    def offset_x(self):
        """Message field 'offset_x'."""
        return self._offset_x

    @offset_x.setter
    def offset_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'offset_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'offset_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._offset_x = value

    @builtins.property
    def offset_y(self):
        """Message field 'offset_y'."""
        return self._offset_y

    @offset_y.setter
    def offset_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'offset_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'offset_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._offset_y = value

    @builtins.property
    def area_px(self):
        """Message field 'area_px'."""
        return self._area_px

    @area_px.setter
    def area_px(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'area_px' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'area_px' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._area_px = value

    @builtins.property
    def area_fraction(self):
        """Message field 'area_fraction'."""
        return self._area_fraction

    @area_fraction.setter
    def area_fraction(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'area_fraction' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'area_fraction' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._area_fraction = value

    @builtins.property
    def bbox_xywh(self):
        """Message field 'bbox_xywh'."""
        return self._bbox_xywh

    @bbox_xywh.setter
    def bbox_xywh(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.int32, \
                    "The 'bbox_xywh' numpy.ndarray() must have the dtype of 'numpy.int32'"
                assert value.size == 4, \
                    "The 'bbox_xywh' numpy.ndarray() must have a size of 4"
                self._bbox_xywh = value
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
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'bbox_xywh' field must be a set or sequence with length 4 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._bbox_xywh = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def contour(self):
        """Message field 'contour'."""
        return self._contour

    @contour.setter
    def contour(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point32
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
                 all(isinstance(v, Point32) for v in value) and
                 True), \
                "The 'contour' field must be a set or sequence and each value of type 'Point32'"
        self._contour = value
