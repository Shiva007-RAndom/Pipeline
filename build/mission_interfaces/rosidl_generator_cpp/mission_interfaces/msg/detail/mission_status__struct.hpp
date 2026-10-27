// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mission_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/mission_status.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_

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
# define DEPRECATED__mission_interfaces__msg__MissionStatus __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__msg__MissionStatus __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionStatus_
{
  using Type = MissionStatus_<ContainerAllocator>;

  explicit MissionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stage = "";
      this->state_text = "";
      this->countdown = 0.0f;
      this->reference_ready = false;
    }
  }

  explicit MissionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    stage(_alloc),
    state_text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stage = "";
      this->state_text = "";
      this->countdown = 0.0f;
      this->reference_ready = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _stage_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _stage_type stage;
  using _state_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_text_type state_text;
  using _countdown_type =
    float;
  _countdown_type countdown;
  using _reference_ready_type =
    bool;
  _reference_ready_type reference_ready;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__stage(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->stage = _arg;
    return *this;
  }
  Type & set__state_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state_text = _arg;
    return *this;
  }
  Type & set__countdown(
    const float & _arg)
  {
    this->countdown = _arg;
    return *this;
  }
  Type & set__reference_ready(
    const bool & _arg)
  {
    this->reference_ready = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::msg::MissionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::msg::MissionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::msg::MissionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::msg::MissionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::MissionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::MissionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::MissionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::MissionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::msg::MissionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::msg::MissionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__msg__MissionStatus
    std::shared_ptr<mission_interfaces::msg::MissionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__msg__MissionStatus
    std::shared_ptr<mission_interfaces::msg::MissionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->stage != other.stage) {
      return false;
    }
    if (this->state_text != other.state_text) {
      return false;
    }
    if (this->countdown != other.countdown) {
      return false;
    }
    if (this->reference_ready != other.reference_ready) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionStatus_

// alias to use template instance with default allocator
using MissionStatus =
  mission_interfaces::msg::MissionStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_
