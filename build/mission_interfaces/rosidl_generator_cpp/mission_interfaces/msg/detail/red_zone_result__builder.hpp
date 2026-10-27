// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:msg/RedZoneResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/red_zone_result.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__RED_ZONE_RESULT__BUILDER_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__RED_ZONE_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/msg/detail/red_zone_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace msg
{

namespace builder
{

class Init_RedZoneResult_processing_time_ms
{
public:
  explicit Init_RedZoneResult_processing_time_ms(::mission_interfaces::msg::RedZoneResult & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::msg::RedZoneResult processing_time_ms(::mission_interfaces::msg::RedZoneResult::_processing_time_ms_type arg)
  {
    msg_.processing_time_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::msg::RedZoneResult msg_;
};

class Init_RedZoneResult_patches
{
public:
  explicit Init_RedZoneResult_patches(::mission_interfaces::msg::RedZoneResult & msg)
  : msg_(msg)
  {}
  Init_RedZoneResult_processing_time_ms patches(::mission_interfaces::msg::RedZoneResult::_patches_type arg)
  {
    msg_.patches = std::move(arg);
    return Init_RedZoneResult_processing_time_ms(msg_);
  }

private:
  ::mission_interfaces::msg::RedZoneResult msg_;
};

class Init_RedZoneResult_total_area_fraction
{
public:
  explicit Init_RedZoneResult_total_area_fraction(::mission_interfaces::msg::RedZoneResult & msg)
  : msg_(msg)
  {}
  Init_RedZoneResult_patches total_area_fraction(::mission_interfaces::msg::RedZoneResult::_total_area_fraction_type arg)
  {
    msg_.total_area_fraction = std::move(arg);
    return Init_RedZoneResult_patches(msg_);
  }

private:
  ::mission_interfaces::msg::RedZoneResult msg_;
};

class Init_RedZoneResult_num_patches
{
public:
  explicit Init_RedZoneResult_num_patches(::mission_interfaces::msg::RedZoneResult & msg)
  : msg_(msg)
  {}
  Init_RedZoneResult_total_area_fraction num_patches(::mission_interfaces::msg::RedZoneResult::_num_patches_type arg)
  {
    msg_.num_patches = std::move(arg);
    return Init_RedZoneResult_total_area_fraction(msg_);
  }

private:
  ::mission_interfaces::msg::RedZoneResult msg_;
};

class Init_RedZoneResult_detected
{
public:
  explicit Init_RedZoneResult_detected(::mission_interfaces::msg::RedZoneResult & msg)
  : msg_(msg)
  {}
  Init_RedZoneResult_num_patches detected(::mission_interfaces::msg::RedZoneResult::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return Init_RedZoneResult_num_patches(msg_);
  }

private:
  ::mission_interfaces::msg::RedZoneResult msg_;
};

class Init_RedZoneResult_image_height
{
public:
  explicit Init_RedZoneResult_image_height(::mission_interfaces::msg::RedZoneResult & msg)
  : msg_(msg)
  {}
  Init_RedZoneResult_detected image_height(::mission_interfaces::msg::RedZoneResult::_image_height_type arg)
  {
    msg_.image_height = std::move(arg);
    return Init_RedZoneResult_detected(msg_);
  }

private:
  ::mission_interfaces::msg::RedZoneResult msg_;
};

class Init_RedZoneResult_image_width
{
public:
  explicit Init_RedZoneResult_image_width(::mission_interfaces::msg::RedZoneResult & msg)
  : msg_(msg)
  {}
  Init_RedZoneResult_image_height image_width(::mission_interfaces::msg::RedZoneResult::_image_width_type arg)
  {
    msg_.image_width = std::move(arg);
    return Init_RedZoneResult_image_height(msg_);
  }

private:
  ::mission_interfaces::msg::RedZoneResult msg_;
};

class Init_RedZoneResult_header
{
public:
  Init_RedZoneResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RedZoneResult_image_width header(::mission_interfaces::msg::RedZoneResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RedZoneResult_image_width(msg_);
  }

private:
  ::mission_interfaces::msg::RedZoneResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::msg::RedZoneResult>()
{
  return mission_interfaces::msg::builder::Init_RedZoneResult_header();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__RED_ZONE_RESULT__BUILDER_HPP_
