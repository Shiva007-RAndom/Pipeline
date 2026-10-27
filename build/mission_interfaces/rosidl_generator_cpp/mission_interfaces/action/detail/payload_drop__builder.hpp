// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:action/PayloadDrop.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/payload_drop.hpp"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__PAYLOAD_DROP__BUILDER_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__PAYLOAD_DROP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/action/detail/payload_drop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_PayloadDrop_Goal_interval
{
public:
  explicit Init_PayloadDrop_Goal_interval(::mission_interfaces::action::PayloadDrop_Goal & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::PayloadDrop_Goal interval(::mission_interfaces::action::PayloadDrop_Goal::_interval_type arg)
  {
    msg_.interval = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_Goal msg_;
};

class Init_PayloadDrop_Goal_close_pwm
{
public:
  explicit Init_PayloadDrop_Goal_close_pwm(::mission_interfaces::action::PayloadDrop_Goal & msg)
  : msg_(msg)
  {}
  Init_PayloadDrop_Goal_interval close_pwm(::mission_interfaces::action::PayloadDrop_Goal::_close_pwm_type arg)
  {
    msg_.close_pwm = std::move(arg);
    return Init_PayloadDrop_Goal_interval(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_Goal msg_;
};

class Init_PayloadDrop_Goal_open_pwm
{
public:
  explicit Init_PayloadDrop_Goal_open_pwm(::mission_interfaces::action::PayloadDrop_Goal & msg)
  : msg_(msg)
  {}
  Init_PayloadDrop_Goal_close_pwm open_pwm(::mission_interfaces::action::PayloadDrop_Goal::_open_pwm_type arg)
  {
    msg_.open_pwm = std::move(arg);
    return Init_PayloadDrop_Goal_close_pwm(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_Goal msg_;
};

class Init_PayloadDrop_Goal_channel
{
public:
  Init_PayloadDrop_Goal_channel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadDrop_Goal_open_pwm channel(::mission_interfaces::action::PayloadDrop_Goal::_channel_type arg)
  {
    msg_.channel = std::move(arg);
    return Init_PayloadDrop_Goal_open_pwm(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::PayloadDrop_Goal>()
{
  return mission_interfaces::action::builder::Init_PayloadDrop_Goal_channel();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_PayloadDrop_Result_payloads_delivered
{
public:
  explicit Init_PayloadDrop_Result_payloads_delivered(::mission_interfaces::action::PayloadDrop_Result & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::PayloadDrop_Result payloads_delivered(::mission_interfaces::action::PayloadDrop_Result::_payloads_delivered_type arg)
  {
    msg_.payloads_delivered = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_Result msg_;
};

class Init_PayloadDrop_Result_message
{
public:
  explicit Init_PayloadDrop_Result_message(::mission_interfaces::action::PayloadDrop_Result & msg)
  : msg_(msg)
  {}
  Init_PayloadDrop_Result_payloads_delivered message(::mission_interfaces::action::PayloadDrop_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_PayloadDrop_Result_payloads_delivered(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_Result msg_;
};

class Init_PayloadDrop_Result_success
{
public:
  Init_PayloadDrop_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadDrop_Result_message success(::mission_interfaces::action::PayloadDrop_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PayloadDrop_Result_message(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::PayloadDrop_Result>()
{
  return mission_interfaces::action::builder::Init_PayloadDrop_Result_success();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_PayloadDrop_Feedback_state
{
public:
  Init_PayloadDrop_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::PayloadDrop_Feedback state(::mission_interfaces::action::PayloadDrop_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::PayloadDrop_Feedback>()
{
  return mission_interfaces::action::builder::Init_PayloadDrop_Feedback_state();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_PayloadDrop_SendGoal_Request_goal
{
public:
  explicit Init_PayloadDrop_SendGoal_Request_goal(::mission_interfaces::action::PayloadDrop_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::PayloadDrop_SendGoal_Request goal(::mission_interfaces::action::PayloadDrop_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_SendGoal_Request msg_;
};

class Init_PayloadDrop_SendGoal_Request_goal_id
{
public:
  Init_PayloadDrop_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadDrop_SendGoal_Request_goal goal_id(::mission_interfaces::action::PayloadDrop_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PayloadDrop_SendGoal_Request_goal(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::PayloadDrop_SendGoal_Request>()
{
  return mission_interfaces::action::builder::Init_PayloadDrop_SendGoal_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_PayloadDrop_SendGoal_Response_stamp
{
public:
  explicit Init_PayloadDrop_SendGoal_Response_stamp(::mission_interfaces::action::PayloadDrop_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::PayloadDrop_SendGoal_Response stamp(::mission_interfaces::action::PayloadDrop_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_SendGoal_Response msg_;
};

class Init_PayloadDrop_SendGoal_Response_accepted
{
public:
  Init_PayloadDrop_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadDrop_SendGoal_Response_stamp accepted(::mission_interfaces::action::PayloadDrop_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PayloadDrop_SendGoal_Response_stamp(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::PayloadDrop_SendGoal_Response>()
{
  return mission_interfaces::action::builder::Init_PayloadDrop_SendGoal_Response_accepted();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_PayloadDrop_SendGoal_Event_response
{
public:
  explicit Init_PayloadDrop_SendGoal_Event_response(::mission_interfaces::action::PayloadDrop_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::PayloadDrop_SendGoal_Event response(::mission_interfaces::action::PayloadDrop_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_SendGoal_Event msg_;
};

class Init_PayloadDrop_SendGoal_Event_request
{
public:
  explicit Init_PayloadDrop_SendGoal_Event_request(::mission_interfaces::action::PayloadDrop_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_PayloadDrop_SendGoal_Event_response request(::mission_interfaces::action::PayloadDrop_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PayloadDrop_SendGoal_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_SendGoal_Event msg_;
};

class Init_PayloadDrop_SendGoal_Event_info
{
public:
  Init_PayloadDrop_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadDrop_SendGoal_Event_request info(::mission_interfaces::action::PayloadDrop_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PayloadDrop_SendGoal_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::PayloadDrop_SendGoal_Event>()
{
  return mission_interfaces::action::builder::Init_PayloadDrop_SendGoal_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_PayloadDrop_GetResult_Request_goal_id
{
public:
  Init_PayloadDrop_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::PayloadDrop_GetResult_Request goal_id(::mission_interfaces::action::PayloadDrop_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::PayloadDrop_GetResult_Request>()
{
  return mission_interfaces::action::builder::Init_PayloadDrop_GetResult_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_PayloadDrop_GetResult_Response_result
{
public:
  explicit Init_PayloadDrop_GetResult_Response_result(::mission_interfaces::action::PayloadDrop_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::PayloadDrop_GetResult_Response result(::mission_interfaces::action::PayloadDrop_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_GetResult_Response msg_;
};

class Init_PayloadDrop_GetResult_Response_status
{
public:
  Init_PayloadDrop_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadDrop_GetResult_Response_result status(::mission_interfaces::action::PayloadDrop_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PayloadDrop_GetResult_Response_result(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::PayloadDrop_GetResult_Response>()
{
  return mission_interfaces::action::builder::Init_PayloadDrop_GetResult_Response_status();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_PayloadDrop_GetResult_Event_response
{
public:
  explicit Init_PayloadDrop_GetResult_Event_response(::mission_interfaces::action::PayloadDrop_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::PayloadDrop_GetResult_Event response(::mission_interfaces::action::PayloadDrop_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_GetResult_Event msg_;
};

class Init_PayloadDrop_GetResult_Event_request
{
public:
  explicit Init_PayloadDrop_GetResult_Event_request(::mission_interfaces::action::PayloadDrop_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_PayloadDrop_GetResult_Event_response request(::mission_interfaces::action::PayloadDrop_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PayloadDrop_GetResult_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_GetResult_Event msg_;
};

class Init_PayloadDrop_GetResult_Event_info
{
public:
  Init_PayloadDrop_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadDrop_GetResult_Event_request info(::mission_interfaces::action::PayloadDrop_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PayloadDrop_GetResult_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::PayloadDrop_GetResult_Event>()
{
  return mission_interfaces::action::builder::Init_PayloadDrop_GetResult_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_PayloadDrop_FeedbackMessage_feedback
{
public:
  explicit Init_PayloadDrop_FeedbackMessage_feedback(::mission_interfaces::action::PayloadDrop_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::PayloadDrop_FeedbackMessage feedback(::mission_interfaces::action::PayloadDrop_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_FeedbackMessage msg_;
};

class Init_PayloadDrop_FeedbackMessage_goal_id
{
public:
  Init_PayloadDrop_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadDrop_FeedbackMessage_feedback goal_id(::mission_interfaces::action::PayloadDrop_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PayloadDrop_FeedbackMessage_feedback(msg_);
  }

private:
  ::mission_interfaces::action::PayloadDrop_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::PayloadDrop_FeedbackMessage>()
{
  return mission_interfaces::action::builder::Init_PayloadDrop_FeedbackMessage_goal_id();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__ACTION__DETAIL__PAYLOAD_DROP__BUILDER_HPP_
