// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mission_interfaces:msg/RedPatch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/red_patch.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__RED_PATCH__STRUCT_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__RED_PATCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'contour'
#include "geometry_msgs/msg/detail/point32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__msg__RedPatch __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__msg__RedPatch __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RedPatch_
{
  using Type = RedPatch_<ContainerAllocator>;

  explicit RedPatch_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->centroid_x = 0.0f;
      this->centroid_y = 0.0f;
      this->offset_x = 0.0f;
      this->offset_y = 0.0f;
      this->area_px = 0.0f;
      this->area_fraction = 0.0f;
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->bbox_xywh.begin(), this->bbox_xywh.end(), 0l);
    }
  }

  explicit RedPatch_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bbox_xywh(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->centroid_x = 0.0f;
      this->centroid_y = 0.0f;
      this->offset_x = 0.0f;
      this->offset_y = 0.0f;
      this->area_px = 0.0f;
      this->area_fraction = 0.0f;
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->bbox_xywh.begin(), this->bbox_xywh.end(), 0l);
    }
  }

  // field types and members
  using _centroid_x_type =
    float;
  _centroid_x_type centroid_x;
  using _centroid_y_type =
    float;
  _centroid_y_type centroid_y;
  using _offset_x_type =
    float;
  _offset_x_type offset_x;
  using _offset_y_type =
    float;
  _offset_y_type offset_y;
  using _area_px_type =
    float;
  _area_px_type area_px;
  using _area_fraction_type =
    float;
  _area_fraction_type area_fraction;
  using _bbox_xywh_type =
    std::array<int32_t, 4>;
  _bbox_xywh_type bbox_xywh;
  using _contour_type =
    std::vector<geometry_msgs::msg::Point32_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point32_<ContainerAllocator>>>;
  _contour_type contour;

  // setters for named parameter idiom
  Type & set__centroid_x(
    const float & _arg)
  {
    this->centroid_x = _arg;
    return *this;
  }
  Type & set__centroid_y(
    const float & _arg)
  {
    this->centroid_y = _arg;
    return *this;
  }
  Type & set__offset_x(
    const float & _arg)
  {
    this->offset_x = _arg;
    return *this;
  }
  Type & set__offset_y(
    const float & _arg)
  {
    this->offset_y = _arg;
    return *this;
  }
  Type & set__area_px(
    const float & _arg)
  {
    this->area_px = _arg;
    return *this;
  }
  Type & set__area_fraction(
    const float & _arg)
  {
    this->area_fraction = _arg;
    return *this;
  }
  Type & set__bbox_xywh(
    const std::array<int32_t, 4> & _arg)
  {
    this->bbox_xywh = _arg;
    return *this;
  }
  Type & set__contour(
    const std::vector<geometry_msgs::msg::Point32_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point32_<ContainerAllocator>>> & _arg)
  {
    this->contour = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::msg::RedPatch_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::msg::RedPatch_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::msg::RedPatch_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::msg::RedPatch_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::RedPatch_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::RedPatch_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::RedPatch_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::RedPatch_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::msg::RedPatch_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::msg::RedPatch_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__msg__RedPatch
    std::shared_ptr<mission_interfaces::msg::RedPatch_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__msg__RedPatch
    std::shared_ptr<mission_interfaces::msg::RedPatch_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RedPatch_ & other) const
  {
    if (this->centroid_x != other.centroid_x) {
      return false;
    }
    if (this->centroid_y != other.centroid_y) {
      return false;
    }
    if (this->offset_x != other.offset_x) {
      return false;
    }
    if (this->offset_y != other.offset_y) {
      return false;
    }
    if (this->area_px != other.area_px) {
      return false;
    }
    if (this->area_fraction != other.area_fraction) {
      return false;
    }
    if (this->bbox_xywh != other.bbox_xywh) {
      return false;
    }
    if (this->contour != other.contour) {
      return false;
    }
    return true;
  }
  bool operator!=(const RedPatch_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RedPatch_

// alias to use template instance with default allocator
using RedPatch =
  mission_interfaces::msg::RedPatch_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__RED_PATCH__STRUCT_HPP_
