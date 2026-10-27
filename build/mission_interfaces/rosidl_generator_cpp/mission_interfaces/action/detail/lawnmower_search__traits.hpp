// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_interfaces:action/LawnmowerSearch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/lawnmower_search.hpp"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__LAWNMOWER_SEARCH__TRAITS_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__LAWNMOWER_SEARCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LawnmowerSearch_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    to_flow_style_yaml(msg.start, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: row_step
  {
    out << "row_step: ";
    rosidl_generator_traits::value_to_yaml(msg.row_step, out);
    out << ", ";
  }

  // member: rows
  {
    out << "rows: ";
    rosidl_generator_traits::value_to_yaml(msg.rows, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: waypoint_tolerance
  {
    out << "waypoint_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_tolerance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LawnmowerSearch_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start:\n";
    to_block_style_yaml(msg.start, out, indentation + 2);
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: row_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "row_step: ";
    rosidl_generator_traits::value_to_yaml(msg.row_step, out);
    out << "\n";
  }

  // member: rows
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rows: ";
    rosidl_generator_traits::value_to_yaml(msg.rows, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: waypoint_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_tolerance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LawnmowerSearch_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::LawnmowerSearch_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::LawnmowerSearch_Goal & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::LawnmowerSearch_Goal>()
{
  return "mission_interfaces::action::LawnmowerSearch_Goal";
}

template<>
inline const char * name<mission_interfaces::action::LawnmowerSearch_Goal>()
{
  return "mission_interfaces/action/LawnmowerSearch_Goal";
}

template<>
struct has_fixed_size<mission_interfaces::action::LawnmowerSearch_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::LawnmowerSearch_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<mission_interfaces::action::LawnmowerSearch_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'target'
// already included above
// #include "geometry_msgs/msg/detail/point__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LawnmowerSearch_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
    out << ", ";
  }

  // member: decoded_text
  {
    out << "decoded_text: ";
    rosidl_generator_traits::value_to_yaml(msg.decoded_text, out);
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LawnmowerSearch_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
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

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LawnmowerSearch_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::LawnmowerSearch_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::LawnmowerSearch_Result & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::LawnmowerSearch_Result>()
{
  return "mission_interfaces::action::LawnmowerSearch_Result";
}

template<>
inline const char * name<mission_interfaces::action::LawnmowerSearch_Result>()
{
  return "mission_interfaces/action/LawnmowerSearch_Result";
}

template<>
struct has_fixed_size<mission_interfaces::action::LawnmowerSearch_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::LawnmowerSearch_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::action::LawnmowerSearch_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LawnmowerSearch_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoint
  {
    out << "waypoint: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LawnmowerSearch_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LawnmowerSearch_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::LawnmowerSearch_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::LawnmowerSearch_Feedback & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::LawnmowerSearch_Feedback>()
{
  return "mission_interfaces::action::LawnmowerSearch_Feedback";
}

template<>
inline const char * name<mission_interfaces::action::LawnmowerSearch_Feedback>()
{
  return "mission_interfaces/action/LawnmowerSearch_Feedback";
}

template<>
struct has_fixed_size<mission_interfaces::action::LawnmowerSearch_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::LawnmowerSearch_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::action::LawnmowerSearch_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "mission_interfaces/action/detail/lawnmower_search__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LawnmowerSearch_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LawnmowerSearch_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LawnmowerSearch_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::LawnmowerSearch_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::LawnmowerSearch_SendGoal_Request & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::LawnmowerSearch_SendGoal_Request>()
{
  return "mission_interfaces::action::LawnmowerSearch_SendGoal_Request";
}

template<>
inline const char * name<mission_interfaces::action::LawnmowerSearch_SendGoal_Request>()
{
  return "mission_interfaces/action/LawnmowerSearch_SendGoal_Request";
}

template<>
struct has_fixed_size<mission_interfaces::action::LawnmowerSearch_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<mission_interfaces::action::LawnmowerSearch_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::LawnmowerSearch_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::LawnmowerSearch_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mission_interfaces::action::LawnmowerSearch_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LawnmowerSearch_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LawnmowerSearch_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LawnmowerSearch_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::LawnmowerSearch_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::LawnmowerSearch_SendGoal_Response & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::LawnmowerSearch_SendGoal_Response>()
{
  return "mission_interfaces::action::LawnmowerSearch_SendGoal_Response";
}

template<>
inline const char * name<mission_interfaces::action::LawnmowerSearch_SendGoal_Response>()
{
  return "mission_interfaces/action/LawnmowerSearch_SendGoal_Response";
}

template<>
struct has_fixed_size<mission_interfaces::action::LawnmowerSearch_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::LawnmowerSearch_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mission_interfaces::action::LawnmowerSearch_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LawnmowerSearch_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const LawnmowerSearch_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LawnmowerSearch_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::LawnmowerSearch_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::LawnmowerSearch_SendGoal_Event & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::LawnmowerSearch_SendGoal_Event>()
{
  return "mission_interfaces::action::LawnmowerSearch_SendGoal_Event";
}

template<>
inline const char * name<mission_interfaces::action::LawnmowerSearch_SendGoal_Event>()
{
  return "mission_interfaces/action/LawnmowerSearch_SendGoal_Event";
}

template<>
struct has_fixed_size<mission_interfaces::action::LawnmowerSearch_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::LawnmowerSearch_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::LawnmowerSearch_SendGoal_Request>::value && has_bounded_size<mission_interfaces::action::LawnmowerSearch_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mission_interfaces::action::LawnmowerSearch_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mission_interfaces::action::LawnmowerSearch_SendGoal>()
{
  return "mission_interfaces::action::LawnmowerSearch_SendGoal";
}

template<>
inline const char * name<mission_interfaces::action::LawnmowerSearch_SendGoal>()
{
  return "mission_interfaces/action/LawnmowerSearch_SendGoal";
}

template<>
struct has_fixed_size<mission_interfaces::action::LawnmowerSearch_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<mission_interfaces::action::LawnmowerSearch_SendGoal_Request>::value &&
    has_fixed_size<mission_interfaces::action::LawnmowerSearch_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<mission_interfaces::action::LawnmowerSearch_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<mission_interfaces::action::LawnmowerSearch_SendGoal_Request>::value &&
    has_bounded_size<mission_interfaces::action::LawnmowerSearch_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<mission_interfaces::action::LawnmowerSearch_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<mission_interfaces::action::LawnmowerSearch_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mission_interfaces::action::LawnmowerSearch_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LawnmowerSearch_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LawnmowerSearch_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LawnmowerSearch_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::LawnmowerSearch_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::LawnmowerSearch_GetResult_Request & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::LawnmowerSearch_GetResult_Request>()
{
  return "mission_interfaces::action::LawnmowerSearch_GetResult_Request";
}

template<>
inline const char * name<mission_interfaces::action::LawnmowerSearch_GetResult_Request>()
{
  return "mission_interfaces/action/LawnmowerSearch_GetResult_Request";
}

template<>
struct has_fixed_size<mission_interfaces::action::LawnmowerSearch_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::LawnmowerSearch_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mission_interfaces::action::LawnmowerSearch_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LawnmowerSearch_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LawnmowerSearch_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LawnmowerSearch_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::LawnmowerSearch_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::LawnmowerSearch_GetResult_Response & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::LawnmowerSearch_GetResult_Response>()
{
  return "mission_interfaces::action::LawnmowerSearch_GetResult_Response";
}

template<>
inline const char * name<mission_interfaces::action::LawnmowerSearch_GetResult_Response>()
{
  return "mission_interfaces/action/LawnmowerSearch_GetResult_Response";
}

template<>
struct has_fixed_size<mission_interfaces::action::LawnmowerSearch_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<mission_interfaces::action::LawnmowerSearch_Result>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::LawnmowerSearch_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::LawnmowerSearch_Result>::value> {};

template<>
struct is_message<mission_interfaces::action::LawnmowerSearch_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LawnmowerSearch_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const LawnmowerSearch_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LawnmowerSearch_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::LawnmowerSearch_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::LawnmowerSearch_GetResult_Event & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::LawnmowerSearch_GetResult_Event>()
{
  return "mission_interfaces::action::LawnmowerSearch_GetResult_Event";
}

template<>
inline const char * name<mission_interfaces::action::LawnmowerSearch_GetResult_Event>()
{
  return "mission_interfaces/action/LawnmowerSearch_GetResult_Event";
}

template<>
struct has_fixed_size<mission_interfaces::action::LawnmowerSearch_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::LawnmowerSearch_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::LawnmowerSearch_GetResult_Request>::value && has_bounded_size<mission_interfaces::action::LawnmowerSearch_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mission_interfaces::action::LawnmowerSearch_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mission_interfaces::action::LawnmowerSearch_GetResult>()
{
  return "mission_interfaces::action::LawnmowerSearch_GetResult";
}

template<>
inline const char * name<mission_interfaces::action::LawnmowerSearch_GetResult>()
{
  return "mission_interfaces/action/LawnmowerSearch_GetResult";
}

template<>
struct has_fixed_size<mission_interfaces::action::LawnmowerSearch_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<mission_interfaces::action::LawnmowerSearch_GetResult_Request>::value &&
    has_fixed_size<mission_interfaces::action::LawnmowerSearch_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<mission_interfaces::action::LawnmowerSearch_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<mission_interfaces::action::LawnmowerSearch_GetResult_Request>::value &&
    has_bounded_size<mission_interfaces::action::LawnmowerSearch_GetResult_Response>::value
  >
{
};

template<>
struct is_service<mission_interfaces::action::LawnmowerSearch_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<mission_interfaces::action::LawnmowerSearch_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mission_interfaces::action::LawnmowerSearch_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LawnmowerSearch_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LawnmowerSearch_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LawnmowerSearch_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::LawnmowerSearch_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::LawnmowerSearch_FeedbackMessage & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::LawnmowerSearch_FeedbackMessage>()
{
  return "mission_interfaces::action::LawnmowerSearch_FeedbackMessage";
}

template<>
inline const char * name<mission_interfaces::action::LawnmowerSearch_FeedbackMessage>()
{
  return "mission_interfaces/action/LawnmowerSearch_FeedbackMessage";
}

template<>
struct has_fixed_size<mission_interfaces::action::LawnmowerSearch_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<mission_interfaces::action::LawnmowerSearch_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::LawnmowerSearch_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::LawnmowerSearch_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mission_interfaces::action::LawnmowerSearch_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<mission_interfaces::action::LawnmowerSearch>
  : std::true_type
{
};

template<>
struct is_action_goal<mission_interfaces::action::LawnmowerSearch_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<mission_interfaces::action::LawnmowerSearch_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<mission_interfaces::action::LawnmowerSearch_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MISSION_INTERFACES__ACTION__DETAIL__LAWNMOWER_SEARCH__TRAITS_HPP_
