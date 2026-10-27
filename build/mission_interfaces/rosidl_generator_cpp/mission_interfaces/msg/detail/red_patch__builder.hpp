// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:msg/RedPatch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/red_patch.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__RED_PATCH__BUILDER_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__RED_PATCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/msg/detail/red_patch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace msg
{

namespace builder
{

class Init_RedPatch_contour
{
public:
  explicit Init_RedPatch_contour(::mission_interfaces::msg::RedPatch & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::msg::RedPatch contour(::mission_interfaces::msg::RedPatch::_contour_type arg)
  {
    msg_.contour = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::msg::RedPatch msg_;
};

class Init_RedPatch_bbox_xywh
{
public:
  explicit Init_RedPatch_bbox_xywh(::mission_interfaces::msg::RedPatch & msg)
  : msg_(msg)
  {}
  Init_RedPatch_contour bbox_xywh(::mission_interfaces::msg::RedPatch::_bbox_xywh_type arg)
  {
    msg_.bbox_xywh = std::move(arg);
    return Init_RedPatch_contour(msg_);
  }

private:
  ::mission_interfaces::msg::RedPatch msg_;
};

class Init_RedPatch_area_fraction
{
public:
  explicit Init_RedPatch_area_fraction(::mission_interfaces::msg::RedPatch & msg)
  : msg_(msg)
  {}
  Init_RedPatch_bbox_xywh area_fraction(::mission_interfaces::msg::RedPatch::_area_fraction_type arg)
  {
    msg_.area_fraction = std::move(arg);
    return Init_RedPatch_bbox_xywh(msg_);
  }

private:
  ::mission_interfaces::msg::RedPatch msg_;
};

class Init_RedPatch_area_px
{
public:
  explicit Init_RedPatch_area_px(::mission_interfaces::msg::RedPatch & msg)
  : msg_(msg)
  {}
  Init_RedPatch_area_fraction area_px(::mission_interfaces::msg::RedPatch::_area_px_type arg)
  {
    msg_.area_px = std::move(arg);
    return Init_RedPatch_area_fraction(msg_);
  }

private:
  ::mission_interfaces::msg::RedPatch msg_;
};

class Init_RedPatch_offset_y
{
public:
  explicit Init_RedPatch_offset_y(::mission_interfaces::msg::RedPatch & msg)
  : msg_(msg)
  {}
  Init_RedPatch_area_px offset_y(::mission_interfaces::msg::RedPatch::_offset_y_type arg)
  {
    msg_.offset_y = std::move(arg);
    return Init_RedPatch_area_px(msg_);
  }

private:
  ::mission_interfaces::msg::RedPatch msg_;
};

class Init_RedPatch_offset_x
{
public:
  explicit Init_RedPatch_offset_x(::mission_interfaces::msg::RedPatch & msg)
  : msg_(msg)
  {}
  Init_RedPatch_offset_y offset_x(::mission_interfaces::msg::RedPatch::_offset_x_type arg)
  {
    msg_.offset_x = std::move(arg);
    return Init_RedPatch_offset_y(msg_);
  }

private:
  ::mission_interfaces::msg::RedPatch msg_;
};

class Init_RedPatch_centroid_y
{
public:
  explicit Init_RedPatch_centroid_y(::mission_interfaces::msg::RedPatch & msg)
  : msg_(msg)
  {}
  Init_RedPatch_offset_x centroid_y(::mission_interfaces::msg::RedPatch::_centroid_y_type arg)
  {
    msg_.centroid_y = std::move(arg);
    return Init_RedPatch_offset_x(msg_);
  }

private:
  ::mission_interfaces::msg::RedPatch msg_;
};

class Init_RedPatch_centroid_x
{
public:
  Init_RedPatch_centroid_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RedPatch_centroid_y centroid_x(::mission_interfaces::msg::RedPatch::_centroid_x_type arg)
  {
    msg_.centroid_x = std::move(arg);
    return Init_RedPatch_centroid_y(msg_);
  }

private:
  ::mission_interfaces::msg::RedPatch msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::msg::RedPatch>()
{
  return mission_interfaces::msg::builder::Init_RedPatch_centroid_x();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__RED_PATCH__BUILDER_HPP_
