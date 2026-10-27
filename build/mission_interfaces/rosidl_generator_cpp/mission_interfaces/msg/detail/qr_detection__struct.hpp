// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mission_interfaces:msg/QrDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/qr_detection.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__QR_DETECTION__STRUCT_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__QR_DETECTION__STRUCT_HPP_

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
// Member 'position_estimate'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__msg__QrDetection __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__msg__QrDetection __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QrDetection_
{
  using Type = QrDetection_<ContainerAllocator>;

  explicit QrDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position_estimate(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = false;
      std::fill<typename std::array<float, 8>::iterator, float>(this->corners.begin(), this->corners.end(), 0.0f);
      this->u = 0.0f;
      this->v = 0.0f;
      this->decoded_text = "";
      this->reference_ready = false;
      this->score = 0.0f;
      this->matched = false;
      this->match_threshold = 0.0f;
      this->image_width = 0ul;
      this->image_height = 0ul;
      this->pose_valid = false;
      this->alt_rel = 0.0f;
      this->drone_x = 0.0f;
      this->drone_y = 0.0f;
      this->drone_z = 0.0f;
      this->drone_heading = 0.0f;
    }
  }

  explicit QrDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    corners(_alloc),
    decoded_text(_alloc),
    position_estimate(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = false;
      std::fill<typename std::array<float, 8>::iterator, float>(this->corners.begin(), this->corners.end(), 0.0f);
      this->u = 0.0f;
      this->v = 0.0f;
      this->decoded_text = "";
      this->reference_ready = false;
      this->score = 0.0f;
      this->matched = false;
      this->match_threshold = 0.0f;
      this->image_width = 0ul;
      this->image_height = 0ul;
      this->pose_valid = false;
      this->alt_rel = 0.0f;
      this->drone_x = 0.0f;
      this->drone_y = 0.0f;
      this->drone_z = 0.0f;
      this->drone_heading = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _detected_type =
    bool;
  _detected_type detected;
  using _corners_type =
    std::array<float, 8>;
  _corners_type corners;
  using _u_type =
    float;
  _u_type u;
  using _v_type =
    float;
  _v_type v;
  using _decoded_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _decoded_text_type decoded_text;
  using _reference_ready_type =
    bool;
  _reference_ready_type reference_ready;
  using _score_type =
    float;
  _score_type score;
  using _matched_type =
    bool;
  _matched_type matched;
  using _match_threshold_type =
    float;
  _match_threshold_type match_threshold;
  using _image_width_type =
    uint32_t;
  _image_width_type image_width;
  using _image_height_type =
    uint32_t;
  _image_height_type image_height;
  using _pose_valid_type =
    bool;
  _pose_valid_type pose_valid;
  using _alt_rel_type =
    float;
  _alt_rel_type alt_rel;
  using _drone_x_type =
    float;
  _drone_x_type drone_x;
  using _drone_y_type =
    float;
  _drone_y_type drone_y;
  using _drone_z_type =
    float;
  _drone_z_type drone_z;
  using _drone_heading_type =
    float;
  _drone_heading_type drone_heading;
  using _position_estimate_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_estimate_type position_estimate;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__detected(
    const bool & _arg)
  {
    this->detected = _arg;
    return *this;
  }
  Type & set__corners(
    const std::array<float, 8> & _arg)
  {
    this->corners = _arg;
    return *this;
  }
  Type & set__u(
    const float & _arg)
  {
    this->u = _arg;
    return *this;
  }
  Type & set__v(
    const float & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__decoded_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->decoded_text = _arg;
    return *this;
  }
  Type & set__reference_ready(
    const bool & _arg)
  {
    this->reference_ready = _arg;
    return *this;
  }
  Type & set__score(
    const float & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__matched(
    const bool & _arg)
  {
    this->matched = _arg;
    return *this;
  }
  Type & set__match_threshold(
    const float & _arg)
  {
    this->match_threshold = _arg;
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
  Type & set__pose_valid(
    const bool & _arg)
  {
    this->pose_valid = _arg;
    return *this;
  }
  Type & set__alt_rel(
    const float & _arg)
  {
    this->alt_rel = _arg;
    return *this;
  }
  Type & set__drone_x(
    const float & _arg)
  {
    this->drone_x = _arg;
    return *this;
  }
  Type & set__drone_y(
    const float & _arg)
  {
    this->drone_y = _arg;
    return *this;
  }
  Type & set__drone_z(
    const float & _arg)
  {
    this->drone_z = _arg;
    return *this;
  }
  Type & set__drone_heading(
    const float & _arg)
  {
    this->drone_heading = _arg;
    return *this;
  }
  Type & set__position_estimate(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position_estimate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::msg::QrDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::msg::QrDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::msg::QrDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::msg::QrDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::QrDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::QrDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::msg::QrDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::msg::QrDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::msg::QrDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::msg::QrDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__msg__QrDetection
    std::shared_ptr<mission_interfaces::msg::QrDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__msg__QrDetection
    std::shared_ptr<mission_interfaces::msg::QrDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QrDetection_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->detected != other.detected) {
      return false;
    }
    if (this->corners != other.corners) {
      return false;
    }
    if (this->u != other.u) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->decoded_text != other.decoded_text) {
      return false;
    }
    if (this->reference_ready != other.reference_ready) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->matched != other.matched) {
      return false;
    }
    if (this->match_threshold != other.match_threshold) {
      return false;
    }
    if (this->image_width != other.image_width) {
      return false;
    }
    if (this->image_height != other.image_height) {
      return false;
    }
    if (this->pose_valid != other.pose_valid) {
      return false;
    }
    if (this->alt_rel != other.alt_rel) {
      return false;
    }
    if (this->drone_x != other.drone_x) {
      return false;
    }
    if (this->drone_y != other.drone_y) {
      return false;
    }
    if (this->drone_z != other.drone_z) {
      return false;
    }
    if (this->drone_heading != other.drone_heading) {
      return false;
    }
    if (this->position_estimate != other.position_estimate) {
      return false;
    }
    return true;
  }
  bool operator!=(const QrDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QrDetection_

// alias to use template instance with default allocator
using QrDetection =
  mission_interfaces::msg::QrDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__QR_DETECTION__STRUCT_HPP_
