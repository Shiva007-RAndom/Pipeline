# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mission_interfaces:msg/RedMap.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RedMap(type):
    """Metaclass of message 'RedMap'."""

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
                'mission_interfaces.msg.RedMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__red_map
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__red_map
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__red_map
            cls._TYPE_SUPPORT = module.type_support_msg__msg__red_map
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__red_map

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


class RedMap(metaclass=Metaclass_RedMap):
    """Message class 'RedMap'."""

    __slots__ = [
        '_header',
        '_origin_north',
        '_origin_east',
        '_axis_heading',
        '_cell',
        '_grid_x0',
        '_grid_y0',
        '_width',
        '_height',
        '_data',
        '_version',
        '_margin',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'origin_north': 'double',
        'origin_east': 'double',
        'axis_heading': 'double',
        'cell': 'float',
        'grid_x0': 'float',
        'grid_y0': 'float',
        'width': 'uint32',
        'height': 'uint32',
        'data': 'sequence<uint8>',
        'version': 'uint32',
        'margin': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.origin_north = kwargs.get('origin_north', float())
        self.origin_east = kwargs.get('origin_east', float())
        self.axis_heading = kwargs.get('axis_heading', float())
        self.cell = kwargs.get('cell', float())
        self.grid_x0 = kwargs.get('grid_x0', float())
        self.grid_y0 = kwargs.get('grid_y0', float())
        self.width = kwargs.get('width', int())
        self.height = kwargs.get('height', int())
        self.data = array.array('B', kwargs.get('data', []))
        self.version = kwargs.get('version', int())
        self.margin = kwargs.get('margin', float())

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
        if self.origin_north != other.origin_north:
            return False
        if self.origin_east != other.origin_east:
            return False
        if self.axis_heading != other.axis_heading:
            return False
        if self.cell != other.cell:
            return False
        if self.grid_x0 != other.grid_x0:
            return False
        if self.grid_y0 != other.grid_y0:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.data != other.data:
            return False
        if self.version != other.version:
            return False
        if self.margin != other.margin:
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
    def origin_north(self):
        """Message field 'origin_north'."""
        return self._origin_north

    @origin_north.setter
    def origin_north(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'origin_north' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'origin_north' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._origin_north = value

    @builtins.property
    def origin_east(self):
        """Message field 'origin_east'."""
        return self._origin_east

    @origin_east.setter
    def origin_east(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'origin_east' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'origin_east' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._origin_east = value

    @builtins.property
    def axis_heading(self):
        """Message field 'axis_heading'."""
        return self._axis_heading

    @axis_heading.setter
    def axis_heading(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'axis_heading' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'axis_heading' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._axis_heading = value

    @builtins.property
    def cell(self):
        """Message field 'cell'."""
        return self._cell

    @cell.setter
    def cell(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cell' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cell' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cell = value

    @builtins.property
    def grid_x0(self):
        """Message field 'grid_x0'."""
        return self._grid_x0

    @grid_x0.setter
    def grid_x0(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'grid_x0' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'grid_x0' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._grid_x0 = value

    @builtins.property
    def grid_y0(self):
        """Message field 'grid_y0'."""
        return self._grid_y0

    @grid_y0.setter
    def grid_y0(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'grid_y0' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'grid_y0' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._grid_y0 = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'width' field must be an unsigned integer in [0, 4294967295]"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'height' field must be an unsigned integer in [0, 4294967295]"
        self._height = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'data' array.array() must have the type code of 'B'"
                self._data = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = array.array('B', value)

    @builtins.property
    def version(self):
        """Message field 'version'."""
        return self._version

    @version.setter
    def version(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'version' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'version' field must be an unsigned integer in [0, 4294967295]"
        self._version = value

    @builtins.property
    def margin(self):
        """Message field 'margin'."""
        return self._margin

    @margin.setter
    def margin(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'margin' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'margin' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._margin = value
