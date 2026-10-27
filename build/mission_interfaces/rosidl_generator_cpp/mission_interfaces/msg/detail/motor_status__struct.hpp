// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mission_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/motor_status.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_

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
# define DEPRECATED__mission_interfaces__msg__MotorStatus __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__msg__MotorStatus __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStatus_
{
  using Type = MotorStatus_<ContainerAllocator>;

  explicit MotorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint16_t, 4>::iterator, uint16_t>(this->servo_pwm.begin(), this->servo_pwm.end(), 0);
      this->thrust = 0.0f;
      this->cmd_roll_deg = 0.0f;
      this->cmd_pitch_deg = 0.0f;
    }
  }

  explicit MotorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    servo_pwm(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint16_t, 4>::iterator, uint16_t>(this->servo_pwm.begin(), this->servo_pwm.end(), 0);
      this->thrust = 0.0f;
      this->cmd_roll_deg = 0.0f;
      this->cmd_pitch_deg = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _servo_pwm_type =
    std::array<uint16_t, 4>;
  _servo_pwm_type servo_pwm;
  using _thrust_type =
    float;
  _thrust_type thrust;
  using _cmd_roll_deg_type =
    float;
  _cmd_roll_deg_type cmd_roll_deg;
  using _cmd_pitch_deg_type =
    float;
  _cmd_pitch_deg_type cmd_pitch_deg;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__servo_pwm(
    const std::array<uint16_t, 4> & _arg)
  {
    this->servo_pwm = _arg;
    return *this;
  }
  Type & set__thrust(
    const float & _arg)
  {
    this->thrust = _arg;
    return *this;
  }
  Type & set__cmd_roll_deg(
    const float & _arg)
  {
    this->cmd_roll_deg = _arg;
    return *this;
  }
  Type & set__cmd_pitch_deg(
    const float & _arg)
  {
    this->cmd_pitch_deg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::msg::MotorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::msg::MotorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::msg::MotorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::msg::MotorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::MotorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::MotorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::MotorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::MotorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::msg::MotorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::msg::MotorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__msg__MotorStatus
    std::shared_ptr<mission_interfaces::msg::MotorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__msg__MotorStatus
    std::shared_ptr<mission_interfaces::msg::MotorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->servo_pwm != other.servo_pwm) {
      return false;
    }
    if (this->thrust != other.thrust) {
      return false;
    }
    if (this->cmd_roll_deg != other.cmd_roll_deg) {
      return false;
    }
    if (this->cmd_pitch_deg != other.cmd_pitch_deg) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStatus_

// alias to use template instance with default allocator
using MotorStatus =
  mission_interfaces::msg::MotorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
