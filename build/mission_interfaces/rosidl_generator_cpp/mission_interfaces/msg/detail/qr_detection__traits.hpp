// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_interfaces:msg/QrDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/qr_detection.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__QR_DETECTION__TRAITS_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__QR_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_interfaces/msg/detail/qr_detection__struct.hpp"
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
  const QrDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: detected
  {
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << ", ";
  }

  // member: corners
  {
    if (msg.corners.size() == 0) {
      out << "corners: []";
    } else {
      out << "corners: [";
      size_t pending_items = msg.corners.size();
      for (auto item : msg.corners) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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

  // member: decoded_text
  {
    out << "decoded_text: ";
    rosidl_generator_traits::value_to_yaml(msg.decoded_text, out);
    out << ", ";
  }

  // member: reference_ready
  {
    out << "reference_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_ready, out);
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << ", ";
  }

  // member: matched
  {
    out << "matched: ";
    rosidl_generator_traits::value_to_yaml(msg.matched, out);
    out << ", ";
  }

  // member: match_threshold
  {
    out << "match_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.match_threshold, out);
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
  const QrDetection & msg,
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

  // member: detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << "\n";
  }

  // member: corners
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corners.size() == 0) {
      out << "corners: []\n";
    } else {
      out << "corners:\n";
      for (auto item : msg.corners) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: decoded_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decoded_text: ";
    rosidl_generator_traits::value_to_yaml(msg.decoded_text, out);
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

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << "\n";
  }

  // member: matched
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matched: ";
    rosidl_generator_traits::value_to_yaml(msg.matched, out);
    out << "\n";
  }

  // member: match_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "match_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.match_threshold, out);
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

inline std::string to_yaml(const QrDetection & msg, bool use_flow_style = false)
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
  const mission_interfaces::msg::QrDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::msg::QrDetection & msg)
{
  return mission_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::msg::QrDetection>()
{
  return "mission_interfaces::msg::QrDetection";
}

template<>
inline const char * name<mission_interfaces::msg::QrDetection>()
{
  return "mission_interfaces/msg/QrDetection";
}

template<>
struct has_fixed_size<mission_interfaces::msg::QrDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::msg::QrDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::msg::QrDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MISSION_INTERFACES__MSG__DETAIL__QR_DETECTION__TRAITS_HPP_
