// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mission_interfaces:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/position_setpoint.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__POSITION_SETPOINT__STRUCT_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__POSITION_SETPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__msg__PositionSetpoint __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__msg__PositionSetpoint __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionSetpoint_
{
  using Type = PositionSetpoint_<ContainerAllocator>;

  explicit PositionSetpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->yaw = 0.0f;
    }
  }

  explicit PositionSetpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->yaw = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _yaw_type =
    float;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::msg::PositionSetpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::msg::PositionSetpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::msg::PositionSetpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::msg::PositionSetpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::PositionSetpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::PositionSetpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::PositionSetpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::PositionSetpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::msg::PositionSetpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::msg::PositionSetpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__msg__PositionSetpoint
    std::shared_ptr<mission_interfaces::msg::PositionSetpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__msg__PositionSetpoint
    std::shared_ptr<mission_interfaces::msg::PositionSetpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionSetpoint_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionSetpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionSetpoint_

// alias to use template instance with default allocator
using PositionSetpoint =
  mission_interfaces::msg::PositionSetpoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__POSITION_SETPOINT__STRUCT_HPP_
