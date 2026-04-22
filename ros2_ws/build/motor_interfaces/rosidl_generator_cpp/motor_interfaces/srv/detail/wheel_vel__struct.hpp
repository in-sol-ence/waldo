// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_interfaces:srv/WheelVel.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_INTERFACES__SRV__DETAIL__WHEEL_VEL__STRUCT_HPP_
#define MOTOR_INTERFACES__SRV__DETAIL__WHEEL_VEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__motor_interfaces__srv__WheelVel_Request __attribute__((deprecated))
#else
# define DEPRECATED__motor_interfaces__srv__WheelVel_Request __declspec(deprecated)
#endif

namespace motor_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WheelVel_Request_
{
  using Type = WheelVel_Request_<ContainerAllocator>;

  explicit WheelVel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 3>::iterator, int16_t>(this->vel.begin(), this->vel.end(), 0);
    }
  }

  explicit WheelVel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vel(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 3>::iterator, int16_t>(this->vel.begin(), this->vel.end(), 0);
    }
  }

  // field types and members
  using _vel_type =
    std::array<int16_t, 3>;
  _vel_type vel;

  // setters for named parameter idiom
  Type & set__vel(
    const std::array<int16_t, 3> & _arg)
  {
    this->vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_interfaces::srv::WheelVel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_interfaces::srv::WheelVel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_interfaces::srv::WheelVel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_interfaces::srv::WheelVel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_interfaces::srv::WheelVel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_interfaces::srv::WheelVel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_interfaces::srv::WheelVel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_interfaces::srv::WheelVel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_interfaces::srv::WheelVel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_interfaces::srv::WheelVel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_interfaces__srv__WheelVel_Request
    std::shared_ptr<motor_interfaces::srv::WheelVel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_interfaces__srv__WheelVel_Request
    std::shared_ptr<motor_interfaces::srv::WheelVel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelVel_Request_ & other) const
  {
    if (this->vel != other.vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelVel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelVel_Request_

// alias to use template instance with default allocator
using WheelVel_Request =
  motor_interfaces::srv::WheelVel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motor_interfaces


#ifndef _WIN32
# define DEPRECATED__motor_interfaces__srv__WheelVel_Response __attribute__((deprecated))
#else
# define DEPRECATED__motor_interfaces__srv__WheelVel_Response __declspec(deprecated)
#endif

namespace motor_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WheelVel_Response_
{
  using Type = WheelVel_Response_<ContainerAllocator>;

  explicit WheelVel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->complete = false;
    }
  }

  explicit WheelVel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->complete = false;
    }
  }

  // field types and members
  using _complete_type =
    bool;
  _complete_type complete;

  // setters for named parameter idiom
  Type & set__complete(
    const bool & _arg)
  {
    this->complete = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_interfaces::srv::WheelVel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_interfaces::srv::WheelVel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_interfaces::srv::WheelVel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_interfaces::srv::WheelVel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_interfaces::srv::WheelVel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_interfaces::srv::WheelVel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_interfaces::srv::WheelVel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_interfaces::srv::WheelVel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_interfaces::srv::WheelVel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_interfaces::srv::WheelVel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_interfaces__srv__WheelVel_Response
    std::shared_ptr<motor_interfaces::srv::WheelVel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_interfaces__srv__WheelVel_Response
    std::shared_ptr<motor_interfaces::srv::WheelVel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelVel_Response_ & other) const
  {
    if (this->complete != other.complete) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelVel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelVel_Response_

// alias to use template instance with default allocator
using WheelVel_Response =
  motor_interfaces::srv::WheelVel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motor_interfaces

namespace motor_interfaces
{

namespace srv
{

struct WheelVel
{
  using Request = motor_interfaces::srv::WheelVel_Request;
  using Response = motor_interfaces::srv::WheelVel_Response;
};

}  // namespace srv

}  // namespace motor_interfaces

#endif  // MOTOR_INTERFACES__SRV__DETAIL__WHEEL_VEL__STRUCT_HPP_
