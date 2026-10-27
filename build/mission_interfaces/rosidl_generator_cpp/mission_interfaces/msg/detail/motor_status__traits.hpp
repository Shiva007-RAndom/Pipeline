// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/motor_status.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_interfaces/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mission_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: servo_pwm
  {
    if (msg.servo_pwm.size() == 0) {
      out << "servo_pwm: []";
    } else {
      out << "servo_pwm: [";
      size_t pending_items = msg.servo_pwm.size();
      for (auto item : msg.servo_pwm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: thrust
  {
    out << "thrust: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust, out);
    out << ", ";
  }

  // member: cmd_roll_deg
  {
    out << "cmd_roll_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_roll_deg, out);
    out << ", ";
  }

  // member: cmd_pitch_deg
  {
    out << "cmd_pitch_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_pitch_deg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: servo_pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.servo_pwm.size() == 0) {
      out << "servo_pwm: []\n";
    } else {
      out << "servo_pwm:\n";
      for (auto item : msg.servo_pwm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: thrust
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thrust: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust, out);
    out << "\n";
  }

  // member: cmd_roll_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_roll_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_roll_deg, out);
    out << "\n";
  }

  // member: cmd_pitch_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_pitch_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_pitch_deg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::msg::MotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::msg::MotorStatus & msg)
{
  return mission_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::msg::MotorStatus>()
{
  return "mission_interfaces::msg::MotorStatus";
}

template<>
inline const char * name<mission_interfaces::msg::MotorStatus>()
{
  return "mission_interfaces/msg/MotorStatus";
}

template<>
struct has_fixed_size<mission_interfaces::msg::MotorStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mission_interfaces::msg::MotorStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mission_interfaces::msg::MotorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MISSION_INTERFACES__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
