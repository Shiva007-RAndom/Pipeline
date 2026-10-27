// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/motor_status.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorStatus_cmd_pitch_deg
{
public:
  explicit Init_MotorStatus_cmd_pitch_deg(::mission_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::msg::MotorStatus cmd_pitch_deg(::mission_interfaces::msg::MotorStatus::_cmd_pitch_deg_type arg)
  {
    msg_.cmd_pitch_deg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_cmd_roll_deg
{
public:
  explicit Init_MotorStatus_cmd_roll_deg(::mission_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_cmd_pitch_deg cmd_roll_deg(::mission_interfaces::msg::MotorStatus::_cmd_roll_deg_type arg)
  {
    msg_.cmd_roll_deg = std::move(arg);
    return Init_MotorStatus_cmd_pitch_deg(msg_);
  }

private:
  ::mission_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_thrust
{
public:
  explicit Init_MotorStatus_thrust(::mission_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_cmd_roll_deg thrust(::mission_interfaces::msg::MotorStatus::_thrust_type arg)
  {
    msg_.thrust = std::move(arg);
    return Init_MotorStatus_cmd_roll_deg(msg_);
  }

private:
  ::mission_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_servo_pwm
{
public:
  explicit Init_MotorStatus_servo_pwm(::mission_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_thrust servo_pwm(::mission_interfaces::msg::MotorStatus::_servo_pwm_type arg)
  {
    msg_.servo_pwm = std::move(arg);
    return Init_MotorStatus_thrust(msg_);
  }

private:
  ::mission_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_header
{
public:
  Init_MotorStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatus_servo_pwm header(::mission_interfaces::msg::MotorStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorStatus_servo_pwm(msg_);
  }

private:
  ::mission_interfaces::msg::MotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::msg::MotorStatus>()
{
  return mission_interfaces::msg::builder::Init_MotorStatus_header();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
