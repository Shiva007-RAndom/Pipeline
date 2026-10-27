// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_interfaces:action/GoTo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/go_to.hpp"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__GO_TO__TRAITS_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__GO_TO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_interfaces/action/detail/go_to__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GoTo_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame
  {
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
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
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: acceptance_radius
  {
    out << "acceptance_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.acceptance_radius, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoTo_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << "\n";
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

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: acceptance_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceptance_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.acceptance_radius, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoTo_Goal & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::GoTo_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::GoTo_Goal & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::GoTo_Goal>()
{
  return "mission_interfaces::action::GoTo_Goal";
}

template<>
inline const char * name<mission_interfaces::action::GoTo_Goal>()
{
  return "mission_interfaces/action/GoTo_Goal";
}

template<>
struct has_fixed_size<mission_interfaces::action::GoTo_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mission_interfaces::action::GoTo_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mission_interfaces::action::GoTo_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'final_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GoTo_Result & msg,
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

  // member: final_position
  {
    out << "final_position: ";
    to_flow_style_yaml(msg.final_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoTo_Result & msg,
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

  // member: final_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_position:\n";
    to_block_style_yaml(msg.final_position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoTo_Result & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::GoTo_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::GoTo_Result & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::GoTo_Result>()
{
  return "mission_interfaces::action::GoTo_Result";
}

template<>
inline const char * name<mission_interfaces::action::GoTo_Result>()
{
  return "mission_interfaces/action/GoTo_Result";
}

template<>
struct has_fixed_size<mission_interfaces::action::GoTo_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::GoTo_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::action::GoTo_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GoTo_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance_remaining
  {
    out << "distance_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_remaining, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoTo_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_remaining, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoTo_Feedback & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::GoTo_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::GoTo_Feedback & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::GoTo_Feedback>()
{
  return "mission_interfaces::action::GoTo_Feedback";
}

template<>
inline const char * name<mission_interfaces::action::GoTo_Feedback>()
{
  return "mission_interfaces/action/GoTo_Feedback";
}

template<>
struct has_fixed_size<mission_interfaces::action::GoTo_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mission_interfaces::action::GoTo_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mission_interfaces::action::GoTo_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "mission_interfaces/action/detail/go_to__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GoTo_SendGoal_Request & msg,
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
  const GoTo_SendGoal_Request & msg,
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

inline std::string to_yaml(const GoTo_SendGoal_Request & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::GoTo_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::GoTo_SendGoal_Request & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::GoTo_SendGoal_Request>()
{
  return "mission_interfaces::action::GoTo_SendGoal_Request";
}

template<>
inline const char * name<mission_interfaces::action::GoTo_SendGoal_Request>()
{
  return "mission_interfaces/action/GoTo_SendGoal_Request";
}

template<>
struct has_fixed_size<mission_interfaces::action::GoTo_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<mission_interfaces::action::GoTo_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::GoTo_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::GoTo_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mission_interfaces::action::GoTo_SendGoal_Request>
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
  const GoTo_SendGoal_Response & msg,
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
  const GoTo_SendGoal_Response & msg,
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

inline std::string to_yaml(const GoTo_SendGoal_Response & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::GoTo_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::GoTo_SendGoal_Response & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::GoTo_SendGoal_Response>()
{
  return "mission_interfaces::action::GoTo_SendGoal_Response";
}

template<>
inline const char * name<mission_interfaces::action::GoTo_SendGoal_Response>()
{
  return "mission_interfaces/action/GoTo_SendGoal_Response";
}

template<>
struct has_fixed_size<mission_interfaces::action::GoTo_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::GoTo_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mission_interfaces::action::GoTo_SendGoal_Response>
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
  const GoTo_SendGoal_Event & msg,
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
  const GoTo_SendGoal_Event & msg,
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

inline std::string to_yaml(const GoTo_SendGoal_Event & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::GoTo_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::GoTo_SendGoal_Event & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::GoTo_SendGoal_Event>()
{
  return "mission_interfaces::action::GoTo_SendGoal_Event";
}

template<>
inline const char * name<mission_interfaces::action::GoTo_SendGoal_Event>()
{
  return "mission_interfaces/action/GoTo_SendGoal_Event";
}

template<>
struct has_fixed_size<mission_interfaces::action::GoTo_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::GoTo_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::GoTo_SendGoal_Request>::value && has_bounded_size<mission_interfaces::action::GoTo_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mission_interfaces::action::GoTo_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mission_interfaces::action::GoTo_SendGoal>()
{
  return "mission_interfaces::action::GoTo_SendGoal";
}

template<>
inline const char * name<mission_interfaces::action::GoTo_SendGoal>()
{
  return "mission_interfaces/action/GoTo_SendGoal";
}

template<>
struct has_fixed_size<mission_interfaces::action::GoTo_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<mission_interfaces::action::GoTo_SendGoal_Request>::value &&
    has_fixed_size<mission_interfaces::action::GoTo_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<mission_interfaces::action::GoTo_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<mission_interfaces::action::GoTo_SendGoal_Request>::value &&
    has_bounded_size<mission_interfaces::action::GoTo_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<mission_interfaces::action::GoTo_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<mission_interfaces::action::GoTo_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mission_interfaces::action::GoTo_SendGoal_Response>
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
  const GoTo_GetResult_Request & msg,
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
  const GoTo_GetResult_Request & msg,
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

inline std::string to_yaml(const GoTo_GetResult_Request & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::GoTo_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::GoTo_GetResult_Request & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::GoTo_GetResult_Request>()
{
  return "mission_interfaces::action::GoTo_GetResult_Request";
}

template<>
inline const char * name<mission_interfaces::action::GoTo_GetResult_Request>()
{
  return "mission_interfaces/action/GoTo_GetResult_Request";
}

template<>
struct has_fixed_size<mission_interfaces::action::GoTo_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::GoTo_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mission_interfaces::action::GoTo_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/go_to__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GoTo_GetResult_Response & msg,
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
  const GoTo_GetResult_Response & msg,
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

inline std::string to_yaml(const GoTo_GetResult_Response & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::GoTo_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::GoTo_GetResult_Response & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::GoTo_GetResult_Response>()
{
  return "mission_interfaces::action::GoTo_GetResult_Response";
}

template<>
inline const char * name<mission_interfaces::action::GoTo_GetResult_Response>()
{
  return "mission_interfaces/action/GoTo_GetResult_Response";
}

template<>
struct has_fixed_size<mission_interfaces::action::GoTo_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<mission_interfaces::action::GoTo_Result>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::GoTo_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::GoTo_Result>::value> {};

template<>
struct is_message<mission_interfaces::action::GoTo_GetResult_Response>
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
  const GoTo_GetResult_Event & msg,
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
  const GoTo_GetResult_Event & msg,
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

inline std::string to_yaml(const GoTo_GetResult_Event & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::GoTo_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::GoTo_GetResult_Event & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::GoTo_GetResult_Event>()
{
  return "mission_interfaces::action::GoTo_GetResult_Event";
}

template<>
inline const char * name<mission_interfaces::action::GoTo_GetResult_Event>()
{
  return "mission_interfaces/action/GoTo_GetResult_Event";
}

template<>
struct has_fixed_size<mission_interfaces::action::GoTo_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::GoTo_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::GoTo_GetResult_Request>::value && has_bounded_size<mission_interfaces::action::GoTo_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mission_interfaces::action::GoTo_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mission_interfaces::action::GoTo_GetResult>()
{
  return "mission_interfaces::action::GoTo_GetResult";
}

template<>
inline const char * name<mission_interfaces::action::GoTo_GetResult>()
{
  return "mission_interfaces/action/GoTo_GetResult";
}

template<>
struct has_fixed_size<mission_interfaces::action::GoTo_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<mission_interfaces::action::GoTo_GetResult_Request>::value &&
    has_fixed_size<mission_interfaces::action::GoTo_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<mission_interfaces::action::GoTo_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<mission_interfaces::action::GoTo_GetResult_Request>::value &&
    has_bounded_size<mission_interfaces::action::GoTo_GetResult_Response>::value
  >
{
};

template<>
struct is_service<mission_interfaces::action::GoTo_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<mission_interfaces::action::GoTo_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mission_interfaces::action::GoTo_GetResult_Response>
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
// #include "mission_interfaces/action/detail/go_to__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GoTo_FeedbackMessage & msg,
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
  const GoTo_FeedbackMessage & msg,
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

inline std::string to_yaml(const GoTo_FeedbackMessage & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::GoTo_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::GoTo_FeedbackMessage & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::GoTo_FeedbackMessage>()
{
  return "mission_interfaces::action::GoTo_FeedbackMessage";
}

template<>
inline const char * name<mission_interfaces::action::GoTo_FeedbackMessage>()
{
  return "mission_interfaces/action/GoTo_FeedbackMessage";
}

template<>
struct has_fixed_size<mission_interfaces::action::GoTo_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<mission_interfaces::action::GoTo_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::GoTo_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::GoTo_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mission_interfaces::action::GoTo_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<mission_interfaces::action::GoTo>
  : std::true_type
{
};

template<>
struct is_action_goal<mission_interfaces::action::GoTo_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<mission_interfaces::action::GoTo_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<mission_interfaces::action::GoTo_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MISSION_INTERFACES__ACTION__DETAIL__GO_TO__TRAITS_HPP_
