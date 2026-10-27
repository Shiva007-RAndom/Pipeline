// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_interfaces:msg/RedMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/red_map.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__RED_MAP__TRAITS_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__RED_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_interfaces/msg/detail/red_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mission_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RedMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: origin_north
  {
    out << "origin_north: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_north, out);
    out << ", ";
  }

  // member: origin_east
  {
    out << "origin_east: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_east, out);
    out << ", ";
  }

  // member: axis_heading
  {
    out << "axis_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_heading, out);
    out << ", ";
  }

  // member: cell
  {
    out << "cell: ";
    rosidl_generator_traits::value_to_yaml(msg.cell, out);
    out << ", ";
  }

  // member: grid_x0
  {
    out << "grid_x0: ";
    rosidl_generator_traits::value_to_yaml(msg.grid_x0, out);
    out << ", ";
  }

  // member: grid_y0
  {
    out << "grid_y0: ";
    rosidl_generator_traits::value_to_yaml(msg.grid_y0, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: margin
  {
    out << "margin: ";
    rosidl_generator_traits::value_to_yaml(msg.margin, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RedMap & msg,
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

  // member: origin_north
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_north: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_north, out);
    out << "\n";
  }

  // member: origin_east
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_east: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_east, out);
    out << "\n";
  }

  // member: axis_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_heading, out);
    out << "\n";
  }

  // member: cell
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell: ";
    rosidl_generator_traits::value_to_yaml(msg.cell, out);
    out << "\n";
  }

  // member: grid_x0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grid_x0: ";
    rosidl_generator_traits::value_to_yaml(msg.grid_x0, out);
    out << "\n";
  }

  // member: grid_y0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grid_y0: ";
    rosidl_generator_traits::value_to_yaml(msg.grid_y0, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
  }

  // member: margin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "margin: ";
    rosidl_generator_traits::value_to_yaml(msg.margin, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RedMap & msg, bool use_flow_style = false)
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
  const mission_interfaces::msg::RedMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::msg::RedMap & msg)
{
  return mission_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::msg::RedMap>()
{
  return "mission_interfaces::msg::RedMap";
}

template<>
inline const char * name<mission_interfaces::msg::RedMap>()
{
  return "mission_interfaces/msg/RedMap";
}

template<>
struct has_fixed_size<mission_interfaces::msg::RedMap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::msg::RedMap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::msg::RedMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MISSION_INTERFACES__MSG__DETAIL__RED_MAP__TRAITS_HPP_
