// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motor_interfaces:srv/ArmPos.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_INTERFACES__SRV__DETAIL__ARM_POS__TRAITS_HPP_
#define MOTOR_INTERFACES__SRV__DETAIL__ARM_POS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motor_interfaces/srv/detail/arm_pos__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace motor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArmPos_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: positions
  {
    if (msg.positions.size() == 0) {
      out << "positions: []";
    } else {
      out << "positions: [";
      size_t pending_items = msg.positions.size();
      for (auto item : msg.positions) {
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
  const ArmPos_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positions.size() == 0) {
      out << "positions: []\n";
    } else {
      out << "positions:\n";
      for (auto item : msg.positions) {
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

inline std::string to_yaml(const ArmPos_Request & msg, bool use_flow_style = false)
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
  const motor_interfaces::srv::ArmPos_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const motor_interfaces::srv::ArmPos_Request & msg)
{
  return motor_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motor_interfaces::srv::ArmPos_Request>()
{
  return "motor_interfaces::srv::ArmPos_Request";
}

template<>
inline const char * name<motor_interfaces::srv::ArmPos_Request>()
{
  return "motor_interfaces/srv/ArmPos_Request";
}

template<>
struct has_fixed_size<motor_interfaces::srv::ArmPos_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motor_interfaces::srv::ArmPos_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motor_interfaces::srv::ArmPos_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace motor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArmPos_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: reached
  {
    out << "reached: ";
    rosidl_generator_traits::value_to_yaml(msg.reached, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmPos_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reached: ";
    rosidl_generator_traits::value_to_yaml(msg.reached, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmPos_Response & msg, bool use_flow_style = false)
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
  const motor_interfaces::srv::ArmPos_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const motor_interfaces::srv::ArmPos_Response & msg)
{
  return motor_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motor_interfaces::srv::ArmPos_Response>()
{
  return "motor_interfaces::srv::ArmPos_Response";
}

template<>
inline const char * name<motor_interfaces::srv::ArmPos_Response>()
{
  return "motor_interfaces/srv/ArmPos_Response";
}

template<>
struct has_fixed_size<motor_interfaces::srv::ArmPos_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motor_interfaces::srv::ArmPos_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motor_interfaces::srv::ArmPos_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<motor_interfaces::srv::ArmPos>()
{
  return "motor_interfaces::srv::ArmPos";
}

template<>
inline const char * name<motor_interfaces::srv::ArmPos>()
{
  return "motor_interfaces/srv/ArmPos";
}

template<>
struct has_fixed_size<motor_interfaces::srv::ArmPos>
  : std::integral_constant<
    bool,
    has_fixed_size<motor_interfaces::srv::ArmPos_Request>::value &&
    has_fixed_size<motor_interfaces::srv::ArmPos_Response>::value
  >
{
};

template<>
struct has_bounded_size<motor_interfaces::srv::ArmPos>
  : std::integral_constant<
    bool,
    has_bounded_size<motor_interfaces::srv::ArmPos_Request>::value &&
    has_bounded_size<motor_interfaces::srv::ArmPos_Response>::value
  >
{
};

template<>
struct is_service<motor_interfaces::srv::ArmPos>
  : std::true_type
{
};

template<>
struct is_service_request<motor_interfaces::srv::ArmPos_Request>
  : std::true_type
{
};

template<>
struct is_service_response<motor_interfaces::srv::ArmPos_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOTOR_INTERFACES__SRV__DETAIL__ARM_POS__TRAITS_HPP_
