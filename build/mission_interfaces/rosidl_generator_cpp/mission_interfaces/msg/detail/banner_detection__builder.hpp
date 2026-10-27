// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:msg/BannerDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/banner_detection.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__BANNER_DETECTION__BUILDER_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__BANNER_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/msg/detail/banner_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace msg
{

namespace builder
{

class Init_BannerDetection_position_estimate
{
public:
  explicit Init_BannerDetection_position_estimate(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::msg::BannerDetection position_estimate(::mission_interfaces::msg::BannerDetection::_position_estimate_type arg)
  {
    msg_.position_estimate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_drone_heading
{
public:
  explicit Init_BannerDetection_drone_heading(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_position_estimate drone_heading(::mission_interfaces::msg::BannerDetection::_drone_heading_type arg)
  {
    msg_.drone_heading = std::move(arg);
    return Init_BannerDetection_position_estimate(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_drone_z
{
public:
  explicit Init_BannerDetection_drone_z(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_drone_heading drone_z(::mission_interfaces::msg::BannerDetection::_drone_z_type arg)
  {
    msg_.drone_z = std::move(arg);
    return Init_BannerDetection_drone_heading(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_drone_y
{
public:
  explicit Init_BannerDetection_drone_y(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_drone_z drone_y(::mission_interfaces::msg::BannerDetection::_drone_y_type arg)
  {
    msg_.drone_y = std::move(arg);
    return Init_BannerDetection_drone_z(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_drone_x
{
public:
  explicit Init_BannerDetection_drone_x(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_drone_y drone_x(::mission_interfaces::msg::BannerDetection::_drone_x_type arg)
  {
    msg_.drone_x = std::move(arg);
    return Init_BannerDetection_drone_y(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_alt_rel
{
public:
  explicit Init_BannerDetection_alt_rel(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_drone_x alt_rel(::mission_interfaces::msg::BannerDetection::_alt_rel_type arg)
  {
    msg_.alt_rel = std::move(arg);
    return Init_BannerDetection_drone_x(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_pose_valid
{
public:
  explicit Init_BannerDetection_pose_valid(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_alt_rel pose_valid(::mission_interfaces::msg::BannerDetection::_pose_valid_type arg)
  {
    msg_.pose_valid = std::move(arg);
    return Init_BannerDetection_alt_rel(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_consecutive_hits
{
public:
  explicit Init_BannerDetection_consecutive_hits(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_pose_valid consecutive_hits(::mission_interfaces::msg::BannerDetection::_consecutive_hits_type arg)
  {
    msg_.consecutive_hits = std::move(arg);
    return Init_BannerDetection_pose_valid(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_candidates
{
public:
  explicit Init_BannerDetection_candidates(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_consecutive_hits candidates(::mission_interfaces::msg::BannerDetection::_candidates_type arg)
  {
    msg_.candidates = std::move(arg);
    return Init_BannerDetection_consecutive_hits(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_image_height
{
public:
  explicit Init_BannerDetection_image_height(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_candidates image_height(::mission_interfaces::msg::BannerDetection::_image_height_type arg)
  {
    msg_.image_height = std::move(arg);
    return Init_BannerDetection_candidates(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_image_width
{
public:
  explicit Init_BannerDetection_image_width(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_image_height image_width(::mission_interfaces::msg::BannerDetection::_image_width_type arg)
  {
    msg_.image_width = std::move(arg);
    return Init_BannerDetection_image_height(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_partial
{
public:
  explicit Init_BannerDetection_partial(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_image_width partial(::mission_interfaces::msg::BannerDetection::_partial_type arg)
  {
    msg_.partial = std::move(arg);
    return Init_BannerDetection_image_width(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_angle
{
public:
  explicit Init_BannerDetection_angle(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_partial angle(::mission_interfaces::msg::BannerDetection::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_BannerDetection_partial(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_quad
{
public:
  explicit Init_BannerDetection_quad(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_angle quad(::mission_interfaces::msg::BannerDetection::_quad_type arg)
  {
    msg_.quad = std::move(arg);
    return Init_BannerDetection_angle(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_v
{
public:
  explicit Init_BannerDetection_v(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_quad v(::mission_interfaces::msg::BannerDetection::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_BannerDetection_quad(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_u
{
public:
  explicit Init_BannerDetection_u(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_v u(::mission_interfaces::msg::BannerDetection::_u_type arg)
  {
    msg_.u = std::move(arg);
    return Init_BannerDetection_v(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_text
{
public:
  explicit Init_BannerDetection_text(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_u text(::mission_interfaces::msg::BannerDetection::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_BannerDetection_u(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_source
{
public:
  explicit Init_BannerDetection_source(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_text source(::mission_interfaces::msg::BannerDetection::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_BannerDetection_text(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_detected
{
public:
  explicit Init_BannerDetection_detected(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_source detected(::mission_interfaces::msg::BannerDetection::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return Init_BannerDetection_source(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_color
{
public:
  explicit Init_BannerDetection_color(::mission_interfaces::msg::BannerDetection & msg)
  : msg_(msg)
  {}
  Init_BannerDetection_detected color(::mission_interfaces::msg::BannerDetection::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_BannerDetection_detected(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

class Init_BannerDetection_header
{
public:
  Init_BannerDetection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BannerDetection_color header(::mission_interfaces::msg::BannerDetection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BannerDetection_color(msg_);
  }

private:
  ::mission_interfaces::msg::BannerDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::msg::BannerDetection>()
{
  return mission_interfaces::msg::builder::Init_BannerDetection_header();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__BANNER_DETECTION__BUILDER_HPP_
