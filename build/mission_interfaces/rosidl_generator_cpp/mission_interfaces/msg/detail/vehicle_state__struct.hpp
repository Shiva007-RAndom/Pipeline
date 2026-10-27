// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mission_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/vehicle_state.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_

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
# define DEPRECATED__mission_interfaces__msg__VehicleState __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__msg__VehicleState __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleState_
{
  using Type = VehicleState_<ContainerAllocator>;

  explicit VehicleState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
      this->ready = false;
      this->armed = false;
      this->airborne = false;
      this->mode = "";
      this->controller = "";
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->heading = 0.0f;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->alt_rel = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->xy_global = false;
      this->ref_lat = 0.0;
      this->ref_lon = 0.0;
    }
  }

  explicit VehicleState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    mode(_alloc),
    controller(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
      this->ready = false;
      this->armed = false;
      this->airborne = false;
      this->mode = "";
      this->controller = "";
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->heading = 0.0f;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->alt_rel = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->xy_global = false;
      this->ref_lat = 0.0;
      this->ref_lon = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _valid_type =
    bool;
  _valid_type valid;
  using _ready_type =
    bool;
  _ready_type ready;
  using _armed_type =
    bool;
  _armed_type armed;
  using _airborne_type =
    bool;
  _airborne_type airborne;
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;
  using _controller_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _controller_type controller;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _heading_type =
    float;
  _heading_type heading;
  using _vx_type =
    float;
  _vx_type vx;
  using _vy_type =
    float;
  _vy_type vy;
  using _vz_type =
    float;
  _vz_type vz;
  using _alt_rel_type =
    float;
  _alt_rel_type alt_rel;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _xy_global_type =
    bool;
  _xy_global_type xy_global;
  using _ref_lat_type =
    double;
  _ref_lat_type ref_lat;
  using _ref_lon_type =
    double;
  _ref_lon_type ref_lon;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__ready(
    const bool & _arg)
  {
    this->ready = _arg;
    return *this;
  }
  Type & set__armed(
    const bool & _arg)
  {
    this->armed = _arg;
    return *this;
  }
  Type & set__airborne(
    const bool & _arg)
  {
    this->airborne = _arg;
    return *this;
  }
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__controller(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->controller = _arg;
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
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const float & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vz(
    const float & _arg)
  {
    this->vz = _arg;
    return *this;
  }
  Type & set__alt_rel(
    const float & _arg)
  {
    this->alt_rel = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__xy_global(
    const bool & _arg)
  {
    this->xy_global = _arg;
    return *this;
  }
  Type & set__ref_lat(
    const double & _arg)
  {
    this->ref_lat = _arg;
    return *this;
  }
  Type & set__ref_lon(
    const double & _arg)
  {
    this->ref_lon = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::msg::VehicleState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::msg::VehicleState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::msg::VehicleState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::msg::VehicleState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::VehicleState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::VehicleState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::VehicleState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::VehicleState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::msg::VehicleState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::msg::VehicleState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__msg__VehicleState
    std::shared_ptr<mission_interfaces::msg::VehicleState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__msg__VehicleState
    std::shared_ptr<mission_interfaces::msg::VehicleState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    if (this->ready != other.ready) {
      return false;
    }
    if (this->armed != other.armed) {
      return false;
    }
    if (this->airborne != other.airborne) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->controller != other.controller) {
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
    if (this->heading != other.heading) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    if (this->alt_rel != other.alt_rel) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->xy_global != other.xy_global) {
      return false;
    }
    if (this->ref_lat != other.ref_lat) {
      return false;
    }
    if (this->ref_lon != other.ref_lon) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleState_

// alias to use template instance with default allocator
using VehicleState =
  mission_interfaces::msg::VehicleState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
