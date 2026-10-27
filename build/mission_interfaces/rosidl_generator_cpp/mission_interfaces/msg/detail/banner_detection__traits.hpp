// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_interfaces:msg/BannerDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/banner_detection.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__BANNER_DETECTION__TRAITS_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__BANNER_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_interfaces/msg/detail/banner_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position_estimate'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace mission_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BannerDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: detected
  {
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << ", ";
  }

  // member: u
  {
    out << "u: ";
    rosidl_generator_traits::value_to_yaml(msg.u, out);
    out << ", ";
  }

  // member: v
  {
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << ", ";
  }

  // member: quad
  {
    if (msg.quad.size() == 0) {
      out << "quad: []";
    } else {
      out << "quad: [";
      size_t pending_items = msg.quad.size();
      for (auto item : msg.quad) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: partial
  {
    out << "partial: ";
    rosidl_generator_traits::value_to_yaml(msg.partial, out);
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

  // member: candidates
  {
    out << "candidates: ";
    rosidl_generator_traits::value_to_yaml(msg.candidates, out);
    out << ", ";
  }

  // member: consecutive_hits
  {
    out << "consecutive_hits: ";
    rosidl_generator_traits::value_to_yaml(msg.consecutive_hits, out);
    out << ", ";
  }

  // member: pose_valid
  {
    out << "pose_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_valid, out);
    out << ", ";
  }

  // member: alt_rel
  {
    out << "alt_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_rel, out);
    out << ", ";
  }

  // member: drone_x
  {
    out << "drone_x: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_x, out);
    out << ", ";
  }

  // member: drone_y
  {
    out << "drone_y: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_y, out);
    out << ", ";
  }

  // member: drone_z
  {
    out << "drone_z: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_z, out);
    out << ", ";
  }

  // member: drone_heading
  {
    out << "drone_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_heading, out);
    out << ", ";
  }

  // member: position_estimate
  {
    out << "position_estimate: ";
    to_flow_style_yaml(msg.position_estimate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BannerDetection & msg,
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

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
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

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }

  // member: u
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u: ";
    rosidl_generator_traits::value_to_yaml(msg.u, out);
    out << "\n";
  }

  // member: v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << "\n";
  }

  // member: quad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.quad.size() == 0) {
      out << "quad: []\n";
    } else {
      out << "quad:\n";
      for (auto item : msg.quad) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: partial
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "partial: ";
    rosidl_generator_traits::value_to_yaml(msg.partial, out);
    out << "\n";
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

  // member: candidates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "candidates: ";
    rosidl_generator_traits::value_to_yaml(msg.candidates, out);
    out << "\n";
  }

  // member: consecutive_hits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "consecutive_hits: ";
    rosidl_generator_traits::value_to_yaml(msg.consecutive_hits, out);
    out << "\n";
  }

  // member: pose_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_valid, out);
    out << "\n";
  }

  // member: alt_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_rel, out);
    out << "\n";
  }

  // member: drone_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_x: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_x, out);
    out << "\n";
  }

  // member: drone_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_y: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_y, out);
    out << "\n";
  }

  // member: drone_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_z: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_z, out);
    out << "\n";
  }

  // member: drone_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_heading, out);
    out << "\n";
  }

  // member: position_estimate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_estimate:\n";
    to_block_style_yaml(msg.position_estimate, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BannerDetection & msg, bool use_flow_style = false)
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
  const mission_interfaces::msg::BannerDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::msg::BannerDetection & msg)
{
  return mission_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::msg::BannerDetection>()
{
  return "mission_interfaces::msg::BannerDetection";
}

template<>
inline const char * name<mission_interfaces::msg::BannerDetection>()
{
  return "mission_interfaces/msg/BannerDetection";
}

template<>
struct has_fixed_size<mission_interfaces::msg::BannerDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::msg::BannerDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::msg::BannerDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MISSION_INTERFACES__MSG__DETAIL__BANNER_DETECTION__TRAITS_HPP_
