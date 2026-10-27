// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mission_interfaces:msg/RedZoneResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/red_zone_result.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__RED_ZONE_RESULT__STRUCT_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__RED_ZONE_RESULT__STRUCT_HPP_

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
// Member 'patches'
#include "mission_interfaces/msg/detail/red_patch__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__msg__RedZoneResult __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__msg__RedZoneResult __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RedZoneResult_
{
  using Type = RedZoneResult_<ContainerAllocator>;

  explicit RedZoneResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_width = 0ul;
      this->image_height = 0ul;
      this->detected = false;
      this->num_patches = 0;
      this->total_area_fraction = 0.0f;
      this->processing_time_ms = 0.0f;
    }
  }

  explicit RedZoneResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_width = 0ul;
      this->image_height = 0ul;
      this->detected = false;
      this->num_patches = 0;
      this->total_area_fraction = 0.0f;
      this->processing_time_ms = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _image_width_type =
    uint32_t;
  _image_width_type image_width;
  using _image_height_type =
    uint32_t;
  _image_height_type image_height;
  using _detected_type =
    bool;
  _detected_type detected;
  using _num_patches_type =
    uint16_t;
  _num_patches_type num_patches;
  using _total_area_fraction_type =
    float;
  _total_area_fraction_type total_area_fraction;
  using _patches_type =
    std::vector<mission_interfaces::msg::RedPatch_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::msg::RedPatch_<ContainerAllocator>>>;
  _patches_type patches;
  using _processing_time_ms_type =
    float;
  _processing_time_ms_type processing_time_ms;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__image_width(
    const uint32_t & _arg)
  {
    this->image_width = _arg;
    return *this;
  }
  Type & set__image_height(
    const uint32_t & _arg)
  {
    this->image_height = _arg;
    return *this;
  }
  Type & set__detected(
    const bool & _arg)
  {
    this->detected = _arg;
    return *this;
  }
  Type & set__num_patches(
    const uint16_t & _arg)
  {
    this->num_patches = _arg;
    return *this;
  }
  Type & set__total_area_fraction(
    const float & _arg)
  {
    this->total_area_fraction = _arg;
    return *this;
  }
  Type & set__patches(
    const std::vector<mission_interfaces::msg::RedPatch_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::msg::RedPatch_<ContainerAllocator>>> & _arg)
  {
    this->patches = _arg;
    return *this;
  }
  Type & set__processing_time_ms(
    const float & _arg)
  {
    this->processing_time_ms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::msg::RedZoneResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::msg::RedZoneResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::msg::RedZoneResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::msg::RedZoneResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::RedZoneResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::RedZoneResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::RedZoneResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::RedZoneResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::msg::RedZoneResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::msg::RedZoneResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__msg__RedZoneResult
    std::shared_ptr<mission_interfaces::msg::RedZoneResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__msg__RedZoneResult
    std::shared_ptr<mission_interfaces::msg::RedZoneResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RedZoneResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->image_width != other.image_width) {
      return false;
    }
    if (this->image_height != other.image_height) {
      return false;
    }
    if (this->detected != other.detected) {
      return false;
    }
    if (this->num_patches != other.num_patches) {
      return false;
    }
    if (this->total_area_fraction != other.total_area_fraction) {
      return false;
    }
    if (this->patches != other.patches) {
      return false;
    }
    if (this->processing_time_ms != other.processing_time_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const RedZoneResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RedZoneResult_

// alias to use template instance with default allocator
using RedZoneResult =
  mission_interfaces::msg::RedZoneResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__RED_ZONE_RESULT__STRUCT_HPP_
