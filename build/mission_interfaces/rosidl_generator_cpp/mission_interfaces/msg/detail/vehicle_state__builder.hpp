// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/vehicle_state.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/msg/detail/vehicle_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace msg
{

namespace builder
{

class Init_VehicleState_ref_lon
{
public:
  explicit Init_VehicleState_ref_lon(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::msg::VehicleState ref_lon(::mission_interfaces::msg::VehicleState::_ref_lon_type arg)
  {
    msg_.ref_lon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_ref_lat
{
public:
  explicit Init_VehicleState_ref_lat(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_ref_lon ref_lat(::mission_interfaces::msg::VehicleState::_ref_lat_type arg)
  {
    msg_.ref_lat = std::move(arg);
    return Init_VehicleState_ref_lon(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_xy_global
{
public:
  explicit Init_VehicleState_xy_global(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_ref_lat xy_global(::mission_interfaces::msg::VehicleState::_xy_global_type arg)
  {
    msg_.xy_global = std::move(arg);
    return Init_VehicleState_ref_lat(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_pitch
{
public:
  explicit Init_VehicleState_pitch(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_xy_global pitch(::mission_interfaces::msg::VehicleState::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_VehicleState_xy_global(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_roll
{
public:
  explicit Init_VehicleState_roll(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_pitch roll(::mission_interfaces::msg::VehicleState::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_VehicleState_pitch(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_alt_rel
{
public:
  explicit Init_VehicleState_alt_rel(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_roll alt_rel(::mission_interfaces::msg::VehicleState::_alt_rel_type arg)
  {
    msg_.alt_rel = std::move(arg);
    return Init_VehicleState_roll(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_vz
{
public:
  explicit Init_VehicleState_vz(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_alt_rel vz(::mission_interfaces::msg::VehicleState::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_VehicleState_alt_rel(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_vy
{
public:
  explicit Init_VehicleState_vy(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_vz vy(::mission_interfaces::msg::VehicleState::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_VehicleState_vz(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_vx
{
public:
  explicit Init_VehicleState_vx(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_vy vx(::mission_interfaces::msg::VehicleState::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_VehicleState_vy(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_heading
{
public:
  explicit Init_VehicleState_heading(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_vx heading(::mission_interfaces::msg::VehicleState::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_VehicleState_vx(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_z
{
public:
  explicit Init_VehicleState_z(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_heading z(::mission_interfaces::msg::VehicleState::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_VehicleState_heading(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_y
{
public:
  explicit Init_VehicleState_y(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_z y(::mission_interfaces::msg::VehicleState::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_VehicleState_z(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_x
{
public:
  explicit Init_VehicleState_x(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_y x(::mission_interfaces::msg::VehicleState::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_VehicleState_y(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_controller
{
public:
  explicit Init_VehicleState_controller(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_x controller(::mission_interfaces::msg::VehicleState::_controller_type arg)
  {
    msg_.controller = std::move(arg);
    return Init_VehicleState_x(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_mode
{
public:
  explicit Init_VehicleState_mode(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_controller mode(::mission_interfaces::msg::VehicleState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_VehicleState_controller(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_airborne
{
public:
  explicit Init_VehicleState_airborne(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_mode airborne(::mission_interfaces::msg::VehicleState::_airborne_type arg)
  {
    msg_.airborne = std::move(arg);
    return Init_VehicleState_mode(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_armed
{
public:
  explicit Init_VehicleState_armed(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_airborne armed(::mission_interfaces::msg::VehicleState::_armed_type arg)
  {
    msg_.armed = std::move(arg);
    return Init_VehicleState_airborne(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_ready
{
public:
  explicit Init_VehicleState_ready(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_armed ready(::mission_interfaces::msg::VehicleState::_ready_type arg)
  {
    msg_.ready = std::move(arg);
    return Init_VehicleState_armed(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_valid
{
public:
  explicit Init_VehicleState_valid(::mission_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_ready valid(::mission_interfaces::msg::VehicleState::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_VehicleState_ready(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_header
{
public:
  Init_VehicleState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleState_valid header(::mission_interfaces::msg::VehicleState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleState_valid(msg_);
  }

private:
  ::mission_interfaces::msg::VehicleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::msg::VehicleState>()
{
  return mission_interfaces::msg::builder::Init_VehicleState_header();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
