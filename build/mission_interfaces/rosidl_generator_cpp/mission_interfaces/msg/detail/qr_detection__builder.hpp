// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:msg/QrDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/qr_detection.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__QR_DETECTION__BUILDER_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__QR_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/msg/detail/qr_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace msg
{

namespace builder
{

class Init_QrDetection_position_estimate
{
public:
  explicit Init_QrDetection_position_estimate(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::msg::QrDetection position_estimate(::mission_interfaces::msg::QrDetection::_position_estimate_type arg)
  {
    msg_.position_estimate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_drone_heading
{
public:
  explicit Init_QrDetection_drone_heading(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_position_estimate drone_heading(::mission_interfaces::msg::QrDetection::_drone_heading_type arg)
  {
    msg_.drone_heading = std::move(arg);
    return Init_QrDetection_position_estimate(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_drone_z
{
public:
  explicit Init_QrDetection_drone_z(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_drone_heading drone_z(::mission_interfaces::msg::QrDetection::_drone_z_type arg)
  {
    msg_.drone_z = std::move(arg);
    return Init_QrDetection_drone_heading(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_drone_y
{
public:
  explicit Init_QrDetection_drone_y(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_drone_z drone_y(::mission_interfaces::msg::QrDetection::_drone_y_type arg)
  {
    msg_.drone_y = std::move(arg);
    return Init_QrDetection_drone_z(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_drone_x
{
public:
  explicit Init_QrDetection_drone_x(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_drone_y drone_x(::mission_interfaces::msg::QrDetection::_drone_x_type arg)
  {
    msg_.drone_x = std::move(arg);
    return Init_QrDetection_drone_y(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_alt_rel
{
public:
  explicit Init_QrDetection_alt_rel(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_drone_x alt_rel(::mission_interfaces::msg::QrDetection::_alt_rel_type arg)
  {
    msg_.alt_rel = std::move(arg);
    return Init_QrDetection_drone_x(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_pose_valid
{
public:
  explicit Init_QrDetection_pose_valid(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_alt_rel pose_valid(::mission_interfaces::msg::QrDetection::_pose_valid_type arg)
  {
    msg_.pose_valid = std::move(arg);
    return Init_QrDetection_alt_rel(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_image_height
{
public:
  explicit Init_QrDetection_image_height(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_pose_valid image_height(::mission_interfaces::msg::QrDetection::_image_height_type arg)
  {
    msg_.image_height = std::move(arg);
    return Init_QrDetection_pose_valid(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_image_width
{
public:
  explicit Init_QrDetection_image_width(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_image_height image_width(::mission_interfaces::msg::QrDetection::_image_width_type arg)
  {
    msg_.image_width = std::move(arg);
    return Init_QrDetection_image_height(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_match_threshold
{
public:
  explicit Init_QrDetection_match_threshold(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_image_width match_threshold(::mission_interfaces::msg::QrDetection::_match_threshold_type arg)
  {
    msg_.match_threshold = std::move(arg);
    return Init_QrDetection_image_width(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_matched
{
public:
  explicit Init_QrDetection_matched(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_match_threshold matched(::mission_interfaces::msg::QrDetection::_matched_type arg)
  {
    msg_.matched = std::move(arg);
    return Init_QrDetection_match_threshold(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_score
{
public:
  explicit Init_QrDetection_score(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_matched score(::mission_interfaces::msg::QrDetection::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_QrDetection_matched(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_reference_ready
{
public:
  explicit Init_QrDetection_reference_ready(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_score reference_ready(::mission_interfaces::msg::QrDetection::_reference_ready_type arg)
  {
    msg_.reference_ready = std::move(arg);
    return Init_QrDetection_score(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_decoded_text
{
public:
  explicit Init_QrDetection_decoded_text(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_reference_ready decoded_text(::mission_interfaces::msg::QrDetection::_decoded_text_type arg)
  {
    msg_.decoded_text = std::move(arg);
    return Init_QrDetection_reference_ready(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_v
{
public:
  explicit Init_QrDetection_v(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_decoded_text v(::mission_interfaces::msg::QrDetection::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_QrDetection_decoded_text(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_u
{
public:
  explicit Init_QrDetection_u(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_v u(::mission_interfaces::msg::QrDetection::_u_type arg)
  {
    msg_.u = std::move(arg);
    return Init_QrDetection_v(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_corners
{
public:
  explicit Init_QrDetection_corners(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_u corners(::mission_interfaces::msg::QrDetection::_corners_type arg)
  {
    msg_.corners = std::move(arg);
    return Init_QrDetection_u(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_detected
{
public:
  explicit Init_QrDetection_detected(::mission_interfaces::msg::QrDetection & msg)
  : msg_(msg)
  {}
  Init_QrDetection_corners detected(::mission_interfaces::msg::QrDetection::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return Init_QrDetection_corners(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

class Init_QrDetection_header
{
public:
  Init_QrDetection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QrDetection_detected header(::mission_interfaces::msg::QrDetection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_QrDetection_detected(msg_);
  }

private:
  ::mission_interfaces::msg::QrDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::msg::QrDetection>()
{
  return mission_interfaces::msg::builder::Init_QrDetection_header();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__QR_DETECTION__BUILDER_HPP_
