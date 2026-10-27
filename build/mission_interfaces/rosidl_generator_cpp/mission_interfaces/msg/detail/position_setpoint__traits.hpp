// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_interfaces:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/position_setpoint.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__POSITION_SETPOINT__TRAITS_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__POSITION_SETPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_interfaces/msg/detail/position_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mission_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PositionSetpoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionSetpoint & msg,
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

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionSetpoint & msg, bool use_flow_style = false)
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
  const mission_interfaces::msg::PositionSetpoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::msg::PositionSetpoint & msg)
{
  return mission_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::msg::PositionSetpoint>()
{
  return "mission_interfaces::msg::PositionSetpoint";
}

template<>
inline const char * name<mission_interfaces::msg::PositionSetpoint>()
{
  return "mission_interfaces/msg/PositionSetpoint";
}

template<>
struct has_fixed_size<mission_interfaces::msg::PositionSetpoint>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mission_interfaces::msg::PositionSetpoint>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mission_interfaces::msg::PositionSetpoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MISSION_INTERFACES__MSG__DETAIL__POSITION_SETPOINT__TRAITS_HPP_
