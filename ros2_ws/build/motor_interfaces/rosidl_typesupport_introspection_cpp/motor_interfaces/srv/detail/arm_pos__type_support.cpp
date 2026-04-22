// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from motor_interfaces:srv/ArmPos.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "motor_interfaces/srv/detail/arm_pos__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace motor_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ArmPos_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) motor_interfaces::srv::ArmPos_Request(_init);
}

void ArmPos_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<motor_interfaces::srv::ArmPos_Request *>(message_memory);
  typed_message->~ArmPos_Request();
}

size_t size_function__ArmPos_Request__positions(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ArmPos_Request__positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmPos_Request__positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmPos_Request__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__ArmPos_Request__positions(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__ArmPos_Request__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__ArmPos_Request__positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArmPos_Request_message_member_array[1] = {
  {
    "positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(motor_interfaces::srv::ArmPos_Request, positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmPos_Request__positions,  // size() function pointer
    get_const_function__ArmPos_Request__positions,  // get_const(index) function pointer
    get_function__ArmPos_Request__positions,  // get(index) function pointer
    fetch_function__ArmPos_Request__positions,  // fetch(index, &value) function pointer
    assign_function__ArmPos_Request__positions,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArmPos_Request_message_members = {
  "motor_interfaces::srv",  // message namespace
  "ArmPos_Request",  // message name
  1,  // number of fields
  sizeof(motor_interfaces::srv::ArmPos_Request),
  ArmPos_Request_message_member_array,  // message members
  ArmPos_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ArmPos_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArmPos_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmPos_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace motor_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_interfaces::srv::ArmPos_Request>()
{
  return &::motor_interfaces::srv::rosidl_typesupport_introspection_cpp::ArmPos_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_interfaces, srv, ArmPos_Request)() {
  return &::motor_interfaces::srv::rosidl_typesupport_introspection_cpp::ArmPos_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "motor_interfaces/srv/detail/arm_pos__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace motor_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ArmPos_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) motor_interfaces::srv::ArmPos_Response(_init);
}

void ArmPos_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<motor_interfaces::srv::ArmPos_Response *>(message_memory);
  typed_message->~ArmPos_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArmPos_Response_message_member_array[1] = {
  {
    "reached",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_interfaces::srv::ArmPos_Response, reached),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArmPos_Response_message_members = {
  "motor_interfaces::srv",  // message namespace
  "ArmPos_Response",  // message name
  1,  // number of fields
  sizeof(motor_interfaces::srv::ArmPos_Response),
  ArmPos_Response_message_member_array,  // message members
  ArmPos_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ArmPos_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArmPos_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmPos_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace motor_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_interfaces::srv::ArmPos_Response>()
{
  return &::motor_interfaces::srv::rosidl_typesupport_introspection_cpp::ArmPos_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_interfaces, srv, ArmPos_Response)() {
  return &::motor_interfaces::srv::rosidl_typesupport_introspection_cpp::ArmPos_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "motor_interfaces/srv/detail/arm_pos__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace motor_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ArmPos_service_members = {
  "motor_interfaces::srv",  // service namespace
  "ArmPos",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<motor_interfaces::srv::ArmPos>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ArmPos_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmPos_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace motor_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<motor_interfaces::srv::ArmPos>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::motor_interfaces::srv::rosidl_typesupport_introspection_cpp::ArmPos_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::motor_interfaces::srv::ArmPos_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::motor_interfaces::srv::ArmPos_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_interfaces, srv, ArmPos)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<motor_interfaces::srv::ArmPos>();
}

#ifdef __cplusplus
}
#endif
