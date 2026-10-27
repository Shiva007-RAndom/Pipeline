// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_interfaces:msg/RedPatch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/red_patch.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__RED_PATCH__TRAITS_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__RED_PATCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_interfaces/msg/detail/red_patch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'contour'
#include "geometry_msgs/msg/detail/point32__traits.hpp"

namespace mission_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RedPatch & msg,
  std::ostream & out)
{
  out << "{";
  // member: centroid_x
  {
    out << "centroid_x: ";
    rosidl_generator_traits::value_to_yaml(msg.centroid_x, out);
    out << ", ";
  }

  // member: centroid_y
  {
    out << "centroid_y: ";
    rosidl_generator_traits::value_to_yaml(msg.centroid_y, out);
    out << ", ";
  }

  // member: offset_x
  {
    out << "offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_x, out);
    out << ", ";
  }

  // member: offset_y
  {
    out << "offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_y, out);
    out << ", ";
  }

  // member: area_px
  {
    out << "area_px: ";
    rosidl_generator_traits::value_to_yaml(msg.area_px, out);
    out << ", ";
  }

  // member: area_fraction
  {
    out << "area_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.area_fraction, out);
    out << ", ";
  }

  // member: bbox_xywh
  {
    if (msg.bbox_xywh.size() == 0) {
      out << "bbox_xywh: []";
    } else {
      out << "bbox_xywh: [";
      size_t pending_items = msg.bbox_xywh.size();
      for (auto item : msg.bbox_xywh) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: contour
  {
    if (msg.contour.size() == 0) {
      out << "contour: []";
    } else {
      out << "contour: [";
      size_t pending_items = msg.contour.size();
      for (auto item : msg.contour) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RedPatch & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: centroid_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centroid_x: ";
    rosidl_generator_traits::value_to_yaml(msg.centroid_x, out);
    out << "\n";
  }

  // member: centroid_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centroid_y: ";
    rosidl_generator_traits::value_to_yaml(msg.centroid_y, out);
    out << "\n";
  }

  // member: offset_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_x, out);
    out << "\n";
  }

  // member: offset_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_y, out);
    out << "\n";
  }

  // member: area_px
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_px: ";
    rosidl_generator_traits::value_to_yaml(msg.area_px, out);
    out << "\n";
  }

  // member: area_fraction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.area_fraction, out);
    out << "\n";
  }

  // member: bbox_xywh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bbox_xywh.size() == 0) {
      out << "bbox_xywh: []\n";
    } else {
      out << "bbox_xywh:\n";
      for (auto item : msg.bbox_xywh) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: contour
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.contour.size() == 0) {
      out << "contour: []\n";
    } else {
      out << "contour:\n";
      for (auto item : msg.contour) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RedPatch & msg, bool use_flow_style = false)
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
  const mission_interfaces::msg::RedPatch & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::msg::RedPatch & msg)
{
  return mission_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::msg::RedPatch>()
{
  return "mission_interfaces::msg::RedPatch";
}

template<>
inline const char * name<mission_interfaces::msg::RedPatch>()
{
  return "mission_interfaces/msg/RedPatch";
}

template<>
struct has_fixed_size<mission_interfaces::msg::RedPatch>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::msg::RedPatch>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::msg::RedPatch>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MISSION_INTERFACES__MSG__DETAIL__RED_PATCH__TRAITS_HPP_
