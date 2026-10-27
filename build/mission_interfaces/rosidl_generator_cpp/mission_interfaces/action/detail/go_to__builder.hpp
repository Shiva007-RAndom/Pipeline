// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:action/GoTo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/go_to.hpp"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__GO_TO__BUILDER_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__GO_TO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/action/detail/go_to__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_GoTo_Goal_acceptance_radius
{
public:
  explicit Init_GoTo_Goal_acceptance_radius(::mission_interfaces::action::GoTo_Goal & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::GoTo_Goal acceptance_radius(::mission_interfaces::action::GoTo_Goal::_acceptance_radius_type arg)
  {
    msg_.acceptance_radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_Goal msg_;
};

class Init_GoTo_Goal_speed
{
public:
  explicit Init_GoTo_Goal_speed(::mission_interfaces::action::GoTo_Goal & msg)
  : msg_(msg)
  {}
  Init_GoTo_Goal_acceptance_radius speed(::mission_interfaces::action::GoTo_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_GoTo_Goal_acceptance_radius(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_Goal msg_;
};

class Init_GoTo_Goal_yaw
{
public:
  explicit Init_GoTo_Goal_yaw(::mission_interfaces::action::GoTo_Goal & msg)
  : msg_(msg)
  {}
  Init_GoTo_Goal_speed yaw(::mission_interfaces::action::GoTo_Goal::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_GoTo_Goal_speed(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_Goal msg_;
};

class Init_GoTo_Goal_z
{
public:
  explicit Init_GoTo_Goal_z(::mission_interfaces::action::GoTo_Goal & msg)
  : msg_(msg)
  {}
  Init_GoTo_Goal_yaw z(::mission_interfaces::action::GoTo_Goal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_GoTo_Goal_yaw(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_Goal msg_;
};

class Init_GoTo_Goal_y
{
public:
  explicit Init_GoTo_Goal_y(::mission_interfaces::action::GoTo_Goal & msg)
  : msg_(msg)
  {}
  Init_GoTo_Goal_z y(::mission_interfaces::action::GoTo_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GoTo_Goal_z(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_Goal msg_;
};

class Init_GoTo_Goal_x
{
public:
  explicit Init_GoTo_Goal_x(::mission_interfaces::action::GoTo_Goal & msg)
  : msg_(msg)
  {}
  Init_GoTo_Goal_y x(::mission_interfaces::action::GoTo_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GoTo_Goal_y(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_Goal msg_;
};

class Init_GoTo_Goal_frame
{
public:
  Init_GoTo_Goal_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_Goal_x frame(::mission_interfaces::action::GoTo_Goal::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_GoTo_Goal_x(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::GoTo_Goal>()
{
  return mission_interfaces::action::builder::Init_GoTo_Goal_frame();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_GoTo_Result_final_position
{
public:
  explicit Init_GoTo_Result_final_position(::mission_interfaces::action::GoTo_Result & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::GoTo_Result final_position(::mission_interfaces::action::GoTo_Result::_final_position_type arg)
  {
    msg_.final_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_Result msg_;
};

class Init_GoTo_Result_message
{
public:
  explicit Init_GoTo_Result_message(::mission_interfaces::action::GoTo_Result & msg)
  : msg_(msg)
  {}
  Init_GoTo_Result_final_position message(::mission_interfaces::action::GoTo_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GoTo_Result_final_position(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_Result msg_;
};

class Init_GoTo_Result_success
{
public:
  Init_GoTo_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_Result_message success(::mission_interfaces::action::GoTo_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GoTo_Result_message(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::GoTo_Result>()
{
  return mission_interfaces::action::builder::Init_GoTo_Result_success();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_GoTo_Feedback_distance_remaining
{
public:
  Init_GoTo_Feedback_distance_remaining()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::GoTo_Feedback distance_remaining(::mission_interfaces::action::GoTo_Feedback::_distance_remaining_type arg)
  {
    msg_.distance_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::GoTo_Feedback>()
{
  return mission_interfaces::action::builder::Init_GoTo_Feedback_distance_remaining();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_GoTo_SendGoal_Request_goal
{
public:
  explicit Init_GoTo_SendGoal_Request_goal(::mission_interfaces::action::GoTo_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::GoTo_SendGoal_Request goal(::mission_interfaces::action::GoTo_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_SendGoal_Request msg_;
};

class Init_GoTo_SendGoal_Request_goal_id
{
public:
  Init_GoTo_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_SendGoal_Request_goal goal_id(::mission_interfaces::action::GoTo_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoTo_SendGoal_Request_goal(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::GoTo_SendGoal_Request>()
{
  return mission_interfaces::action::builder::Init_GoTo_SendGoal_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_GoTo_SendGoal_Response_stamp
{
public:
  explicit Init_GoTo_SendGoal_Response_stamp(::mission_interfaces::action::GoTo_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::GoTo_SendGoal_Response stamp(::mission_interfaces::action::GoTo_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_SendGoal_Response msg_;
};

class Init_GoTo_SendGoal_Response_accepted
{
public:
  Init_GoTo_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_SendGoal_Response_stamp accepted(::mission_interfaces::action::GoTo_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GoTo_SendGoal_Response_stamp(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::GoTo_SendGoal_Response>()
{
  return mission_interfaces::action::builder::Init_GoTo_SendGoal_Response_accepted();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_GoTo_SendGoal_Event_response
{
public:
  explicit Init_GoTo_SendGoal_Event_response(::mission_interfaces::action::GoTo_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::GoTo_SendGoal_Event response(::mission_interfaces::action::GoTo_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_SendGoal_Event msg_;
};

class Init_GoTo_SendGoal_Event_request
{
public:
  explicit Init_GoTo_SendGoal_Event_request(::mission_interfaces::action::GoTo_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_GoTo_SendGoal_Event_response request(::mission_interfaces::action::GoTo_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GoTo_SendGoal_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_SendGoal_Event msg_;
};

class Init_GoTo_SendGoal_Event_info
{
public:
  Init_GoTo_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_SendGoal_Event_request info(::mission_interfaces::action::GoTo_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GoTo_SendGoal_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::GoTo_SendGoal_Event>()
{
  return mission_interfaces::action::builder::Init_GoTo_SendGoal_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_GoTo_GetResult_Request_goal_id
{
public:
  Init_GoTo_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::GoTo_GetResult_Request goal_id(::mission_interfaces::action::GoTo_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::GoTo_GetResult_Request>()
{
  return mission_interfaces::action::builder::Init_GoTo_GetResult_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_GoTo_GetResult_Response_result
{
public:
  explicit Init_GoTo_GetResult_Response_result(::mission_interfaces::action::GoTo_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::GoTo_GetResult_Response result(::mission_interfaces::action::GoTo_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_GetResult_Response msg_;
};

class Init_GoTo_GetResult_Response_status
{
public:
  Init_GoTo_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_GetResult_Response_result status(::mission_interfaces::action::GoTo_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GoTo_GetResult_Response_result(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::GoTo_GetResult_Response>()
{
  return mission_interfaces::action::builder::Init_GoTo_GetResult_Response_status();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_GoTo_GetResult_Event_response
{
public:
  explicit Init_GoTo_GetResult_Event_response(::mission_interfaces::action::GoTo_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::GoTo_GetResult_Event response(::mission_interfaces::action::GoTo_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_GetResult_Event msg_;
};

class Init_GoTo_GetResult_Event_request
{
public:
  explicit Init_GoTo_GetResult_Event_request(::mission_interfaces::action::GoTo_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_GoTo_GetResult_Event_response request(::mission_interfaces::action::GoTo_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GoTo_GetResult_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_GetResult_Event msg_;
};

class Init_GoTo_GetResult_Event_info
{
public:
  Init_GoTo_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_GetResult_Event_request info(::mission_interfaces::action::GoTo_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GoTo_GetResult_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::GoTo_GetResult_Event>()
{
  return mission_interfaces::action::builder::Init_GoTo_GetResult_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_GoTo_FeedbackMessage_feedback
{
public:
  explicit Init_GoTo_FeedbackMessage_feedback(::mission_interfaces::action::GoTo_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::GoTo_FeedbackMessage feedback(::mission_interfaces::action::GoTo_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_FeedbackMessage msg_;
};

class Init_GoTo_FeedbackMessage_goal_id
{
public:
  Init_GoTo_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_FeedbackMessage_feedback goal_id(::mission_interfaces::action::GoTo_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoTo_FeedbackMessage_feedback(msg_);
  }

private:
  ::mission_interfaces::action::GoTo_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::GoTo_FeedbackMessage>()
{
  return mission_interfaces::action::builder::Init_GoTo_FeedbackMessage_goal_id();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__ACTION__DETAIL__GO_TO__BUILDER_HPP_
