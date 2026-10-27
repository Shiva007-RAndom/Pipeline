// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_interfaces:action/AlignBanner.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/align_banner.hpp"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__ALIGN_BANNER__TRAITS_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__ALIGN_BANNER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_interfaces/action/detail/align_banner__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'initial_target'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const AlignBanner_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: initial_target
  {
    out << "initial_target: ";
    to_flow_style_yaml(msg.initial_target, out);
    out << ", ";
  }

  // member: expected_heading
  {
    out << "expected_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_heading, out);
    out << ", ";
  }

  // member: max_heading_correction
  {
    out << "max_heading_correction: ";
    rosidl_generator_traits::value_to_yaml(msg.max_heading_correction, out);
    out << ", ";
  }

  // member: max_iters
  {
    out << "max_iters: ";
    rosidl_generator_traits::value_to_yaml(msg.max_iters, out);
    out << ", ";
  }

  // member: tol_px
  {
    out << "tol_px: ";
    rosidl_generator_traits::value_to_yaml(msg.tol_px, out);
    out << ", ";
  }

  // member: gain
  {
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
    out << ", ";
  }

  // member: settle_time
  {
    out << "settle_time: ";
    rosidl_generator_traits::value_to_yaml(msg.settle_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AlignBanner_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: initial_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_target:\n";
    to_block_style_yaml(msg.initial_target, out, indentation + 2);
  }

  // member: expected_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expected_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_heading, out);
    out << "\n";
  }

  // member: max_heading_correction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_heading_correction: ";
    rosidl_generator_traits::value_to_yaml(msg.max_heading_correction, out);
    out << "\n";
  }

  // member: max_iters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_iters: ";
    rosidl_generator_traits::value_to_yaml(msg.max_iters, out);
    out << "\n";
  }

  // member: tol_px
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tol_px: ";
    rosidl_generator_traits::value_to_yaml(msg.tol_px, out);
    out << "\n";
  }

  // member: gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AlignBanner_Goal & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::AlignBanner_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::AlignBanner_Goal & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::AlignBanner_Goal>()
{
  return "mission_interfaces::action::AlignBanner_Goal";
}

template<>
inline const char * name<mission_interfaces::action::AlignBanner_Goal>()
{
  return "mission_interfaces/action/AlignBanner_Goal";
}

template<>
struct has_fixed_size<mission_interfaces::action::AlignBanner_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::AlignBanner_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::action::AlignBanner_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'banner_position'
// already included above
// #include "geometry_msgs/msg/detail/point__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const AlignBanner_Result & msg,
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

  // member: locked
  {
    out << "locked: ";
    rosidl_generator_traits::value_to_yaml(msg.locked, out);
    out << ", ";
  }

  // member: heading_measured
  {
    out << "heading_measured: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_measured, out);
    out << ", ";
  }

  // member: corridor_heading
  {
    out << "corridor_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.corridor_heading, out);
    out << ", ";
  }

  // member: banner_position
  {
    out << "banner_position: ";
    to_flow_style_yaml(msg.banner_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AlignBanner_Result & msg,
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

  // member: locked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "locked: ";
    rosidl_generator_traits::value_to_yaml(msg.locked, out);
    out << "\n";
  }

  // member: heading_measured
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_measured: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_measured, out);
    out << "\n";
  }

  // member: corridor_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "corridor_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.corridor_heading, out);
    out << "\n";
  }

  // member: banner_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "banner_position:\n";
    to_block_style_yaml(msg.banner_position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AlignBanner_Result & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::AlignBanner_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::AlignBanner_Result & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::AlignBanner_Result>()
{
  return "mission_interfaces::action::AlignBanner_Result";
}

template<>
inline const char * name<mission_interfaces::action::AlignBanner_Result>()
{
  return "mission_interfaces/action/AlignBanner_Result";
}

template<>
struct has_fixed_size<mission_interfaces::action::AlignBanner_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::AlignBanner_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::action::AlignBanner_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const AlignBanner_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: iteration
  {
    out << "iteration: ";
    rosidl_generator_traits::value_to_yaml(msg.iteration, out);
    out << ", ";
  }

  // member: error_px
  {
    out << "error_px: ";
    rosidl_generator_traits::value_to_yaml(msg.error_px, out);
    out << ", ";
  }

  // member: partial
  {
    out << "partial: ";
    rosidl_generator_traits::value_to_yaml(msg.partial, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AlignBanner_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: iteration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iteration: ";
    rosidl_generator_traits::value_to_yaml(msg.iteration, out);
    out << "\n";
  }

  // member: error_px
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_px: ";
    rosidl_generator_traits::value_to_yaml(msg.error_px, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AlignBanner_Feedback & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::AlignBanner_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::AlignBanner_Feedback & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::AlignBanner_Feedback>()
{
  return "mission_interfaces::action::AlignBanner_Feedback";
}

template<>
inline const char * name<mission_interfaces::action::AlignBanner_Feedback>()
{
  return "mission_interfaces/action/AlignBanner_Feedback";
}

template<>
struct has_fixed_size<mission_interfaces::action::AlignBanner_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mission_interfaces::action::AlignBanner_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mission_interfaces::action::AlignBanner_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "mission_interfaces/action/detail/align_banner__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const AlignBanner_SendGoal_Request & msg,
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
  const AlignBanner_SendGoal_Request & msg,
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

inline std::string to_yaml(const AlignBanner_SendGoal_Request & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::AlignBanner_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::AlignBanner_SendGoal_Request & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::AlignBanner_SendGoal_Request>()
{
  return "mission_interfaces::action::AlignBanner_SendGoal_Request";
}

template<>
inline const char * name<mission_interfaces::action::AlignBanner_SendGoal_Request>()
{
  return "mission_interfaces/action/AlignBanner_SendGoal_Request";
}

template<>
struct has_fixed_size<mission_interfaces::action::AlignBanner_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<mission_interfaces::action::AlignBanner_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::AlignBanner_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::AlignBanner_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mission_interfaces::action::AlignBanner_SendGoal_Request>
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
  const AlignBanner_SendGoal_Response & msg,
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
  const AlignBanner_SendGoal_Response & msg,
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

inline std::string to_yaml(const AlignBanner_SendGoal_Response & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::AlignBanner_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::AlignBanner_SendGoal_Response & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::AlignBanner_SendGoal_Response>()
{
  return "mission_interfaces::action::AlignBanner_SendGoal_Response";
}

template<>
inline const char * name<mission_interfaces::action::AlignBanner_SendGoal_Response>()
{
  return "mission_interfaces/action/AlignBanner_SendGoal_Response";
}

template<>
struct has_fixed_size<mission_interfaces::action::AlignBanner_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::AlignBanner_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mission_interfaces::action::AlignBanner_SendGoal_Response>
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
  const AlignBanner_SendGoal_Event & msg,
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
  const AlignBanner_SendGoal_Event & msg,
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

inline std::string to_yaml(const AlignBanner_SendGoal_Event & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::AlignBanner_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::AlignBanner_SendGoal_Event & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::AlignBanner_SendGoal_Event>()
{
  return "mission_interfaces::action::AlignBanner_SendGoal_Event";
}

template<>
inline const char * name<mission_interfaces::action::AlignBanner_SendGoal_Event>()
{
  return "mission_interfaces/action/AlignBanner_SendGoal_Event";
}

template<>
struct has_fixed_size<mission_interfaces::action::AlignBanner_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::AlignBanner_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::AlignBanner_SendGoal_Request>::value && has_bounded_size<mission_interfaces::action::AlignBanner_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mission_interfaces::action::AlignBanner_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mission_interfaces::action::AlignBanner_SendGoal>()
{
  return "mission_interfaces::action::AlignBanner_SendGoal";
}

template<>
inline const char * name<mission_interfaces::action::AlignBanner_SendGoal>()
{
  return "mission_interfaces/action/AlignBanner_SendGoal";
}

template<>
struct has_fixed_size<mission_interfaces::action::AlignBanner_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<mission_interfaces::action::AlignBanner_SendGoal_Request>::value &&
    has_fixed_size<mission_interfaces::action::AlignBanner_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<mission_interfaces::action::AlignBanner_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<mission_interfaces::action::AlignBanner_SendGoal_Request>::value &&
    has_bounded_size<mission_interfaces::action::AlignBanner_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<mission_interfaces::action::AlignBanner_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<mission_interfaces::action::AlignBanner_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mission_interfaces::action::AlignBanner_SendGoal_Response>
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
  const AlignBanner_GetResult_Request & msg,
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
  const AlignBanner_GetResult_Request & msg,
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

inline std::string to_yaml(const AlignBanner_GetResult_Request & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::AlignBanner_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::AlignBanner_GetResult_Request & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::AlignBanner_GetResult_Request>()
{
  return "mission_interfaces::action::AlignBanner_GetResult_Request";
}

template<>
inline const char * name<mission_interfaces::action::AlignBanner_GetResult_Request>()
{
  return "mission_interfaces/action/AlignBanner_GetResult_Request";
}

template<>
struct has_fixed_size<mission_interfaces::action::AlignBanner_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::AlignBanner_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mission_interfaces::action::AlignBanner_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/align_banner__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const AlignBanner_GetResult_Response & msg,
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
  const AlignBanner_GetResult_Response & msg,
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

inline std::string to_yaml(const AlignBanner_GetResult_Response & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::AlignBanner_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::AlignBanner_GetResult_Response & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::AlignBanner_GetResult_Response>()
{
  return "mission_interfaces::action::AlignBanner_GetResult_Response";
}

template<>
inline const char * name<mission_interfaces::action::AlignBanner_GetResult_Response>()
{
  return "mission_interfaces/action/AlignBanner_GetResult_Response";
}

template<>
struct has_fixed_size<mission_interfaces::action::AlignBanner_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<mission_interfaces::action::AlignBanner_Result>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::AlignBanner_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::AlignBanner_Result>::value> {};

template<>
struct is_message<mission_interfaces::action::AlignBanner_GetResult_Response>
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
  const AlignBanner_GetResult_Event & msg,
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
  const AlignBanner_GetResult_Event & msg,
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

inline std::string to_yaml(const AlignBanner_GetResult_Event & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::AlignBanner_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::AlignBanner_GetResult_Event & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::AlignBanner_GetResult_Event>()
{
  return "mission_interfaces::action::AlignBanner_GetResult_Event";
}

template<>
inline const char * name<mission_interfaces::action::AlignBanner_GetResult_Event>()
{
  return "mission_interfaces/action/AlignBanner_GetResult_Event";
}

template<>
struct has_fixed_size<mission_interfaces::action::AlignBanner_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::AlignBanner_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::AlignBanner_GetResult_Request>::value && has_bounded_size<mission_interfaces::action::AlignBanner_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mission_interfaces::action::AlignBanner_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mission_interfaces::action::AlignBanner_GetResult>()
{
  return "mission_interfaces::action::AlignBanner_GetResult";
}

template<>
inline const char * name<mission_interfaces::action::AlignBanner_GetResult>()
{
  return "mission_interfaces/action/AlignBanner_GetResult";
}

template<>
struct has_fixed_size<mission_interfaces::action::AlignBanner_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<mission_interfaces::action::AlignBanner_GetResult_Request>::value &&
    has_fixed_size<mission_interfaces::action::AlignBanner_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<mission_interfaces::action::AlignBanner_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<mission_interfaces::action::AlignBanner_GetResult_Request>::value &&
    has_bounded_size<mission_interfaces::action::AlignBanner_GetResult_Response>::value
  >
{
};

template<>
struct is_service<mission_interfaces::action::AlignBanner_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<mission_interfaces::action::AlignBanner_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mission_interfaces::action::AlignBanner_GetResult_Response>
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
// #include "mission_interfaces/action/detail/align_banner__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const AlignBanner_FeedbackMessage & msg,
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
  const AlignBanner_FeedbackMessage & msg,
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

inline std::string to_yaml(const AlignBanner_FeedbackMessage & msg, bool use_flow_style = false)
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
  const mission_interfaces::action::AlignBanner_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::AlignBanner_FeedbackMessage & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::AlignBanner_FeedbackMessage>()
{
  return "mission_interfaces::action::AlignBanner_FeedbackMessage";
}

template<>
inline const char * name<mission_interfaces::action::AlignBanner_FeedbackMessage>()
{
  return "mission_interfaces/action/AlignBanner_FeedbackMessage";
}

template<>
struct has_fixed_size<mission_interfaces::action::AlignBanner_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<mission_interfaces::action::AlignBanner_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::AlignBanner_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::AlignBanner_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mission_interfaces::action::AlignBanner_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<mission_interfaces::action::AlignBanner>
  : std::true_type
{
};

template<>
struct is_action_goal<mission_interfaces::action::AlignBanner_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<mission_interfaces::action::AlignBanner_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<mission_interfaces::action::AlignBanner_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MISSION_INTERFACES__ACTION__DETAIL__ALIGN_BANNER__TRAITS_HPP_
