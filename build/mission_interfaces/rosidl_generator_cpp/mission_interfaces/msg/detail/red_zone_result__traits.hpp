// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_interfaces:msg/RedZoneResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/red_zone_result.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__RED_ZONE_RESULT__TRAITS_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__RED_ZONE_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_interfaces/msg/detail/red_zone_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'patches'
#include "mission_interfaces/msg/detail/red_patch__traits.hpp"

namespace mission_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RedZoneResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: image_width
  {
    out << "image_width: ";
    rosidl_generator_traits::value_to_yaml(msg.image_width, out);
    out << ", ";
  }

  // member: image_height
  {
    out << "image_height: ";
    rosidl_generator_traits::value_to_yaml(msg.image_height, out);
    out << ", ";
  }

  // member: detected
  {
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << ", ";
  }

  // member: num_patches
  {
    out << "num_patches: ";
    rosidl_generator_traits::value_to_yaml(msg.num_patches, out);
    out << ", ";
  }

  // member: total_area_fraction
  {
    out << "total_area_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.total_area_fraction, out);
    out << ", ";
  }

  // member: patches
  {
    if (msg.patches.size() == 0) {
      out << "patches: []";
    } else {
      out << "patches: [";
      size_t pending_items = msg.patches.size();
      for (auto item : msg.patches) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: processing_time_ms
  {
    out << "processing_time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.processing_time_ms, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RedZoneResult & msg,
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

  // member: image_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_width: ";
    rosidl_generator_traits::value_to_yaml(msg.image_width, out);
    out << "\n";
  }

  // member: image_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_height: ";
    rosidl_generator_traits::value_to_yaml(msg.image_height, out);
    out << "\n";
  }

  // member: detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << "\n";
  }

  // member: num_patches
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_patches: ";
    rosidl_generator_traits::value_to_yaml(msg.num_patches, out);
    out << "\n";
  }

  // member: total_area_fraction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_area_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.total_area_fraction, out);
    out << "\n";
  }

  // member: patches
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.patches.size() == 0) {
      out << "patches: []\n";
    } else {
      out << "patches:\n";
      for (auto item : msg.patches) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: processing_time_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "processing_time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.processing_time_ms, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RedZoneResult & msg, bool use_flow_style = false)
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
  const mission_interfaces::msg::RedZoneResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::msg::RedZoneResult & msg)
{
  return mission_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::msg::RedZoneResult>()
{
  return "mission_interfaces::msg::RedZoneResult";
}

template<>
inline const char * name<mission_interfaces::msg::RedZoneResult>()
{
  return "mission_interfaces/msg/RedZoneResult";
}

template<>
struct has_fixed_size<mission_interfaces::msg::RedZoneResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::msg::RedZoneResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::msg::RedZoneResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MISSION_INTERFACES__MSG__DETAIL__RED_ZONE_RESULT__TRAITS_HPP_
