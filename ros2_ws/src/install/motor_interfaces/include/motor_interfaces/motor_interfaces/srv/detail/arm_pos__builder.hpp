// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_interfaces:srv/ArmPos.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_INTERFACES__SRV__DETAIL__ARM_POS__BUILDER_HPP_
#define MOTOR_INTERFACES__SRV__DETAIL__ARM_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motor_interfaces/srv/detail/arm_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motor_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArmPos_Request_positions
{
public:
  Init_ArmPos_Request_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motor_interfaces::srv::ArmPos_Request positions(::motor_interfaces::srv::ArmPos_Request::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_interfaces::srv::ArmPos_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_interfaces::srv::ArmPos_Request>()
{
  return motor_interfaces::srv::builder::Init_ArmPos_Request_positions();
}

}  // namespace motor_interfaces


namespace motor_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArmPos_Response_reached
{
public:
  Init_ArmPos_Response_reached()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motor_interfaces::srv::ArmPos_Response reached(::motor_interfaces::srv::ArmPos_Response::_reached_type arg)
  {
    msg_.reached = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_interfaces::srv::ArmPos_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_interfaces::srv::ArmPos_Response>()
{
  return motor_interfaces::srv::builder::Init_ArmPos_Response_reached();
}

}  // namespace motor_interfaces

#endif  // MOTOR_INTERFACES__SRV__DETAIL__ARM_POS__BUILDER_HPP_
