// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:msg/RedMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/red_map.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__RED_MAP__BUILDER_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__RED_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/msg/detail/red_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace msg
{

namespace builder
{

class Init_RedMap_margin
{
public:
  explicit Init_RedMap_margin(::mission_interfaces::msg::RedMap & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::msg::RedMap margin(::mission_interfaces::msg::RedMap::_margin_type arg)
  {
    msg_.margin = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::msg::RedMap msg_;
};

class Init_RedMap_version
{
public:
  explicit Init_RedMap_version(::mission_interfaces::msg::RedMap & msg)
  : msg_(msg)
  {}
  Init_RedMap_margin version(::mission_interfaces::msg::RedMap::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_RedMap_margin(msg_);
  }

private:
  ::mission_interfaces::msg::RedMap msg_;
};

class Init_RedMap_data
{
public:
  explicit Init_RedMap_data(::mission_interfaces::msg::RedMap & msg)
  : msg_(msg)
  {}
  Init_RedMap_version data(::mission_interfaces::msg::RedMap::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_RedMap_version(msg_);
  }

private:
  ::mission_interfaces::msg::RedMap msg_;
};

class Init_RedMap_height
{
public:
  explicit Init_RedMap_height(::mission_interfaces::msg::RedMap & msg)
  : msg_(msg)
  {}
  Init_RedMap_data height(::mission_interfaces::msg::RedMap::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_RedMap_data(msg_);
  }

private:
  ::mission_interfaces::msg::RedMap msg_;
};

class Init_RedMap_width
{
public:
  explicit Init_RedMap_width(::mission_interfaces::msg::RedMap & msg)
  : msg_(msg)
  {}
  Init_RedMap_height width(::mission_interfaces::msg::RedMap::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_RedMap_height(msg_);
  }

private:
  ::mission_interfaces::msg::RedMap msg_;
};

class Init_RedMap_grid_y0
{
public:
  explicit Init_RedMap_grid_y0(::mission_interfaces::msg::RedMap & msg)
  : msg_(msg)
  {}
  Init_RedMap_width grid_y0(::mission_interfaces::msg::RedMap::_grid_y0_type arg)
  {
    msg_.grid_y0 = std::move(arg);
    return Init_RedMap_width(msg_);
  }

private:
  ::mission_interfaces::msg::RedMap msg_;
};

class Init_RedMap_grid_x0
{
public:
  explicit Init_RedMap_grid_x0(::mission_interfaces::msg::RedMap & msg)
  : msg_(msg)
  {}
  Init_RedMap_grid_y0 grid_x0(::mission_interfaces::msg::RedMap::_grid_x0_type arg)
  {
    msg_.grid_x0 = std::move(arg);
    return Init_RedMap_grid_y0(msg_);
  }

private:
  ::mission_interfaces::msg::RedMap msg_;
};

class Init_RedMap_cell
{
public:
  explicit Init_RedMap_cell(::mission_interfaces::msg::RedMap & msg)
  : msg_(msg)
  {}
  Init_RedMap_grid_x0 cell(::mission_interfaces::msg::RedMap::_cell_type arg)
  {
    msg_.cell = std::move(arg);
    return Init_RedMap_grid_x0(msg_);
  }

private:
  ::mission_interfaces::msg::RedMap msg_;
};

class Init_RedMap_axis_heading
{
public:
  explicit Init_RedMap_axis_heading(::mission_interfaces::msg::RedMap & msg)
  : msg_(msg)
  {}
  Init_RedMap_cell axis_heading(::mission_interfaces::msg::RedMap::_axis_heading_type arg)
  {
    msg_.axis_heading = std::move(arg);
    return Init_RedMap_cell(msg_);
  }

private:
  ::mission_interfaces::msg::RedMap msg_;
};

class Init_RedMap_origin_east
{
public:
  explicit Init_RedMap_origin_east(::mission_interfaces::msg::RedMap & msg)
  : msg_(msg)
  {}
  Init_RedMap_axis_heading origin_east(::mission_interfaces::msg::RedMap::_origin_east_type arg)
  {
    msg_.origin_east = std::move(arg);
    return Init_RedMap_axis_heading(msg_);
  }

private:
  ::mission_interfaces::msg::RedMap msg_;
};

class Init_RedMap_origin_north
{
public:
  explicit Init_RedMap_origin_north(::mission_interfaces::msg::RedMap & msg)
  : msg_(msg)
  {}
  Init_RedMap_origin_east origin_north(::mission_interfaces::msg::RedMap::_origin_north_type arg)
  {
    msg_.origin_north = std::move(arg);
    return Init_RedMap_origin_east(msg_);
  }

private:
  ::mission_interfaces::msg::RedMap msg_;
};

class Init_RedMap_header
{
public:
  Init_RedMap_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RedMap_origin_north header(::mission_interfaces::msg::RedMap::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RedMap_origin_north(msg_);
  }

private:
  ::mission_interfaces::msg::RedMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::msg::RedMap>()
{
  return mission_interfaces::msg::builder::Init_RedMap_header();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__RED_MAP__BUILDER_HPP_
