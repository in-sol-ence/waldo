// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from motor_interfaces:srv/WheelVel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "motor_interfaces/srv/detail/wheel_vel__rosidl_typesupport_introspection_c.h"
#include "motor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "motor_interfaces/srv/detail/wheel_vel__functions.h"
#include "motor_interfaces/srv/detail/wheel_vel__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__WheelVel_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motor_interfaces__srv__WheelVel_Request__init(message_memory);
}

void motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__WheelVel_Request_fini_function(void * message_memory)
{
  motor_interfaces__srv__WheelVel_Request__fini(message_memory);
}

size_t motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__size_function__WheelVel_Request__vel(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__get_const_function__WheelVel_Request__vel(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__get_function__WheelVel_Request__vel(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__fetch_function__WheelVel_Request__vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__get_const_function__WheelVel_Request__vel(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__assign_function__WheelVel_Request__vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__get_function__WheelVel_Request__vel(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__WheelVel_Request_message_member_array[1] = {
  {
    "vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(motor_interfaces__srv__WheelVel_Request, vel),  // bytes offset in struct
    NULL,  // default value
    motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__size_function__WheelVel_Request__vel,  // size() function pointer
    motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__get_const_function__WheelVel_Request__vel,  // get_const(index) function pointer
    motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__get_function__WheelVel_Request__vel,  // get(index) function pointer
    motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__fetch_function__WheelVel_Request__vel,  // fetch(index, &value) function pointer
    motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__assign_function__WheelVel_Request__vel,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__WheelVel_Request_message_members = {
  "motor_interfaces__srv",  // message namespace
  "WheelVel_Request",  // message name
  1,  // number of fields
  sizeof(motor_interfaces__srv__WheelVel_Request),
  motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__WheelVel_Request_message_member_array,  // message members
  motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__WheelVel_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__WheelVel_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__WheelVel_Request_message_type_support_handle = {
  0,
  &motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__WheelVel_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_interfaces, srv, WheelVel_Request)() {
  if (!motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__WheelVel_Request_message_type_support_handle.typesupport_identifier) {
    motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__WheelVel_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &motor_interfaces__srv__WheelVel_Request__rosidl_typesupport_introspection_c__WheelVel_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "motor_interfaces/srv/detail/wheel_vel__rosidl_typesupport_introspection_c.h"
// already included above
// #include "motor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "motor_interfaces/srv/detail/wheel_vel__functions.h"
// already included above
// #include "motor_interfaces/srv/detail/wheel_vel__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void motor_interfaces__srv__WheelVel_Response__rosidl_typesupport_introspection_c__WheelVel_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motor_interfaces__srv__WheelVel_Response__init(message_memory);
}

void motor_interfaces__srv__WheelVel_Response__rosidl_typesupport_introspection_c__WheelVel_Response_fini_function(void * message_memory)
{
  motor_interfaces__srv__WheelVel_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember motor_interfaces__srv__WheelVel_Response__rosidl_typesupport_introspection_c__WheelVel_Response_message_member_array[1] = {
  {
    "complete",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_interfaces__srv__WheelVel_Response, complete),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers motor_interfaces__srv__WheelVel_Response__rosidl_typesupport_introspection_c__WheelVel_Response_message_members = {
  "motor_interfaces__srv",  // message namespace
  "WheelVel_Response",  // message name
  1,  // number of fields
  sizeof(motor_interfaces__srv__WheelVel_Response),
  motor_interfaces__srv__WheelVel_Response__rosidl_typesupport_introspection_c__WheelVel_Response_message_member_array,  // message members
  motor_interfaces__srv__WheelVel_Response__rosidl_typesupport_introspection_c__WheelVel_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  motor_interfaces__srv__WheelVel_Response__rosidl_typesupport_introspection_c__WheelVel_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t motor_interfaces__srv__WheelVel_Response__rosidl_typesupport_introspection_c__WheelVel_Response_message_type_support_handle = {
  0,
  &motor_interfaces__srv__WheelVel_Response__rosidl_typesupport_introspection_c__WheelVel_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_interfaces, srv, WheelVel_Response)() {
  if (!motor_interfaces__srv__WheelVel_Response__rosidl_typesupport_introspection_c__WheelVel_Response_message_type_support_handle.typesupport_identifier) {
    motor_interfaces__srv__WheelVel_Response__rosidl_typesupport_introspection_c__WheelVel_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &motor_interfaces__srv__WheelVel_Response__rosidl_typesupport_introspection_c__WheelVel_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "motor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "motor_interfaces/srv/detail/wheel_vel__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers motor_interfaces__srv__detail__wheel_vel__rosidl_typesupport_introspection_c__WheelVel_service_members = {
  "motor_interfaces__srv",  // service namespace
  "WheelVel",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // motor_interfaces__srv__detail__wheel_vel__rosidl_typesupport_introspection_c__WheelVel_Request_message_type_support_handle,
  NULL  // response message
  // motor_interfaces__srv__detail__wheel_vel__rosidl_typesupport_introspection_c__WheelVel_Response_message_type_support_handle
};

static rosidl_service_type_support_t motor_interfaces__srv__detail__wheel_vel__rosidl_typesupport_introspection_c__WheelVel_service_type_support_handle = {
  0,
  &motor_interfaces__srv__detail__wheel_vel__rosidl_typesupport_introspection_c__WheelVel_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_interfaces, srv, WheelVel_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_interfaces, srv, WheelVel_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motor_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_interfaces, srv, WheelVel)() {
  if (!motor_interfaces__srv__detail__wheel_vel__rosidl_typesupport_introspection_c__WheelVel_service_type_support_handle.typesupport_identifier) {
    motor_interfaces__srv__detail__wheel_vel__rosidl_typesupport_introspection_c__WheelVel_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)motor_interfaces__srv__detail__wheel_vel__rosidl_typesupport_introspection_c__WheelVel_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_interfaces, srv, WheelVel_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_interfaces, srv, WheelVel_Response)()->data;
  }

  return &motor_interfaces__srv__detail__wheel_vel__rosidl_typesupport_introspection_c__WheelVel_service_type_support_handle;
}
