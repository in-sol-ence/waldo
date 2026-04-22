// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_interfaces:srv/ArmPos.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_INTERFACES__SRV__DETAIL__ARM_POS__STRUCT_HPP_
#define MOTOR_INTERFACES__SRV__DETAIL__ARM_POS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__motor_interfaces__srv__ArmPos_Request __attribute__((deprecated))
#else
# define DEPRECATED__motor_interfaces__srv__ArmPos_Request __declspec(deprecated)
#endif

namespace motor_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmPos_Request_
{
  using Type = ArmPos_Request_<ContainerAllocator>;

  explicit ArmPos_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 6>::iterator, int16_t>(this->positions.begin(), this->positions.end(), 0);
    }
  }

  explicit ArmPos_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : positions(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 6>::iterator, int16_t>(this->positions.begin(), this->positions.end(), 0);
    }
  }

  // field types and members
  using _positions_type =
    std::array<int16_t, 6>;
  _positions_type positions;

  // setters for named parameter idiom
  Type & set__positions(
    const std::array<int16_t, 6> & _arg)
  {
    this->positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_interfaces::srv::ArmPos_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_interfaces::srv::ArmPos_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_interfaces::srv::ArmPos_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_interfaces::srv::ArmPos_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_interfaces::srv::ArmPos_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_interfaces::srv::ArmPos_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_interfaces::srv::ArmPos_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_interfaces::srv::ArmPos_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_interfaces::srv::ArmPos_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_interfaces::srv::ArmPos_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_interfaces__srv__ArmPos_Request
    std::shared_ptr<motor_interfaces::srv::ArmPos_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_interfaces__srv__ArmPos_Request
    std::shared_ptr<motor_interfaces::srv::ArmPos_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmPos_Request_ & other) const
  {
    if (this->positions != other.positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmPos_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmPos_Request_

// alias to use template instance with default allocator
using ArmPos_Request =
  motor_interfaces::srv::ArmPos_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motor_interfaces


#ifndef _WIN32
# define DEPRECATED__motor_interfaces__srv__ArmPos_Response __attribute__((deprecated))
#else
# define DEPRECATED__motor_interfaces__srv__ArmPos_Response __declspec(deprecated)
#endif

namespace motor_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmPos_Response_
{
  using Type = ArmPos_Response_<ContainerAllocator>;

  explicit ArmPos_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached = false;
    }
  }

  explicit ArmPos_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached = false;
    }
  }

  // field types and members
  using _reached_type =
    bool;
  _reached_type reached;

  // setters for named parameter idiom
  Type & set__reached(
    const bool & _arg)
  {
    this->reached = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_interfaces::srv::ArmPos_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_interfaces::srv::ArmPos_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_interfaces::srv::ArmPos_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_interfaces::srv::ArmPos_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_interfaces::srv::ArmPos_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_interfaces::srv::ArmPos_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_interfaces::srv::ArmPos_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_interfaces::srv::ArmPos_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_interfaces::srv::ArmPos_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_interfaces::srv::ArmPos_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_interfaces__srv__ArmPos_Response
    std::shared_ptr<motor_interfaces::srv::ArmPos_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_interfaces__srv__ArmPos_Response
    std::shared_ptr<motor_interfaces::srv::ArmPos_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmPos_Response_ & other) const
  {
    if (this->reached != other.reached) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmPos_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmPos_Response_

// alias to use template instance with default allocator
using ArmPos_Response =
  motor_interfaces::srv::ArmPos_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motor_interfaces

namespace motor_interfaces
{

namespace srv
{

struct ArmPos
{
  using Request = motor_interfaces::srv::ArmPos_Request;
  using Response = motor_interfaces::srv::ArmPos_Response;
};

}  // namespace srv

}  // namespace motor_interfaces

#endif  // MOTOR_INTERFACES__SRV__DETAIL__ARM_POS__STRUCT_HPP_
