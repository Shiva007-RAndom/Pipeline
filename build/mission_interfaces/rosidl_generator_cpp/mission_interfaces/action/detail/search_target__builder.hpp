// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:action/SearchTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/search_target.hpp"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__SEARCH_TARGET__BUILDER_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__SEARCH_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/action/detail/search_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SearchTarget_Goal_skip_fly_to_target
{
public:
  explicit Init_SearchTarget_Goal_skip_fly_to_target(::mission_interfaces::action::SearchTarget_Goal & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SearchTarget_Goal skip_fly_to_target(::mission_interfaces::action::SearchTarget_Goal::_skip_fly_to_target_type arg)
  {
    msg_.skip_fly_to_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Goal msg_;
};

class Init_SearchTarget_Goal_revisit_time
{
public:
  explicit Init_SearchTarget_Goal_revisit_time(::mission_interfaces::action::SearchTarget_Goal & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Goal_skip_fly_to_target revisit_time(::mission_interfaces::action::SearchTarget_Goal::_revisit_time_type arg)
  {
    msg_.revisit_time = std::move(arg);
    return Init_SearchTarget_Goal_skip_fly_to_target(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Goal msg_;
};

class Init_SearchTarget_Goal_max_revisits
{
public:
  explicit Init_SearchTarget_Goal_max_revisits(::mission_interfaces::action::SearchTarget_Goal & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Goal_revisit_time max_revisits(::mission_interfaces::action::SearchTarget_Goal::_max_revisits_type arg)
  {
    msg_.max_revisits = std::move(arg);
    return Init_SearchTarget_Goal_revisit_time(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Goal msg_;
};

class Init_SearchTarget_Goal_confirm_matches
{
public:
  explicit Init_SearchTarget_Goal_confirm_matches(::mission_interfaces::action::SearchTarget_Goal & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Goal_max_revisits confirm_matches(::mission_interfaces::action::SearchTarget_Goal::_confirm_matches_type arg)
  {
    msg_.confirm_matches = std::move(arg);
    return Init_SearchTarget_Goal_max_revisits(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Goal msg_;
};

class Init_SearchTarget_Goal_red_zone_margin
{
public:
  explicit Init_SearchTarget_Goal_red_zone_margin(::mission_interfaces::action::SearchTarget_Goal & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Goal_confirm_matches red_zone_margin(::mission_interfaces::action::SearchTarget_Goal::_red_zone_margin_type arg)
  {
    msg_.red_zone_margin = std::move(arg);
    return Init_SearchTarget_Goal_confirm_matches(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Goal msg_;
};

class Init_SearchTarget_Goal_speed
{
public:
  explicit Init_SearchTarget_Goal_speed(::mission_interfaces::action::SearchTarget_Goal & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Goal_red_zone_margin speed(::mission_interfaces::action::SearchTarget_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_SearchTarget_Goal_red_zone_margin(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Goal msg_;
};

class Init_SearchTarget_Goal_rows
{
public:
  explicit Init_SearchTarget_Goal_rows(::mission_interfaces::action::SearchTarget_Goal & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Goal_speed rows(::mission_interfaces::action::SearchTarget_Goal::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return Init_SearchTarget_Goal_speed(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Goal msg_;
};

class Init_SearchTarget_Goal_overlap
{
public:
  explicit Init_SearchTarget_Goal_overlap(::mission_interfaces::action::SearchTarget_Goal & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Goal_rows overlap(::mission_interfaces::action::SearchTarget_Goal::_overlap_type arg)
  {
    msg_.overlap = std::move(arg);
    return Init_SearchTarget_Goal_rows(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Goal msg_;
};

class Init_SearchTarget_Goal_wall_margin
{
public:
  explicit Init_SearchTarget_Goal_wall_margin(::mission_interfaces::action::SearchTarget_Goal & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Goal_overlap wall_margin(::mission_interfaces::action::SearchTarget_Goal::_wall_margin_type arg)
  {
    msg_.wall_margin = std::move(arg);
    return Init_SearchTarget_Goal_overlap(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Goal msg_;
};

class Init_SearchTarget_Goal_yaw
{
public:
  explicit Init_SearchTarget_Goal_yaw(::mission_interfaces::action::SearchTarget_Goal & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Goal_wall_margin yaw(::mission_interfaces::action::SearchTarget_Goal::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_SearchTarget_Goal_wall_margin(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Goal msg_;
};

class Init_SearchTarget_Goal_altitude
{
public:
  explicit Init_SearchTarget_Goal_altitude(::mission_interfaces::action::SearchTarget_Goal & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Goal_yaw altitude(::mission_interfaces::action::SearchTarget_Goal::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_SearchTarget_Goal_yaw(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Goal msg_;
};

class Init_SearchTarget_Goal_geofence_file
{
public:
  Init_SearchTarget_Goal_geofence_file()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SearchTarget_Goal_altitude geofence_file(::mission_interfaces::action::SearchTarget_Goal::_geofence_file_type arg)
  {
    msg_.geofence_file = std::move(arg);
    return Init_SearchTarget_Goal_altitude(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SearchTarget_Goal>()
{
  return mission_interfaces::action::builder::Init_SearchTarget_Goal_geofence_file();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SearchTarget_Result_coverage
{
public:
  explicit Init_SearchTarget_Result_coverage(::mission_interfaces::action::SearchTarget_Result & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SearchTarget_Result coverage(::mission_interfaces::action::SearchTarget_Result::_coverage_type arg)
  {
    msg_.coverage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Result msg_;
};

class Init_SearchTarget_Result_red_zones
{
public:
  explicit Init_SearchTarget_Result_red_zones(::mission_interfaces::action::SearchTarget_Result & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Result_coverage red_zones(::mission_interfaces::action::SearchTarget_Result::_red_zones_type arg)
  {
    msg_.red_zones = std::move(arg);
    return Init_SearchTarget_Result_coverage(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Result msg_;
};

class Init_SearchTarget_Result_longitude
{
public:
  explicit Init_SearchTarget_Result_longitude(::mission_interfaces::action::SearchTarget_Result & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Result_red_zones longitude(::mission_interfaces::action::SearchTarget_Result::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_SearchTarget_Result_red_zones(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Result msg_;
};

class Init_SearchTarget_Result_latitude
{
public:
  explicit Init_SearchTarget_Result_latitude(::mission_interfaces::action::SearchTarget_Result & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Result_longitude latitude(::mission_interfaces::action::SearchTarget_Result::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_SearchTarget_Result_longitude(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Result msg_;
};

class Init_SearchTarget_Result_target
{
public:
  explicit Init_SearchTarget_Result_target(::mission_interfaces::action::SearchTarget_Result & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Result_latitude target(::mission_interfaces::action::SearchTarget_Result::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_SearchTarget_Result_latitude(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Result msg_;
};

class Init_SearchTarget_Result_decoded_text
{
public:
  explicit Init_SearchTarget_Result_decoded_text(::mission_interfaces::action::SearchTarget_Result & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Result_target decoded_text(::mission_interfaces::action::SearchTarget_Result::_decoded_text_type arg)
  {
    msg_.decoded_text = std::move(arg);
    return Init_SearchTarget_Result_target(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Result msg_;
};

class Init_SearchTarget_Result_score
{
public:
  explicit Init_SearchTarget_Result_score(::mission_interfaces::action::SearchTarget_Result & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Result_decoded_text score(::mission_interfaces::action::SearchTarget_Result::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_SearchTarget_Result_decoded_text(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Result msg_;
};

class Init_SearchTarget_Result_matched
{
public:
  explicit Init_SearchTarget_Result_matched(::mission_interfaces::action::SearchTarget_Result & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Result_score matched(::mission_interfaces::action::SearchTarget_Result::_matched_type arg)
  {
    msg_.matched = std::move(arg);
    return Init_SearchTarget_Result_score(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Result msg_;
};

class Init_SearchTarget_Result_message
{
public:
  explicit Init_SearchTarget_Result_message(::mission_interfaces::action::SearchTarget_Result & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Result_matched message(::mission_interfaces::action::SearchTarget_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SearchTarget_Result_matched(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Result msg_;
};

class Init_SearchTarget_Result_success
{
public:
  Init_SearchTarget_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SearchTarget_Result_message success(::mission_interfaces::action::SearchTarget_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SearchTarget_Result_message(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SearchTarget_Result>()
{
  return mission_interfaces::action::builder::Init_SearchTarget_Result_success();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SearchTarget_Feedback_red_zones
{
public:
  explicit Init_SearchTarget_Feedback_red_zones(::mission_interfaces::action::SearchTarget_Feedback & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SearchTarget_Feedback red_zones(::mission_interfaces::action::SearchTarget_Feedback::_red_zones_type arg)
  {
    msg_.red_zones = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Feedback msg_;
};

class Init_SearchTarget_Feedback_best_score
{
public:
  explicit Init_SearchTarget_Feedback_best_score(::mission_interfaces::action::SearchTarget_Feedback & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Feedback_red_zones best_score(::mission_interfaces::action::SearchTarget_Feedback::_best_score_type arg)
  {
    msg_.best_score = std::move(arg);
    return Init_SearchTarget_Feedback_red_zones(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Feedback msg_;
};

class Init_SearchTarget_Feedback_steering
{
public:
  explicit Init_SearchTarget_Feedback_steering(::mission_interfaces::action::SearchTarget_Feedback & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_Feedback_best_score steering(::mission_interfaces::action::SearchTarget_Feedback::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_SearchTarget_Feedback_best_score(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Feedback msg_;
};

class Init_SearchTarget_Feedback_state
{
public:
  Init_SearchTarget_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SearchTarget_Feedback_steering state(::mission_interfaces::action::SearchTarget_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SearchTarget_Feedback_steering(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SearchTarget_Feedback>()
{
  return mission_interfaces::action::builder::Init_SearchTarget_Feedback_state();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SearchTarget_SendGoal_Request_goal
{
public:
  explicit Init_SearchTarget_SendGoal_Request_goal(::mission_interfaces::action::SearchTarget_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SearchTarget_SendGoal_Request goal(::mission_interfaces::action::SearchTarget_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_SendGoal_Request msg_;
};

class Init_SearchTarget_SendGoal_Request_goal_id
{
public:
  Init_SearchTarget_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SearchTarget_SendGoal_Request_goal goal_id(::mission_interfaces::action::SearchTarget_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SearchTarget_SendGoal_Request_goal(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SearchTarget_SendGoal_Request>()
{
  return mission_interfaces::action::builder::Init_SearchTarget_SendGoal_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SearchTarget_SendGoal_Response_stamp
{
public:
  explicit Init_SearchTarget_SendGoal_Response_stamp(::mission_interfaces::action::SearchTarget_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SearchTarget_SendGoal_Response stamp(::mission_interfaces::action::SearchTarget_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_SendGoal_Response msg_;
};

class Init_SearchTarget_SendGoal_Response_accepted
{
public:
  Init_SearchTarget_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SearchTarget_SendGoal_Response_stamp accepted(::mission_interfaces::action::SearchTarget_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SearchTarget_SendGoal_Response_stamp(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SearchTarget_SendGoal_Response>()
{
  return mission_interfaces::action::builder::Init_SearchTarget_SendGoal_Response_accepted();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SearchTarget_SendGoal_Event_response
{
public:
  explicit Init_SearchTarget_SendGoal_Event_response(::mission_interfaces::action::SearchTarget_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SearchTarget_SendGoal_Event response(::mission_interfaces::action::SearchTarget_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_SendGoal_Event msg_;
};

class Init_SearchTarget_SendGoal_Event_request
{
public:
  explicit Init_SearchTarget_SendGoal_Event_request(::mission_interfaces::action::SearchTarget_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_SendGoal_Event_response request(::mission_interfaces::action::SearchTarget_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SearchTarget_SendGoal_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_SendGoal_Event msg_;
};

class Init_SearchTarget_SendGoal_Event_info
{
public:
  Init_SearchTarget_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SearchTarget_SendGoal_Event_request info(::mission_interfaces::action::SearchTarget_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SearchTarget_SendGoal_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SearchTarget_SendGoal_Event>()
{
  return mission_interfaces::action::builder::Init_SearchTarget_SendGoal_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SearchTarget_GetResult_Request_goal_id
{
public:
  Init_SearchTarget_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::SearchTarget_GetResult_Request goal_id(::mission_interfaces::action::SearchTarget_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SearchTarget_GetResult_Request>()
{
  return mission_interfaces::action::builder::Init_SearchTarget_GetResult_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SearchTarget_GetResult_Response_result
{
public:
  explicit Init_SearchTarget_GetResult_Response_result(::mission_interfaces::action::SearchTarget_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SearchTarget_GetResult_Response result(::mission_interfaces::action::SearchTarget_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_GetResult_Response msg_;
};

class Init_SearchTarget_GetResult_Response_status
{
public:
  Init_SearchTarget_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SearchTarget_GetResult_Response_result status(::mission_interfaces::action::SearchTarget_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SearchTarget_GetResult_Response_result(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SearchTarget_GetResult_Response>()
{
  return mission_interfaces::action::builder::Init_SearchTarget_GetResult_Response_status();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SearchTarget_GetResult_Event_response
{
public:
  explicit Init_SearchTarget_GetResult_Event_response(::mission_interfaces::action::SearchTarget_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SearchTarget_GetResult_Event response(::mission_interfaces::action::SearchTarget_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_GetResult_Event msg_;
};

class Init_SearchTarget_GetResult_Event_request
{
public:
  explicit Init_SearchTarget_GetResult_Event_request(::mission_interfaces::action::SearchTarget_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_SearchTarget_GetResult_Event_response request(::mission_interfaces::action::SearchTarget_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SearchTarget_GetResult_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_GetResult_Event msg_;
};

class Init_SearchTarget_GetResult_Event_info
{
public:
  Init_SearchTarget_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SearchTarget_GetResult_Event_request info(::mission_interfaces::action::SearchTarget_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SearchTarget_GetResult_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SearchTarget_GetResult_Event>()
{
  return mission_interfaces::action::builder::Init_SearchTarget_GetResult_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SearchTarget_FeedbackMessage_feedback
{
public:
  explicit Init_SearchTarget_FeedbackMessage_feedback(::mission_interfaces::action::SearchTarget_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SearchTarget_FeedbackMessage feedback(::mission_interfaces::action::SearchTarget_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_FeedbackMessage msg_;
};

class Init_SearchTarget_FeedbackMessage_goal_id
{
public:
  Init_SearchTarget_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SearchTarget_FeedbackMessage_feedback goal_id(::mission_interfaces::action::SearchTarget_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SearchTarget_FeedbackMessage_feedback(msg_);
  }

private:
  ::mission_interfaces::action::SearchTarget_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SearchTarget_FeedbackMessage>()
{
  return mission_interfaces::action::builder::Init_SearchTarget_FeedbackMessage_goal_id();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__ACTION__DETAIL__SEARCH_TARGET__BUILDER_HPP_
