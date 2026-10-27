// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mission_interfaces:msg/RedMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/red_map.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__RED_MAP__STRUCT_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__RED_MAP__STRUCT_HPP_

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
# define DEPRECATED__mission_interfaces__msg__RedMap __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__msg__RedMap __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RedMap_
{
  using Type = RedMap_<ContainerAllocator>;

  explicit RedMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->origin_north = 0.0;
      this->origin_east = 0.0;
      this->axis_heading = 0.0;
      this->cell = 0.0f;
      this->grid_x0 = 0.0f;
      this->grid_y0 = 0.0f;
      this->width = 0ul;
      this->height = 0ul;
      this->version = 0ul;
      this->margin = 0.0f;
    }
  }

  explicit RedMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->origin_north = 0.0;
      this->origin_east = 0.0;
      this->axis_heading = 0.0;
      this->cell = 0.0f;
      this->grid_x0 = 0.0f;
      this->grid_y0 = 0.0f;
      this->width = 0ul;
      this->height = 0ul;
      this->version = 0ul;
      this->margin = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _origin_north_type =
    double;
  _origin_north_type origin_north;
  using _origin_east_type =
    double;
  _origin_east_type origin_east;
  using _axis_heading_type =
    double;
  _axis_heading_type axis_heading;
  using _cell_type =
    float;
  _cell_type cell;
  using _grid_x0_type =
    float;
  _grid_x0_type grid_x0;
  using _grid_y0_type =
    float;
  _grid_y0_type grid_y0;
  using _width_type =
    uint32_t;
  _width_type width;
  using _height_type =
    uint32_t;
  _height_type height;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;
  using _version_type =
    uint32_t;
  _version_type version;
  using _margin_type =
    float;
  _margin_type margin;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__origin_north(
    const double & _arg)
  {
    this->origin_north = _arg;
    return *this;
  }
  Type & set__origin_east(
    const double & _arg)
  {
    this->origin_east = _arg;
    return *this;
  }
  Type & set__axis_heading(
    const double & _arg)
  {
    this->axis_heading = _arg;
    return *this;
  }
  Type & set__cell(
    const float & _arg)
  {
    this->cell = _arg;
    return *this;
  }
  Type & set__grid_x0(
    const float & _arg)
  {
    this->grid_x0 = _arg;
    return *this;
  }
  Type & set__grid_y0(
    const float & _arg)
  {
    this->grid_y0 = _arg;
    return *this;
  }
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__version(
    const uint32_t & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__margin(
    const float & _arg)
  {
    this->margin = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::msg::RedMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::msg::RedMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::msg::RedMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::msg::RedMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::RedMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::RedMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::RedMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::RedMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::msg::RedMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::msg::RedMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__msg__RedMap
    std::shared_ptr<mission_interfaces::msg::RedMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__msg__RedMap
    std::shared_ptr<mission_interfaces::msg::RedMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RedMap_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->origin_north != other.origin_north) {
      return false;
    }
    if (this->origin_east != other.origin_east) {
      return false;
    }
    if (this->axis_heading != other.axis_heading) {
      return false;
    }
    if (this->cell != other.cell) {
      return false;
    }
    if (this->grid_x0 != other.grid_x0) {
      return false;
    }
    if (this->grid_y0 != other.grid_y0) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->margin != other.margin) {
      return false;
    }
    return true;
  }
  bool operator!=(const RedMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RedMap_

// alias to use template instance with default allocator
using RedMap =
  mission_interfaces::msg::RedMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__RED_MAP__STRUCT_HPP_
