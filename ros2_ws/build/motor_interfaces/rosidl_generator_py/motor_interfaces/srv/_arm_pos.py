# generated from rosidl_generator_py/resource/_idl.py.em
# with input from motor_interfaces:srv/ArmPos.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'positions'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmPos_Request(type):
    """Metaclass of message 'ArmPos_Request'."""

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
            module = import_type_support('motor_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'motor_interfaces.srv.ArmPos_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__arm_pos__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__arm_pos__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__arm_pos__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__arm_pos__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__arm_pos__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmPos_Request(metaclass=Metaclass_ArmPos_Request):
    """Message class 'ArmPos_Request'."""

    __slots__ = [
        '_positions',
    ]

    _fields_and_field_types = {
        'positions': 'int16[6]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'positions' not in kwargs:
            self.positions = numpy.zeros(6, dtype=numpy.int16)
        else:
            self.positions = numpy.array(kwargs.get('positions'), dtype=numpy.int16)
            assert self.positions.shape == (6, )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if all(self.positions != other.positions):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def positions(self):
        """Message field 'positions'."""
        return self._positions

    @positions.setter
    def positions(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'positions' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 6, \
                "The 'positions' numpy.ndarray() must have a size of 6"
            self._positions = value
            return
        if __debug__:
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
                 len(value) == 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'positions' field must be a set or sequence with length 6 and each value of type 'int' and each integer in [-32768, 32767]"
        self._positions = numpy.array(value, dtype=numpy.int16)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArmPos_Response(type):
    """Metaclass of message 'ArmPos_Response'."""

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
            module = import_type_support('motor_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'motor_interfaces.srv.ArmPos_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__arm_pos__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__arm_pos__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__arm_pos__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__arm_pos__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__arm_pos__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmPos_Response(metaclass=Metaclass_ArmPos_Response):
    """Message class 'ArmPos_Response'."""

    __slots__ = [
        '_reached',
    ]

    _fields_and_field_types = {
        'reached': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.reached = kwargs.get('reached', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.reached != other.reached:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def reached(self):
        """Message field 'reached'."""
        return self._reached

    @reached.setter
    def reached(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reached' field must be of type 'bool'"
        self._reached = value


class Metaclass_ArmPos(type):
    """Metaclass of service 'ArmPos'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('motor_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'motor_interfaces.srv.ArmPos')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__arm_pos

            from motor_interfaces.srv import _arm_pos
            if _arm_pos.Metaclass_ArmPos_Request._TYPE_SUPPORT is None:
                _arm_pos.Metaclass_ArmPos_Request.__import_type_support__()
            if _arm_pos.Metaclass_ArmPos_Response._TYPE_SUPPORT is None:
                _arm_pos.Metaclass_ArmPos_Response.__import_type_support__()


class ArmPos(metaclass=Metaclass_ArmPos):
    from motor_interfaces.srv._arm_pos import ArmPos_Request as Request
    from motor_interfaces.srv._arm_pos import ArmPos_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
