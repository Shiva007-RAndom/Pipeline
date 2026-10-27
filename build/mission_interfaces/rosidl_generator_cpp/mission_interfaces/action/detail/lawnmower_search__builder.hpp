// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:action/LawnmowerSearch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/lawnmower_search.hpp"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__LAWNMOWER_SEARCH__BUILDER_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__LAWNMOWER_SEARCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_LawnmowerSearch_Goal_waypoint_tolerance
{
public:
  explicit Init_LawnmowerSearch_Goal_waypoint_tolerance(::mission_interfaces::action::LawnmowerSearch_Goal & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::LawnmowerSearch_Goal waypoint_tolerance(::mission_interfaces::action::LawnmowerSearch_Goal::_waypoint_tolerance_type arg)
  {
    msg_.waypoint_tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_Goal msg_;
};

class Init_LawnmowerSearch_Goal_speed
{
public:
  explicit Init_LawnmowerSearch_Goal_speed(::mission_interfaces::action::LawnmowerSearch_Goal & msg)
  : msg_(msg)
  {}
  Init_LawnmowerSearch_Goal_waypoint_tolerance speed(::mission_interfaces::action::LawnmowerSearch_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_LawnmowerSearch_Goal_waypoint_tolerance(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_Goal msg_;
};

class Init_LawnmowerSearch_Goal_rows
{
public:
  explicit Init_LawnmowerSearch_Goal_rows(::mission_interfaces::action::LawnmowerSearch_Goal & msg)
  : msg_(msg)
  {}
  Init_LawnmowerSearch_Goal_speed rows(::mission_interfaces::action::LawnmowerSearch_Goal::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return Init_LawnmowerSearch_Goal_speed(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_Goal msg_;
};

class Init_LawnmowerSearch_Goal_row_step
{
public:
  explicit Init_LawnmowerSearch_Goal_row_step(::mission_interfaces::action::LawnmowerSearch_Goal & msg)
  : msg_(msg)
  {}
  Init_LawnmowerSearch_Goal_rows row_step(::mission_interfaces::action::LawnmowerSearch_Goal::_row_step_type arg)
  {
    msg_.row_step = std::move(arg);
    return Init_LawnmowerSearch_Goal_rows(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_Goal msg_;
};

class Init_LawnmowerSearch_Goal_length
{
public:
  explicit Init_LawnmowerSearch_Goal_length(::mission_interfaces::action::LawnmowerSearch_Goal & msg)
  : msg_(msg)
  {}
  Init_LawnmowerSearch_Goal_row_step length(::mission_interfaces::action::LawnmowerSearch_Goal::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_LawnmowerSearch_Goal_row_step(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_Goal msg_;
};

class Init_LawnmowerSearch_Goal_heading
{
public:
  explicit Init_LawnmowerSearch_Goal_heading(::mission_interfaces::action::LawnmowerSearch_Goal & msg)
  : msg_(msg)
  {}
  Init_LawnmowerSearch_Goal_length heading(::mission_interfaces::action::LawnmowerSearch_Goal::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_LawnmowerSearch_Goal_length(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_Goal msg_;
};

class Init_LawnmowerSearch_Goal_start
{
public:
  Init_LawnmowerSearch_Goal_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LawnmowerSearch_Goal_heading start(::mission_interfaces::action::LawnmowerSearch_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_LawnmowerSearch_Goal_heading(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::LawnmowerSearch_Goal>()
{
  return mission_interfaces::action::builder::Init_LawnmowerSearch_Goal_start();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_LawnmowerSearch_Result_score
{
public:
  explicit Init_LawnmowerSearch_Result_score(::mission_interfaces::action::LawnmowerSearch_Result & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::LawnmowerSearch_Result score(::mission_interfaces::action::LawnmowerSearch_Result::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_Result msg_;
};

class Init_LawnmowerSearch_Result_decoded_text
{
public:
  explicit Init_LawnmowerSearch_Result_decoded_text(::mission_interfaces::action::LawnmowerSearch_Result & msg)
  : msg_(msg)
  {}
  Init_LawnmowerSearch_Result_score decoded_text(::mission_interfaces::action::LawnmowerSearch_Result::_decoded_text_type arg)
  {
    msg_.decoded_text = std::move(arg);
    return Init_LawnmowerSearch_Result_score(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_Result msg_;
};

class Init_LawnmowerSearch_Result_target
{
public:
  explicit Init_LawnmowerSearch_Result_target(::mission_interfaces::action::LawnmowerSearch_Result & msg)
  : msg_(msg)
  {}
  Init_LawnmowerSearch_Result_decoded_text target(::mission_interfaces::action::LawnmowerSearch_Result::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_LawnmowerSearch_Result_decoded_text(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_Result msg_;
};

class Init_LawnmowerSearch_Result_message
{
public:
  explicit Init_LawnmowerSearch_Result_message(::mission_interfaces::action::LawnmowerSearch_Result & msg)
  : msg_(msg)
  {}
  Init_LawnmowerSearch_Result_target message(::mission_interfaces::action::LawnmowerSearch_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_LawnmowerSearch_Result_target(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_Result msg_;
};

class Init_LawnmowerSearch_Result_success
{
public:
  Init_LawnmowerSearch_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LawnmowerSearch_Result_message success(::mission_interfaces::action::LawnmowerSearch_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_LawnmowerSearch_Result_message(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::LawnmowerSearch_Result>()
{
  return mission_interfaces::action::builder::Init_LawnmowerSearch_Result_success();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_LawnmowerSearch_Feedback_state
{
public:
  explicit Init_LawnmowerSearch_Feedback_state(::mission_interfaces::action::LawnmowerSearch_Feedback & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::LawnmowerSearch_Feedback state(::mission_interfaces::action::LawnmowerSearch_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_Feedback msg_;
};

class Init_LawnmowerSearch_Feedback_waypoint
{
public:
  Init_LawnmowerSearch_Feedback_waypoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LawnmowerSearch_Feedback_state waypoint(::mission_interfaces::action::LawnmowerSearch_Feedback::_waypoint_type arg)
  {
    msg_.waypoint = std::move(arg);
    return Init_LawnmowerSearch_Feedback_state(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::LawnmowerSearch_Feedback>()
{
  return mission_interfaces::action::builder::Init_LawnmowerSearch_Feedback_waypoint();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_LawnmowerSearch_SendGoal_Request_goal
{
public:
  explicit Init_LawnmowerSearch_SendGoal_Request_goal(::mission_interfaces::action::LawnmowerSearch_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::LawnmowerSearch_SendGoal_Request goal(::mission_interfaces::action::LawnmowerSearch_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_SendGoal_Request msg_;
};

class Init_LawnmowerSearch_SendGoal_Request_goal_id
{
public:
  Init_LawnmowerSearch_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LawnmowerSearch_SendGoal_Request_goal goal_id(::mission_interfaces::action::LawnmowerSearch_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LawnmowerSearch_SendGoal_Request_goal(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::LawnmowerSearch_SendGoal_Request>()
{
  return mission_interfaces::action::builder::Init_LawnmowerSearch_SendGoal_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_LawnmowerSearch_SendGoal_Response_stamp
{
public:
  explicit Init_LawnmowerSearch_SendGoal_Response_stamp(::mission_interfaces::action::LawnmowerSearch_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::LawnmowerSearch_SendGoal_Response stamp(::mission_interfaces::action::LawnmowerSearch_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_SendGoal_Response msg_;
};

class Init_LawnmowerSearch_SendGoal_Response_accepted
{
public:
  Init_LawnmowerSearch_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LawnmowerSearch_SendGoal_Response_stamp accepted(::mission_interfaces::action::LawnmowerSearch_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_LawnmowerSearch_SendGoal_Response_stamp(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::LawnmowerSearch_SendGoal_Response>()
{
  return mission_interfaces::action::builder::Init_LawnmowerSearch_SendGoal_Response_accepted();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_LawnmowerSearch_SendGoal_Event_response
{
public:
  explicit Init_LawnmowerSearch_SendGoal_Event_response(::mission_interfaces::action::LawnmowerSearch_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::LawnmowerSearch_SendGoal_Event response(::mission_interfaces::action::LawnmowerSearch_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_SendGoal_Event msg_;
};

class Init_LawnmowerSearch_SendGoal_Event_request
{
public:
  explicit Init_LawnmowerSearch_SendGoal_Event_request(::mission_interfaces::action::LawnmowerSearch_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_LawnmowerSearch_SendGoal_Event_response request(::mission_interfaces::action::LawnmowerSearch_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LawnmowerSearch_SendGoal_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_SendGoal_Event msg_;
};

class Init_LawnmowerSearch_SendGoal_Event_info
{
public:
  Init_LawnmowerSearch_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LawnmowerSearch_SendGoal_Event_request info(::mission_interfaces::action::LawnmowerSearch_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LawnmowerSearch_SendGoal_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::LawnmowerSearch_SendGoal_Event>()
{
  return mission_interfaces::action::builder::Init_LawnmowerSearch_SendGoal_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_LawnmowerSearch_GetResult_Request_goal_id
{
public:
  Init_LawnmowerSearch_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::LawnmowerSearch_GetResult_Request goal_id(::mission_interfaces::action::LawnmowerSearch_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::LawnmowerSearch_GetResult_Request>()
{
  return mission_interfaces::action::builder::Init_LawnmowerSearch_GetResult_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_LawnmowerSearch_GetResult_Response_result
{
public:
  explicit Init_LawnmowerSearch_GetResult_Response_result(::mission_interfaces::action::LawnmowerSearch_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::LawnmowerSearch_GetResult_Response result(::mission_interfaces::action::LawnmowerSearch_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_GetResult_Response msg_;
};

class Init_LawnmowerSearch_GetResult_Response_status
{
public:
  Init_LawnmowerSearch_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LawnmowerSearch_GetResult_Response_result status(::mission_interfaces::action::LawnmowerSearch_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LawnmowerSearch_GetResult_Response_result(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::LawnmowerSearch_GetResult_Response>()
{
  return mission_interfaces::action::builder::Init_LawnmowerSearch_GetResult_Response_status();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_LawnmowerSearch_GetResult_Event_response
{
public:
  explicit Init_LawnmowerSearch_GetResult_Event_response(::mission_interfaces::action::LawnmowerSearch_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::LawnmowerSearch_GetResult_Event response(::mission_interfaces::action::LawnmowerSearch_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_GetResult_Event msg_;
};

class Init_LawnmowerSearch_GetResult_Event_request
{
public:
  explicit Init_LawnmowerSearch_GetResult_Event_request(::mission_interfaces::action::LawnmowerSearch_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_LawnmowerSearch_GetResult_Event_response request(::mission_interfaces::action::LawnmowerSearch_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LawnmowerSearch_GetResult_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_GetResult_Event msg_;
};

class Init_LawnmowerSearch_GetResult_Event_info
{
public:
  Init_LawnmowerSearch_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LawnmowerSearch_GetResult_Event_request info(::mission_interfaces::action::LawnmowerSearch_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LawnmowerSearch_GetResult_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::LawnmowerSearch_GetResult_Event>()
{
  return mission_interfaces::action::builder::Init_LawnmowerSearch_GetResult_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_LawnmowerSearch_FeedbackMessage_feedback
{
public:
  explicit Init_LawnmowerSearch_FeedbackMessage_feedback(::mission_interfaces::action::LawnmowerSearch_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::LawnmowerSearch_FeedbackMessage feedback(::mission_interfaces::action::LawnmowerSearch_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_FeedbackMessage msg_;
};

class Init_LawnmowerSearch_FeedbackMessage_goal_id
{
public:
  Init_LawnmowerSearch_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LawnmowerSearch_FeedbackMessage_feedback goal_id(::mission_interfaces::action::LawnmowerSearch_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LawnmowerSearch_FeedbackMessage_feedback(msg_);
  }

private:
  ::mission_interfaces::action::LawnmowerSearch_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::LawnmowerSearch_FeedbackMessage>()
{
  return mission_interfaces::action::builder::Init_LawnmowerSearch_FeedbackMessage_goal_id();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__ACTION__DETAIL__LAWNMOWER_SEARCH__BUILDER_HPP_
