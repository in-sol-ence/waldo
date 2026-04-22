// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motor_interfaces:srv/WheelVel.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_INTERFACES__SRV__DETAIL__WHEEL_VEL__TRAITS_HPP_
#define MOTOR_INTERFACES__SRV__DETAIL__WHEEL_VEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motor_interfaces/srv/detail/wheel_vel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace motor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const WheelVel_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: vel
  {
    if (msg.vel.size() == 0) {
      out << "vel: []";
    } else {
      out << "vel: [";
      size_t pending_items = msg.vel.size();
      for (auto item : msg.vel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelVel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel.size() == 0) {
      out << "vel: []\n";
    } else {
      out << "vel:\n";
      for (auto item : msg.vel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelVel_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace motor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use motor_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motor_interfaces::srv::WheelVel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const motor_interfaces::srv::WheelVel_Request & msg)
{
  return motor_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motor_interfaces::srv::WheelVel_Request>()
{
  return "motor_interfaces::srv::WheelVel_Request";
}

template<>
inline const char * name<motor_interfaces::srv::WheelVel_Request>()
{
  return "motor_interfaces/srv/WheelVel_Request";
}

template<>
struct has_fixed_size<motor_interfaces::srv::WheelVel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motor_interfaces::srv::WheelVel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motor_interfaces::srv::WheelVel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace motor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const WheelVel_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: complete
  {
    out << "complete: ";
    rosidl_generator_traits::value_to_yaml(msg.complete, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelVel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: complete
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "complete: ";
    rosidl_generator_traits::value_to_yaml(msg.complete, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelVel_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace motor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use motor_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motor_interfaces::srv::WheelVel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const motor_interfaces::srv::WheelVel_Response & msg)
{
  return motor_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motor_interfaces::srv::WheelVel_Response>()
{
  return "motor_interfaces::srv::WheelVel_Response";
}

template<>
inline const char * name<motor_interfaces::srv::WheelVel_Response>()
{
  return "motor_interfaces/srv/WheelVel_Response";
}

template<>
struct has_fixed_size<motor_interfaces::srv::WheelVel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motor_interfaces::srv::WheelVel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motor_interfaces::srv::WheelVel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<motor_interfaces::srv::WheelVel>()
{
  return "motor_interfaces::srv::WheelVel";
}

template<>
inline const char * name<motor_interfaces::srv::WheelVel>()
{
  return "motor_interfaces/srv/WheelVel";
}

template<>
struct has_fixed_size<motor_interfaces::srv::WheelVel>
  : std::integral_constant<
    bool,
    has_fixed_size<motor_interfaces::srv::WheelVel_Request>::value &&
    has_fixed_size<motor_interfaces::srv::WheelVel_Response>::value
  >
{
};

template<>
struct has_bounded_size<motor_interfaces::srv::WheelVel>
  : std::integral_constant<
    bool,
    has_bounded_size<motor_interfaces::srv::WheelVel_Request>::value &&
    has_bounded_size<motor_interfaces::srv::WheelVel_Response>::value
  >
{
};

template<>
struct is_service<motor_interfaces::srv::WheelVel>
  : std::true_type
{
};

template<>
struct is_service_request<motor_interfaces::srv::WheelVel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<motor_interfaces::srv::WheelVel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOTOR_INTERFACES__SRV__DETAIL__WHEEL_VEL__TRAITS_HPP_
