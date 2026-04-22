// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_interfaces:srv/WheelVel.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_INTERFACES__SRV__DETAIL__WHEEL_VEL__BUILDER_HPP_
#define MOTOR_INTERFACES__SRV__DETAIL__WHEEL_VEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motor_interfaces/srv/detail/wheel_vel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motor_interfaces
{

namespace srv
{

namespace builder
{

class Init_WheelVel_Request_vel
{
public:
  Init_WheelVel_Request_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motor_interfaces::srv::WheelVel_Request vel(::motor_interfaces::srv::WheelVel_Request::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_interfaces::srv::WheelVel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_interfaces::srv::WheelVel_Request>()
{
  return motor_interfaces::srv::builder::Init_WheelVel_Request_vel();
}

}  // namespace motor_interfaces


namespace motor_interfaces
{

namespace srv
{

namespace builder
{

class Init_WheelVel_Response_complete
{
public:
  Init_WheelVel_Response_complete()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motor_interfaces::srv::WheelVel_Response complete(::motor_interfaces::srv::WheelVel_Response::_complete_type arg)
  {
    msg_.complete = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_interfaces::srv::WheelVel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_interfaces::srv::WheelVel_Response>()
{
  return motor_interfaces::srv::builder::Init_WheelVel_Response_complete();
}

}  // namespace motor_interfaces

#endif  // MOTOR_INTERFACES__SRV__DETAIL__WHEEL_VEL__BUILDER_HPP_
