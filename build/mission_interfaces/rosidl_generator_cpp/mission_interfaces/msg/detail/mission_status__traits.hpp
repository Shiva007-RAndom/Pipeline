// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/mission_status.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_interfaces/msg/detail/mission_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mission_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: stage
  {
    out << "stage: ";
    rosidl_generator_traits::value_to_yaml(msg.stage, out);
    out << ", ";
  }

  // member: state_text
  {
    out << "state_text: ";
    rosidl_generator_traits::value_to_yaml(msg.state_text, out);
    out << ", ";
  }

  // member: countdown
  {
    out << "countdown: ";
    rosidl_generator_traits::value_to_yaml(msg.countdown, out);
    out << ", ";
  }

  // member: reference_ready
  {
    out << "reference_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_ready, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionStatus & msg,
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

  // member: stage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stage: ";
    rosidl_generator_traits::value_to_yaml(msg.stage, out);
    out << "\n";
  }

  // member: state_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_text: ";
    rosidl_generator_traits::value_to_yaml(msg.state_text, out);
    out << "\n";
  }

  // member: countdown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "countdown: ";
    rosidl_generator_traits::value_to_yaml(msg.countdown, out);
    out << "\n";
  }

  // member: reference_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_ready, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionStatus & msg, bool use_flow_style = false)
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
  const mission_interfaces::msg::MissionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::msg::MissionStatus & msg)
{
  return mission_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::msg::MissionStatus>()
{
  return "mission_interfaces::msg::MissionStatus";
}

template<>
inline const char * name<mission_interfaces::msg::MissionStatus>()
{
  return "mission_interfaces/msg/MissionStatus";
}

template<>
struct has_fixed_size<mission_interfaces::msg::MissionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::msg::MissionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::msg::MissionStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MISSION_INTERFACES__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_
