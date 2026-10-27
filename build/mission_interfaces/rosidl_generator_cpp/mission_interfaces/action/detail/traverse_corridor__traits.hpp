// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_interfaces:action/TraverseCorridor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/traverse_corridor.hpp"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__TRAVERSE_CORRIDOR__TRAITS_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__TRAVERSE_CORRIDOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_interfaces/action/detail/traverse_corridor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'entry'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const TraverseCorridor_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: entry
  {
    out << "entry: ";
    to_flow_style_yaml(msg.entry, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: altitude_z
  {
    out << "altitude_z: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_z, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: settle_time
  {
    out << "settle_time: ";
    rosidl_generator_traits::value_to_yaml(msg.settle_time, out);
    out << ", ";
  }

  // member: exit_altitude_z
  {
    out << "exit_altitude_z: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_altitude_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TraverseCorridor_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: entry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "entry:\n";
    to_block_style_yaml(msg.entry, out, indentation + 2);
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

  // member: altitude_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_z: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_z, out);
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

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: settle_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "settle_time: ";
    rosidl_generator_traits::value_to_yaml(msg.settle_time, out);
    out << "\n";
  }

  // member: exit_altitude_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exit_altitude_z: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_altitude_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TraverseCorridor_Goal & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::TraverseCorridor_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::TraverseCorridor_Goal & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::TraverseCorridor_Goal>()
{
  return "mission_interfaces::action::TraverseCorridor_Goal";
}

template<>
inline const char * name<mission_interfaces::action::TraverseCorridor_Goal>()
{
  return "mission_interfaces/action/TraverseCorridor_Goal";
}

template<>
struct has_fixed_size<mission_interfaces::action::TraverseCorridor_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::TraverseCorridor_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<mission_interfaces::action::TraverseCorridor_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'exit_position'
// already included above
// #include "geometry_msgs/msg/detail/point__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const TraverseCorridor_Result & msg,
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

  // member: exit_position
  {
    out << "exit_position: ";
    to_flow_style_yaml(msg.exit_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TraverseCorridor_Result & msg,
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

  // member: exit_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exit_position:\n";
    to_block_style_yaml(msg.exit_position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TraverseCorridor_Result & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::TraverseCorridor_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::TraverseCorridor_Result & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::TraverseCorridor_Result>()
{
  return "mission_interfaces::action::TraverseCorridor_Result";
}

template<>
inline const char * name<mission_interfaces::action::TraverseCorridor_Result>()
{
  return "mission_interfaces/action/TraverseCorridor_Result";
}

template<>
struct has_fixed_size<mission_interfaces::action::TraverseCorridor_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::TraverseCorridor_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::action::TraverseCorridor_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const TraverseCorridor_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TraverseCorridor_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const TraverseCorridor_Feedback & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::TraverseCorridor_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::TraverseCorridor_Feedback & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::TraverseCorridor_Feedback>()
{
  return "mission_interfaces::action::TraverseCorridor_Feedback";
}

template<>
inline const char * name<mission_interfaces::action::TraverseCorridor_Feedback>()
{
  return "mission_interfaces/action/TraverseCorridor_Feedback";
}

template<>
struct has_fixed_size<mission_interfaces::action::TraverseCorridor_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::TraverseCorridor_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::action::TraverseCorridor_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "mission_interfaces/action/detail/traverse_corridor__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const TraverseCorridor_SendGoal_Request & msg,
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
  const TraverseCorridor_SendGoal_Request & msg,
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

inline std::string to_yaml(const TraverseCorridor_SendGoal_Request & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::TraverseCorridor_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::TraverseCorridor_SendGoal_Request & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::TraverseCorridor_SendGoal_Request>()
{
  return "mission_interfaces::action::TraverseCorridor_SendGoal_Request";
}

template<>
inline const char * name<mission_interfaces::action::TraverseCorridor_SendGoal_Request>()
{
  return "mission_interfaces/action/TraverseCorridor_SendGoal_Request";
}

template<>
struct has_fixed_size<mission_interfaces::action::TraverseCorridor_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<mission_interfaces::action::TraverseCorridor_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::TraverseCorridor_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::TraverseCorridor_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mission_interfaces::action::TraverseCorridor_SendGoal_Request>
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
  const TraverseCorridor_SendGoal_Response & msg,
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
  const TraverseCorridor_SendGoal_Response & msg,
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

inline std::string to_yaml(const TraverseCorridor_SendGoal_Response & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::TraverseCorridor_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::TraverseCorridor_SendGoal_Response & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::TraverseCorridor_SendGoal_Response>()
{
  return "mission_interfaces::action::TraverseCorridor_SendGoal_Response";
}

template<>
inline const char * name<mission_interfaces::action::TraverseCorridor_SendGoal_Response>()
{
  return "mission_interfaces/action/TraverseCorridor_SendGoal_Response";
}

template<>
struct has_fixed_size<mission_interfaces::action::TraverseCorridor_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::TraverseCorridor_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mission_interfaces::action::TraverseCorridor_SendGoal_Response>
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
  const TraverseCorridor_SendGoal_Event & msg,
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
  const TraverseCorridor_SendGoal_Event & msg,
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

inline std::string to_yaml(const TraverseCorridor_SendGoal_Event & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::TraverseCorridor_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::TraverseCorridor_SendGoal_Event & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::TraverseCorridor_SendGoal_Event>()
{
  return "mission_interfaces::action::TraverseCorridor_SendGoal_Event";
}

template<>
inline const char * name<mission_interfaces::action::TraverseCorridor_SendGoal_Event>()
{
  return "mission_interfaces/action/TraverseCorridor_SendGoal_Event";
}

template<>
struct has_fixed_size<mission_interfaces::action::TraverseCorridor_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::TraverseCorridor_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::TraverseCorridor_SendGoal_Request>::value && has_bounded_size<mission_interfaces::action::TraverseCorridor_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mission_interfaces::action::TraverseCorridor_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mission_interfaces::action::TraverseCorridor_SendGoal>()
{
  return "mission_interfaces::action::TraverseCorridor_SendGoal";
}

template<>
inline const char * name<mission_interfaces::action::TraverseCorridor_SendGoal>()
{
  return "mission_interfaces/action/TraverseCorridor_SendGoal";
}

template<>
struct has_fixed_size<mission_interfaces::action::TraverseCorridor_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<mission_interfaces::action::TraverseCorridor_SendGoal_Request>::value &&
    has_fixed_size<mission_interfaces::action::TraverseCorridor_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<mission_interfaces::action::TraverseCorridor_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<mission_interfaces::action::TraverseCorridor_SendGoal_Request>::value &&
    has_bounded_size<mission_interfaces::action::TraverseCorridor_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<mission_interfaces::action::TraverseCorridor_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<mission_interfaces::action::TraverseCorridor_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mission_interfaces::action::TraverseCorridor_SendGoal_Response>
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
  const TraverseCorridor_GetResult_Request & msg,
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
  const TraverseCorridor_GetResult_Request & msg,
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

inline std::string to_yaml(const TraverseCorridor_GetResult_Request & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::TraverseCorridor_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::TraverseCorridor_GetResult_Request & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::TraverseCorridor_GetResult_Request>()
{
  return "mission_interfaces::action::TraverseCorridor_GetResult_Request";
}

template<>
inline const char * name<mission_interfaces::action::TraverseCorridor_GetResult_Request>()
{
  return "mission_interfaces/action/TraverseCorridor_GetResult_Request";
}

template<>
struct has_fixed_size<mission_interfaces::action::TraverseCorridor_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::TraverseCorridor_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mission_interfaces::action::TraverseCorridor_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const TraverseCorridor_GetResult_Response & msg,
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
  const TraverseCorridor_GetResult_Response & msg,
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

inline std::string to_yaml(const TraverseCorridor_GetResult_Response & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::TraverseCorridor_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::TraverseCorridor_GetResult_Response & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::TraverseCorridor_GetResult_Response>()
{
  return "mission_interfaces::action::TraverseCorridor_GetResult_Response";
}

template<>
inline const char * name<mission_interfaces::action::TraverseCorridor_GetResult_Response>()
{
  return "mission_interfaces/action/TraverseCorridor_GetResult_Response";
}

template<>
struct has_fixed_size<mission_interfaces::action::TraverseCorridor_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<mission_interfaces::action::TraverseCorridor_Result>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::TraverseCorridor_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::TraverseCorridor_Result>::value> {};

template<>
struct is_message<mission_interfaces::action::TraverseCorridor_GetResult_Response>
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
  const TraverseCorridor_GetResult_Event & msg,
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
  const TraverseCorridor_GetResult_Event & msg,
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

inline std::string to_yaml(const TraverseCorridor_GetResult_Event & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::TraverseCorridor_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::TraverseCorridor_GetResult_Event & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::TraverseCorridor_GetResult_Event>()
{
  return "mission_interfaces::action::TraverseCorridor_GetResult_Event";
}

template<>
inline const char * name<mission_interfaces::action::TraverseCorridor_GetResult_Event>()
{
  return "mission_interfaces/action/TraverseCorridor_GetResult_Event";
}

template<>
struct has_fixed_size<mission_interfaces::action::TraverseCorridor_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::TraverseCorridor_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::TraverseCorridor_GetResult_Request>::value && has_bounded_size<mission_interfaces::action::TraverseCorridor_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mission_interfaces::action::TraverseCorridor_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mission_interfaces::action::TraverseCorridor_GetResult>()
{
  return "mission_interfaces::action::TraverseCorridor_GetResult";
}

template<>
inline const char * name<mission_interfaces::action::TraverseCorridor_GetResult>()
{
  return "mission_interfaces/action/TraverseCorridor_GetResult";
}

template<>
struct has_fixed_size<mission_interfaces::action::TraverseCorridor_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<mission_interfaces::action::TraverseCorridor_GetResult_Request>::value &&
    has_fixed_size<mission_interfaces::action::TraverseCorridor_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<mission_interfaces::action::TraverseCorridor_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<mission_interfaces::action::TraverseCorridor_GetResult_Request>::value &&
    has_bounded_size<mission_interfaces::action::TraverseCorridor_GetResult_Response>::value
  >
{
};

template<>
struct is_service<mission_interfaces::action::TraverseCorridor_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<mission_interfaces::action::TraverseCorridor_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mission_interfaces::action::TraverseCorridor_GetResult_Response>
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
// #include "mission_interfaces/action/detail/traverse_corridor__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const TraverseCorridor_FeedbackMessage & msg,
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
  const TraverseCorridor_FeedbackMessage & msg,
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

inline std::string to_yaml(const TraverseCorridor_FeedbackMessage & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::TraverseCorridor_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::TraverseCorridor_FeedbackMessage & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::TraverseCorridor_FeedbackMessage>()
{
  return "mission_interfaces::action::TraverseCorridor_FeedbackMessage";
}

template<>
inline const char * name<mission_interfaces::action::TraverseCorridor_FeedbackMessage>()
{
  return "mission_interfaces/action/TraverseCorridor_FeedbackMessage";
}

template<>
struct has_fixed_size<mission_interfaces::action::TraverseCorridor_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<mission_interfaces::action::TraverseCorridor_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::TraverseCorridor_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::TraverseCorridor_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mission_interfaces::action::TraverseCorridor_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<mission_interfaces::action::TraverseCorridor>
  : std::true_type
{
};

template<>
struct is_action_goal<mission_interfaces::action::TraverseCorridor_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<mission_interfaces::action::TraverseCorridor_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<mission_interfaces::action::TraverseCorridor_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MISSION_INTERFACES__ACTION__DETAIL__TRAVERSE_CORRIDOR__TRAITS_HPP_
