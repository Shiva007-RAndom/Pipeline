// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/position_setpoint.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__POSITION_SETPOINT__BUILDER_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__POSITION_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/msg/detail/position_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace msg
{

namespace builder
{

class Init_PositionSetpoint_yaw
{
public:
  explicit Init_PositionSetpoint_yaw(::mission_interfaces::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::msg::PositionSetpoint yaw(::mission_interfaces::msg::PositionSetpoint::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_z
{
public:
  explicit Init_PositionSetpoint_z(::mission_interfaces::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_yaw z(::mission_interfaces::msg::PositionSetpoint::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PositionSetpoint_yaw(msg_);
  }

private:
  ::mission_interfaces::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_y
{
public:
  explicit Init_PositionSetpoint_y(::mission_interfaces::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_z y(::mission_interfaces::msg::PositionSetpoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PositionSetpoint_z(msg_);
  }

private:
  ::mission_interfaces::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_x
{
public:
  explicit Init_PositionSetpoint_x(::mission_interfaces::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_y x(::mission_interfaces::msg::PositionSetpoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PositionSetpoint_y(msg_);
  }

private:
  ::mission_interfaces::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_header
{
public:
  Init_PositionSetpoint_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionSetpoint_x header(::mission_interfaces::msg::PositionSetpoint::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PositionSetpoint_x(msg_);
  }

private:
  ::mission_interfaces::msg::PositionSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::msg::PositionSetpoint>()
{
  return mission_interfaces::msg::builder::Init_PositionSetpoint_header();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__POSITION_SETPOINT__BUILDER_HPP_
