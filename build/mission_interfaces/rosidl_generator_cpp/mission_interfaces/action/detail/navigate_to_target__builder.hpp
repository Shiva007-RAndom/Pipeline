// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:action/NavigateToTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/navigate_to_target.hpp"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_TARGET__BUILDER_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/action/detail/navigate_to_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToTarget_Goal_tolerance
{
public:
  explicit Init_NavigateToTarget_Goal_tolerance(::mission_interfaces::action::NavigateToTarget_Goal & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::NavigateToTarget_Goal tolerance(::mission_interfaces::action::NavigateToTarget_Goal::_tolerance_type arg)
  {
    msg_.tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_Goal msg_;
};

class Init_NavigateToTarget_Goal_speed
{
public:
  explicit Init_NavigateToTarget_Goal_speed(::mission_interfaces::action::NavigateToTarget_Goal & msg)
  : msg_(msg)
  {}
  Init_NavigateToTarget_Goal_tolerance speed(::mission_interfaces::action::NavigateToTarget_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_NavigateToTarget_Goal_tolerance(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_Goal msg_;
};

class Init_NavigateToTarget_Goal_yaw
{
public:
  explicit Init_NavigateToTarget_Goal_yaw(::mission_interfaces::action::NavigateToTarget_Goal & msg)
  : msg_(msg)
  {}
  Init_NavigateToTarget_Goal_speed yaw(::mission_interfaces::action::NavigateToTarget_Goal::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_NavigateToTarget_Goal_speed(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_Goal msg_;
};

class Init_NavigateToTarget_Goal_z
{
public:
  explicit Init_NavigateToTarget_Goal_z(::mission_interfaces::action::NavigateToTarget_Goal & msg)
  : msg_(msg)
  {}
  Init_NavigateToTarget_Goal_yaw z(::mission_interfaces::action::NavigateToTarget_Goal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_NavigateToTarget_Goal_yaw(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_Goal msg_;
};

class Init_NavigateToTarget_Goal_longitude
{
public:
  explicit Init_NavigateToTarget_Goal_longitude(::mission_interfaces::action::NavigateToTarget_Goal & msg)
  : msg_(msg)
  {}
  Init_NavigateToTarget_Goal_z longitude(::mission_interfaces::action::NavigateToTarget_Goal::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_NavigateToTarget_Goal_z(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_Goal msg_;
};

class Init_NavigateToTarget_Goal_latitude
{
public:
  Init_NavigateToTarget_Goal_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToTarget_Goal_longitude latitude(::mission_interfaces::action::NavigateToTarget_Goal::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_NavigateToTarget_Goal_longitude(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::NavigateToTarget_Goal>()
{
  return mission_interfaces::action::builder::Init_NavigateToTarget_Goal_latitude();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToTarget_Result_detoured
{
public:
  explicit Init_NavigateToTarget_Result_detoured(::mission_interfaces::action::NavigateToTarget_Result & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::NavigateToTarget_Result detoured(::mission_interfaces::action::NavigateToTarget_Result::_detoured_type arg)
  {
    msg_.detoured = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_Result msg_;
};

class Init_NavigateToTarget_Result_position
{
public:
  explicit Init_NavigateToTarget_Result_position(::mission_interfaces::action::NavigateToTarget_Result & msg)
  : msg_(msg)
  {}
  Init_NavigateToTarget_Result_detoured position(::mission_interfaces::action::NavigateToTarget_Result::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_NavigateToTarget_Result_detoured(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_Result msg_;
};

class Init_NavigateToTarget_Result_target
{
public:
  explicit Init_NavigateToTarget_Result_target(::mission_interfaces::action::NavigateToTarget_Result & msg)
  : msg_(msg)
  {}
  Init_NavigateToTarget_Result_position target(::mission_interfaces::action::NavigateToTarget_Result::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_NavigateToTarget_Result_position(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_Result msg_;
};

class Init_NavigateToTarget_Result_message
{
public:
  explicit Init_NavigateToTarget_Result_message(::mission_interfaces::action::NavigateToTarget_Result & msg)
  : msg_(msg)
  {}
  Init_NavigateToTarget_Result_target message(::mission_interfaces::action::NavigateToTarget_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_NavigateToTarget_Result_target(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_Result msg_;
};

class Init_NavigateToTarget_Result_success
{
public:
  Init_NavigateToTarget_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToTarget_Result_message success(::mission_interfaces::action::NavigateToTarget_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_NavigateToTarget_Result_message(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::NavigateToTarget_Result>()
{
  return mission_interfaces::action::builder::Init_NavigateToTarget_Result_success();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToTarget_Feedback_distance
{
public:
  explicit Init_NavigateToTarget_Feedback_distance(::mission_interfaces::action::NavigateToTarget_Feedback & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::NavigateToTarget_Feedback distance(::mission_interfaces::action::NavigateToTarget_Feedback::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_Feedback msg_;
};

class Init_NavigateToTarget_Feedback_state
{
public:
  Init_NavigateToTarget_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToTarget_Feedback_distance state(::mission_interfaces::action::NavigateToTarget_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_NavigateToTarget_Feedback_distance(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::NavigateToTarget_Feedback>()
{
  return mission_interfaces::action::builder::Init_NavigateToTarget_Feedback_state();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToTarget_SendGoal_Request_goal
{
public:
  explicit Init_NavigateToTarget_SendGoal_Request_goal(::mission_interfaces::action::NavigateToTarget_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::NavigateToTarget_SendGoal_Request goal(::mission_interfaces::action::NavigateToTarget_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_SendGoal_Request msg_;
};

class Init_NavigateToTarget_SendGoal_Request_goal_id
{
public:
  Init_NavigateToTarget_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToTarget_SendGoal_Request_goal goal_id(::mission_interfaces::action::NavigateToTarget_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateToTarget_SendGoal_Request_goal(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::NavigateToTarget_SendGoal_Request>()
{
  return mission_interfaces::action::builder::Init_NavigateToTarget_SendGoal_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToTarget_SendGoal_Response_stamp
{
public:
  explicit Init_NavigateToTarget_SendGoal_Response_stamp(::mission_interfaces::action::NavigateToTarget_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::NavigateToTarget_SendGoal_Response stamp(::mission_interfaces::action::NavigateToTarget_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_SendGoal_Response msg_;
};

class Init_NavigateToTarget_SendGoal_Response_accepted
{
public:
  Init_NavigateToTarget_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToTarget_SendGoal_Response_stamp accepted(::mission_interfaces::action::NavigateToTarget_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_NavigateToTarget_SendGoal_Response_stamp(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::NavigateToTarget_SendGoal_Response>()
{
  return mission_interfaces::action::builder::Init_NavigateToTarget_SendGoal_Response_accepted();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToTarget_SendGoal_Event_response
{
public:
  explicit Init_NavigateToTarget_SendGoal_Event_response(::mission_interfaces::action::NavigateToTarget_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::NavigateToTarget_SendGoal_Event response(::mission_interfaces::action::NavigateToTarget_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_SendGoal_Event msg_;
};

class Init_NavigateToTarget_SendGoal_Event_request
{
public:
  explicit Init_NavigateToTarget_SendGoal_Event_request(::mission_interfaces::action::NavigateToTarget_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_NavigateToTarget_SendGoal_Event_response request(::mission_interfaces::action::NavigateToTarget_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_NavigateToTarget_SendGoal_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_SendGoal_Event msg_;
};

class Init_NavigateToTarget_SendGoal_Event_info
{
public:
  Init_NavigateToTarget_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToTarget_SendGoal_Event_request info(::mission_interfaces::action::NavigateToTarget_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_NavigateToTarget_SendGoal_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::NavigateToTarget_SendGoal_Event>()
{
  return mission_interfaces::action::builder::Init_NavigateToTarget_SendGoal_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToTarget_GetResult_Request_goal_id
{
public:
  Init_NavigateToTarget_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::NavigateToTarget_GetResult_Request goal_id(::mission_interfaces::action::NavigateToTarget_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::NavigateToTarget_GetResult_Request>()
{
  return mission_interfaces::action::builder::Init_NavigateToTarget_GetResult_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToTarget_GetResult_Response_result
{
public:
  explicit Init_NavigateToTarget_GetResult_Response_result(::mission_interfaces::action::NavigateToTarget_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::NavigateToTarget_GetResult_Response result(::mission_interfaces::action::NavigateToTarget_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_GetResult_Response msg_;
};

class Init_NavigateToTarget_GetResult_Response_status
{
public:
  Init_NavigateToTarget_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToTarget_GetResult_Response_result status(::mission_interfaces::action::NavigateToTarget_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigateToTarget_GetResult_Response_result(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::NavigateToTarget_GetResult_Response>()
{
  return mission_interfaces::action::builder::Init_NavigateToTarget_GetResult_Response_status();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToTarget_GetResult_Event_response
{
public:
  explicit Init_NavigateToTarget_GetResult_Event_response(::mission_interfaces::action::NavigateToTarget_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::NavigateToTarget_GetResult_Event response(::mission_interfaces::action::NavigateToTarget_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_GetResult_Event msg_;
};

class Init_NavigateToTarget_GetResult_Event_request
{
public:
  explicit Init_NavigateToTarget_GetResult_Event_request(::mission_interfaces::action::NavigateToTarget_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_NavigateToTarget_GetResult_Event_response request(::mission_interfaces::action::NavigateToTarget_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_NavigateToTarget_GetResult_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_GetResult_Event msg_;
};

class Init_NavigateToTarget_GetResult_Event_info
{
public:
  Init_NavigateToTarget_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToTarget_GetResult_Event_request info(::mission_interfaces::action::NavigateToTarget_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_NavigateToTarget_GetResult_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::NavigateToTarget_GetResult_Event>()
{
  return mission_interfaces::action::builder::Init_NavigateToTarget_GetResult_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToTarget_FeedbackMessage_feedback
{
public:
  explicit Init_NavigateToTarget_FeedbackMessage_feedback(::mission_interfaces::action::NavigateToTarget_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::NavigateToTarget_FeedbackMessage feedback(::mission_interfaces::action::NavigateToTarget_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_FeedbackMessage msg_;
};

class Init_NavigateToTarget_FeedbackMessage_goal_id
{
public:
  Init_NavigateToTarget_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToTarget_FeedbackMessage_feedback goal_id(::mission_interfaces::action::NavigateToTarget_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateToTarget_FeedbackMessage_feedback(msg_);
  }

private:
  ::mission_interfaces::action::NavigateToTarget_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::NavigateToTarget_FeedbackMessage>()
{
  return mission_interfaces::action::builder::Init_NavigateToTarget_FeedbackMessage_goal_id();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_TARGET__BUILDER_HPP_
