// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from motor_interfaces:srv/ArmPos.idl
// generated code does not contain a copyright notice
#include "motor_interfaces/srv/detail/arm_pos__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "motor_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "motor_interfaces/srv/detail/arm_pos__struct.h"
#include "motor_interfaces/srv/detail/arm_pos__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ArmPos_Request__ros_msg_type = motor_interfaces__srv__ArmPos_Request;

static bool _ArmPos_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmPos_Request__ros_msg_type * ros_message = static_cast<const _ArmPos_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: positions
  {
    size_t size = 6;
    auto array_ptr = ros_message->positions;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ArmPos_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmPos_Request__ros_msg_type * ros_message = static_cast<_ArmPos_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: positions
  {
    size_t size = 6;
    auto array_ptr = ros_message->positions;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motor_interfaces
size_t get_serialized_size_motor_interfaces__srv__ArmPos_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmPos_Request__ros_msg_type * ros_message = static_cast<const _ArmPos_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name positions
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->positions;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArmPos_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_motor_interfaces__srv__ArmPos_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motor_interfaces
size_t max_serialized_size_motor_interfaces__srv__ArmPos_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: positions
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ArmPos_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_motor_interfaces__srv__ArmPos_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArmPos_Request = {
  "motor_interfaces::srv",
  "ArmPos_Request",
  _ArmPos_Request__cdr_serialize,
  _ArmPos_Request__cdr_deserialize,
  _ArmPos_Request__get_serialized_size,
  _ArmPos_Request__max_serialized_size
};

static rosidl_message_type_support_t _ArmPos_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmPos_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_interfaces, srv, ArmPos_Request)() {
  return &_ArmPos_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "motor_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "motor_interfaces/srv/detail/arm_pos__struct.h"
// already included above
// #include "motor_interfaces/srv/detail/arm_pos__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ArmPos_Response__ros_msg_type = motor_interfaces__srv__ArmPos_Response;

static bool _ArmPos_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmPos_Response__ros_msg_type * ros_message = static_cast<const _ArmPos_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: reached
  {
    cdr << (ros_message->reached ? true : false);
  }

  return true;
}

static bool _ArmPos_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmPos_Response__ros_msg_type * ros_message = static_cast<_ArmPos_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: reached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reached = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motor_interfaces
size_t get_serialized_size_motor_interfaces__srv__ArmPos_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmPos_Response__ros_msg_type * ros_message = static_cast<const _ArmPos_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name reached
  {
    size_t item_size = sizeof(ros_message->reached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArmPos_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_motor_interfaces__srv__ArmPos_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motor_interfaces
size_t max_serialized_size_motor_interfaces__srv__ArmPos_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: reached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ArmPos_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_motor_interfaces__srv__ArmPos_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArmPos_Response = {
  "motor_interfaces::srv",
  "ArmPos_Response",
  _ArmPos_Response__cdr_serialize,
  _ArmPos_Response__cdr_deserialize,
  _ArmPos_Response__get_serialized_size,
  _ArmPos_Response__max_serialized_size
};

static rosidl_message_type_support_t _ArmPos_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmPos_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_interfaces, srv, ArmPos_Response)() {
  return &_ArmPos_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "motor_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "motor_interfaces/srv/arm_pos.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ArmPos__callbacks = {
  "motor_interfaces::srv",
  "ArmPos",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_interfaces, srv, ArmPos_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_interfaces, srv, ArmPos_Response)(),
};

static rosidl_service_type_support_t ArmPos__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ArmPos__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_interfaces, srv, ArmPos)() {
  return &ArmPos__handle;
}

#if defined(__cplusplus)
}
#endif
