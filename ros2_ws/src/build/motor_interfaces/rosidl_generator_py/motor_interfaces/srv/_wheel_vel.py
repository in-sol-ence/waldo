# generated from rosidl_generator_py/resource/_idl.py.em
# with input from motor_interfaces:srv/WheelVel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'vel'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WheelVel_Request(type):
    """Metaclass of message 'WheelVel_Request'."""

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
                'motor_interfaces.srv.WheelVel_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__wheel_vel__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__wheel_vel__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__wheel_vel__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__wheel_vel__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__wheel_vel__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WheelVel_Request(metaclass=Metaclass_WheelVel_Request):
    """Message class 'WheelVel_Request'."""

    __slots__ = [
        '_vel',
    ]

    _fields_and_field_types = {
        'vel': 'int8[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int8'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'vel' not in kwargs:
            self.vel = numpy.zeros(3, dtype=numpy.int8)
        else:
            self.vel = numpy.array(kwargs.get('vel'), dtype=numpy.int8)
            assert self.vel.shape == (3, )

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
        if all(self.vel != other.vel):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vel(self):
        """Message field 'vel'."""
        return self._vel

    @vel.setter
    def vel(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int8, \
                "The 'vel' numpy.ndarray() must have the dtype of 'numpy.int8'"
            assert value.size == 3, \
                "The 'vel' numpy.ndarray() must have a size of 3"
            self._vel = value
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
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'vel' field must be a set or sequence with length 3 and each value of type 'int' and each integer in [-128, 127]"
        self._vel = numpy.array(value, dtype=numpy.int8)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_WheelVel_Response(type):
    """Metaclass of message 'WheelVel_Response'."""

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
                'motor_interfaces.srv.WheelVel_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__wheel_vel__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__wheel_vel__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__wheel_vel__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__wheel_vel__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__wheel_vel__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WheelVel_Response(metaclass=Metaclass_WheelVel_Response):
    """Message class 'WheelVel_Response'."""

    __slots__ = [
        '_complete',
    ]

    _fields_and_field_types = {
        'complete': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.complete = kwargs.get('complete', bool())

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
        if self.complete != other.complete:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def complete(self):
        """Message field 'complete'."""
        return self._complete

    @complete.setter
    def complete(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'complete' field must be of type 'bool'"
        self._complete = value


class Metaclass_WheelVel(type):
    """Metaclass of service 'WheelVel'."""

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
                'motor_interfaces.srv.WheelVel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__wheel_vel

            from motor_interfaces.srv import _wheel_vel
            if _wheel_vel.Metaclass_WheelVel_Request._TYPE_SUPPORT is None:
                _wheel_vel.Metaclass_WheelVel_Request.__import_type_support__()
            if _wheel_vel.Metaclass_WheelVel_Response._TYPE_SUPPORT is None:
                _wheel_vel.Metaclass_WheelVel_Response.__import_type_support__()


class WheelVel(metaclass=Metaclass_WheelVel):
    from motor_interfaces.srv._wheel_vel import WheelVel_Request as Request
    from motor_interfaces.srv._wheel_vel import WheelVel_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
