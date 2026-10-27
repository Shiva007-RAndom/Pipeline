// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:action/TraverseCorridor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/traverse_corridor.hpp"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__TRAVERSE_CORRIDOR__BUILDER_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__TRAVERSE_CORRIDOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/action/detail/traverse_corridor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_TraverseCorridor_Goal_exit_altitude_z
{
public:
  explicit Init_TraverseCorridor_Goal_exit_altitude_z(::mission_interfaces::action::TraverseCorridor_Goal & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::TraverseCorridor_Goal exit_altitude_z(::mission_interfaces::action::TraverseCorridor_Goal::_exit_altitude_z_type arg)
  {
    msg_.exit_altitude_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_Goal msg_;
};

class Init_TraverseCorridor_Goal_settle_time
{
public:
  explicit Init_TraverseCorridor_Goal_settle_time(::mission_interfaces::action::TraverseCorridor_Goal & msg)
  : msg_(msg)
  {}
  Init_TraverseCorridor_Goal_exit_altitude_z settle_time(::mission_interfaces::action::TraverseCorridor_Goal::_settle_time_type arg)
  {
    msg_.settle_time = std::move(arg);
    return Init_TraverseCorridor_Goal_exit_altitude_z(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_Goal msg_;
};

class Init_TraverseCorridor_Goal_speed
{
public:
  explicit Init_TraverseCorridor_Goal_speed(::mission_interfaces::action::TraverseCorridor_Goal & msg)
  : msg_(msg)
  {}
  Init_TraverseCorridor_Goal_settle_time speed(::mission_interfaces::action::TraverseCorridor_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_TraverseCorridor_Goal_settle_time(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_Goal msg_;
};

class Init_TraverseCorridor_Goal_length
{
public:
  explicit Init_TraverseCorridor_Goal_length(::mission_interfaces::action::TraverseCorridor_Goal & msg)
  : msg_(msg)
  {}
  Init_TraverseCorridor_Goal_speed length(::mission_interfaces::action::TraverseCorridor_Goal::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_TraverseCorridor_Goal_speed(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_Goal msg_;
};

class Init_TraverseCorridor_Goal_altitude_z
{
public:
  explicit Init_TraverseCorridor_Goal_altitude_z(::mission_interfaces::action::TraverseCorridor_Goal & msg)
  : msg_(msg)
  {}
  Init_TraverseCorridor_Goal_length altitude_z(::mission_interfaces::action::TraverseCorridor_Goal::_altitude_z_type arg)
  {
    msg_.altitude_z = std::move(arg);
    return Init_TraverseCorridor_Goal_length(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_Goal msg_;
};

class Init_TraverseCorridor_Goal_heading
{
public:
  explicit Init_TraverseCorridor_Goal_heading(::mission_interfaces::action::TraverseCorridor_Goal & msg)
  : msg_(msg)
  {}
  Init_TraverseCorridor_Goal_altitude_z heading(::mission_interfaces::action::TraverseCorridor_Goal::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_TraverseCorridor_Goal_altitude_z(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_Goal msg_;
};

class Init_TraverseCorridor_Goal_entry
{
public:
  Init_TraverseCorridor_Goal_entry()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TraverseCorridor_Goal_heading entry(::mission_interfaces::action::TraverseCorridor_Goal::_entry_type arg)
  {
    msg_.entry = std::move(arg);
    return Init_TraverseCorridor_Goal_heading(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::TraverseCorridor_Goal>()
{
  return mission_interfaces::action::builder::Init_TraverseCorridor_Goal_entry();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_TraverseCorridor_Result_exit_position
{
public:
  explicit Init_TraverseCorridor_Result_exit_position(::mission_interfaces::action::TraverseCorridor_Result & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::TraverseCorridor_Result exit_position(::mission_interfaces::action::TraverseCorridor_Result::_exit_position_type arg)
  {
    msg_.exit_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_Result msg_;
};

class Init_TraverseCorridor_Result_message
{
public:
  explicit Init_TraverseCorridor_Result_message(::mission_interfaces::action::TraverseCorridor_Result & msg)
  : msg_(msg)
  {}
  Init_TraverseCorridor_Result_exit_position message(::mission_interfaces::action::TraverseCorridor_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_TraverseCorridor_Result_exit_position(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_Result msg_;
};

class Init_TraverseCorridor_Result_success
{
public:
  Init_TraverseCorridor_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TraverseCorridor_Result_message success(::mission_interfaces::action::TraverseCorridor_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TraverseCorridor_Result_message(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::TraverseCorridor_Result>()
{
  return mission_interfaces::action::builder::Init_TraverseCorridor_Result_success();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_TraverseCorridor_Feedback_state
{
public:
  Init_TraverseCorridor_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::TraverseCorridor_Feedback state(::mission_interfaces::action::TraverseCorridor_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::TraverseCorridor_Feedback>()
{
  return mission_interfaces::action::builder::Init_TraverseCorridor_Feedback_state();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_TraverseCorridor_SendGoal_Request_goal
{
public:
  explicit Init_TraverseCorridor_SendGoal_Request_goal(::mission_interfaces::action::TraverseCorridor_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::TraverseCorridor_SendGoal_Request goal(::mission_interfaces::action::TraverseCorridor_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_SendGoal_Request msg_;
};

class Init_TraverseCorridor_SendGoal_Request_goal_id
{
public:
  Init_TraverseCorridor_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TraverseCorridor_SendGoal_Request_goal goal_id(::mission_interfaces::action::TraverseCorridor_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TraverseCorridor_SendGoal_Request_goal(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::TraverseCorridor_SendGoal_Request>()
{
  return mission_interfaces::action::builder::Init_TraverseCorridor_SendGoal_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_TraverseCorridor_SendGoal_Response_stamp
{
public:
  explicit Init_TraverseCorridor_SendGoal_Response_stamp(::mission_interfaces::action::TraverseCorridor_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::TraverseCorridor_SendGoal_Response stamp(::mission_interfaces::action::TraverseCorridor_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_SendGoal_Response msg_;
};

class Init_TraverseCorridor_SendGoal_Response_accepted
{
public:
  Init_TraverseCorridor_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TraverseCorridor_SendGoal_Response_stamp accepted(::mission_interfaces::action::TraverseCorridor_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TraverseCorridor_SendGoal_Response_stamp(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::TraverseCorridor_SendGoal_Response>()
{
  return mission_interfaces::action::builder::Init_TraverseCorridor_SendGoal_Response_accepted();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_TraverseCorridor_SendGoal_Event_response
{
public:
  explicit Init_TraverseCorridor_SendGoal_Event_response(::mission_interfaces::action::TraverseCorridor_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::TraverseCorridor_SendGoal_Event response(::mission_interfaces::action::TraverseCorridor_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_SendGoal_Event msg_;
};

class Init_TraverseCorridor_SendGoal_Event_request
{
public:
  explicit Init_TraverseCorridor_SendGoal_Event_request(::mission_interfaces::action::TraverseCorridor_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_TraverseCorridor_SendGoal_Event_response request(::mission_interfaces::action::TraverseCorridor_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TraverseCorridor_SendGoal_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_SendGoal_Event msg_;
};

class Init_TraverseCorridor_SendGoal_Event_info
{
public:
  Init_TraverseCorridor_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TraverseCorridor_SendGoal_Event_request info(::mission_interfaces::action::TraverseCorridor_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TraverseCorridor_SendGoal_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::TraverseCorridor_SendGoal_Event>()
{
  return mission_interfaces::action::builder::Init_TraverseCorridor_SendGoal_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_TraverseCorridor_GetResult_Request_goal_id
{
public:
  Init_TraverseCorridor_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::TraverseCorridor_GetResult_Request goal_id(::mission_interfaces::action::TraverseCorridor_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::TraverseCorridor_GetResult_Request>()
{
  return mission_interfaces::action::builder::Init_TraverseCorridor_GetResult_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_TraverseCorridor_GetResult_Response_result
{
public:
  explicit Init_TraverseCorridor_GetResult_Response_result(::mission_interfaces::action::TraverseCorridor_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::TraverseCorridor_GetResult_Response result(::mission_interfaces::action::TraverseCorridor_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_GetResult_Response msg_;
};

class Init_TraverseCorridor_GetResult_Response_status
{
public:
  Init_TraverseCorridor_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TraverseCorridor_GetResult_Response_result status(::mission_interfaces::action::TraverseCorridor_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TraverseCorridor_GetResult_Response_result(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::TraverseCorridor_GetResult_Response>()
{
  return mission_interfaces::action::builder::Init_TraverseCorridor_GetResult_Response_status();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_TraverseCorridor_GetResult_Event_response
{
public:
  explicit Init_TraverseCorridor_GetResult_Event_response(::mission_interfaces::action::TraverseCorridor_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::TraverseCorridor_GetResult_Event response(::mission_interfaces::action::TraverseCorridor_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_GetResult_Event msg_;
};

class Init_TraverseCorridor_GetResult_Event_request
{
public:
  explicit Init_TraverseCorridor_GetResult_Event_request(::mission_interfaces::action::TraverseCorridor_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_TraverseCorridor_GetResult_Event_response request(::mission_interfaces::action::TraverseCorridor_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TraverseCorridor_GetResult_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_GetResult_Event msg_;
};

class Init_TraverseCorridor_GetResult_Event_info
{
public:
  Init_TraverseCorridor_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TraverseCorridor_GetResult_Event_request info(::mission_interfaces::action::TraverseCorridor_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TraverseCorridor_GetResult_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::TraverseCorridor_GetResult_Event>()
{
  return mission_interfaces::action::builder::Init_TraverseCorridor_GetResult_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_TraverseCorridor_FeedbackMessage_feedback
{
public:
  explicit Init_TraverseCorridor_FeedbackMessage_feedback(::mission_interfaces::action::TraverseCorridor_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::TraverseCorridor_FeedbackMessage feedback(::mission_interfaces::action::TraverseCorridor_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_FeedbackMessage msg_;
};

class Init_TraverseCorridor_FeedbackMessage_goal_id
{
public:
  Init_TraverseCorridor_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TraverseCorridor_FeedbackMessage_feedback goal_id(::mission_interfaces::action::TraverseCorridor_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TraverseCorridor_FeedbackMessage_feedback(msg_);
  }

private:
  ::mission_interfaces::action::TraverseCorridor_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::TraverseCorridor_FeedbackMessage>()
{
  return mission_interfaces::action::builder::Init_TraverseCorridor_FeedbackMessage_goal_id();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__ACTION__DETAIL__TRAVERSE_CORRIDOR__BUILDER_HPP_
