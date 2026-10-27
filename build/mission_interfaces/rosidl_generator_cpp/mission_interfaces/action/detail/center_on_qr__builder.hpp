// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:action/CenterOnQr.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/center_on_qr.hpp"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__CENTER_ON_QR__BUILDER_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__CENTER_ON_QR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/action/detail/center_on_qr__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CenterOnQr_Goal_any_qr
{
public:
  explicit Init_CenterOnQr_Goal_any_qr(::mission_interfaces::action::CenterOnQr_Goal & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CenterOnQr_Goal any_qr(::mission_interfaces::action::CenterOnQr_Goal::_any_qr_type arg)
  {
    msg_.any_qr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Goal msg_;
};

class Init_CenterOnQr_Goal_hold_gain
{
public:
  explicit Init_CenterOnQr_Goal_hold_gain(::mission_interfaces::action::CenterOnQr_Goal & msg)
  : msg_(msg)
  {}
  Init_CenterOnQr_Goal_any_qr hold_gain(::mission_interfaces::action::CenterOnQr_Goal::_hold_gain_type arg)
  {
    msg_.hold_gain = std::move(arg);
    return Init_CenterOnQr_Goal_any_qr(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Goal msg_;
};

class Init_CenterOnQr_Goal_hold_time
{
public:
  explicit Init_CenterOnQr_Goal_hold_time(::mission_interfaces::action::CenterOnQr_Goal & msg)
  : msg_(msg)
  {}
  Init_CenterOnQr_Goal_hold_gain hold_time(::mission_interfaces::action::CenterOnQr_Goal::_hold_time_type arg)
  {
    msg_.hold_time = std::move(arg);
    return Init_CenterOnQr_Goal_hold_gain(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Goal msg_;
};

class Init_CenterOnQr_Goal_approach_tolerance
{
public:
  explicit Init_CenterOnQr_Goal_approach_tolerance(::mission_interfaces::action::CenterOnQr_Goal & msg)
  : msg_(msg)
  {}
  Init_CenterOnQr_Goal_hold_time approach_tolerance(::mission_interfaces::action::CenterOnQr_Goal::_approach_tolerance_type arg)
  {
    msg_.approach_tolerance = std::move(arg);
    return Init_CenterOnQr_Goal_hold_time(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Goal msg_;
};

class Init_CenterOnQr_Goal_gain
{
public:
  explicit Init_CenterOnQr_Goal_gain(::mission_interfaces::action::CenterOnQr_Goal & msg)
  : msg_(msg)
  {}
  Init_CenterOnQr_Goal_approach_tolerance gain(::mission_interfaces::action::CenterOnQr_Goal::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return Init_CenterOnQr_Goal_approach_tolerance(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Goal msg_;
};

class Init_CenterOnQr_Goal_tol_px
{
public:
  explicit Init_CenterOnQr_Goal_tol_px(::mission_interfaces::action::CenterOnQr_Goal & msg)
  : msg_(msg)
  {}
  Init_CenterOnQr_Goal_gain tol_px(::mission_interfaces::action::CenterOnQr_Goal::_tol_px_type arg)
  {
    msg_.tol_px = std::move(arg);
    return Init_CenterOnQr_Goal_gain(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Goal msg_;
};

class Init_CenterOnQr_Goal_max_iters
{
public:
  explicit Init_CenterOnQr_Goal_max_iters(::mission_interfaces::action::CenterOnQr_Goal & msg)
  : msg_(msg)
  {}
  Init_CenterOnQr_Goal_tol_px max_iters(::mission_interfaces::action::CenterOnQr_Goal::_max_iters_type arg)
  {
    msg_.max_iters = std::move(arg);
    return Init_CenterOnQr_Goal_tol_px(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Goal msg_;
};

class Init_CenterOnQr_Goal_yaw
{
public:
  explicit Init_CenterOnQr_Goal_yaw(::mission_interfaces::action::CenterOnQr_Goal & msg)
  : msg_(msg)
  {}
  Init_CenterOnQr_Goal_max_iters yaw(::mission_interfaces::action::CenterOnQr_Goal::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_CenterOnQr_Goal_max_iters(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Goal msg_;
};

class Init_CenterOnQr_Goal_target
{
public:
  Init_CenterOnQr_Goal_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CenterOnQr_Goal_yaw target(::mission_interfaces::action::CenterOnQr_Goal::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_CenterOnQr_Goal_yaw(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CenterOnQr_Goal>()
{
  return mission_interfaces::action::builder::Init_CenterOnQr_Goal_target();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CenterOnQr_Result_position
{
public:
  explicit Init_CenterOnQr_Result_position(::mission_interfaces::action::CenterOnQr_Result & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CenterOnQr_Result position(::mission_interfaces::action::CenterOnQr_Result::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Result msg_;
};

class Init_CenterOnQr_Result_locked
{
public:
  explicit Init_CenterOnQr_Result_locked(::mission_interfaces::action::CenterOnQr_Result & msg)
  : msg_(msg)
  {}
  Init_CenterOnQr_Result_position locked(::mission_interfaces::action::CenterOnQr_Result::_locked_type arg)
  {
    msg_.locked = std::move(arg);
    return Init_CenterOnQr_Result_position(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Result msg_;
};

class Init_CenterOnQr_Result_message
{
public:
  explicit Init_CenterOnQr_Result_message(::mission_interfaces::action::CenterOnQr_Result & msg)
  : msg_(msg)
  {}
  Init_CenterOnQr_Result_locked message(::mission_interfaces::action::CenterOnQr_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CenterOnQr_Result_locked(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Result msg_;
};

class Init_CenterOnQr_Result_success
{
public:
  Init_CenterOnQr_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CenterOnQr_Result_message success(::mission_interfaces::action::CenterOnQr_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CenterOnQr_Result_message(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CenterOnQr_Result>()
{
  return mission_interfaces::action::builder::Init_CenterOnQr_Result_success();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CenterOnQr_Feedback_hold_remaining
{
public:
  explicit Init_CenterOnQr_Feedback_hold_remaining(::mission_interfaces::action::CenterOnQr_Feedback & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CenterOnQr_Feedback hold_remaining(::mission_interfaces::action::CenterOnQr_Feedback::_hold_remaining_type arg)
  {
    msg_.hold_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Feedback msg_;
};

class Init_CenterOnQr_Feedback_error_px
{
public:
  explicit Init_CenterOnQr_Feedback_error_px(::mission_interfaces::action::CenterOnQr_Feedback & msg)
  : msg_(msg)
  {}
  Init_CenterOnQr_Feedback_hold_remaining error_px(::mission_interfaces::action::CenterOnQr_Feedback::_error_px_type arg)
  {
    msg_.error_px = std::move(arg);
    return Init_CenterOnQr_Feedback_hold_remaining(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Feedback msg_;
};

class Init_CenterOnQr_Feedback_iteration
{
public:
  Init_CenterOnQr_Feedback_iteration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CenterOnQr_Feedback_error_px iteration(::mission_interfaces::action::CenterOnQr_Feedback::_iteration_type arg)
  {
    msg_.iteration = std::move(arg);
    return Init_CenterOnQr_Feedback_error_px(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CenterOnQr_Feedback>()
{
  return mission_interfaces::action::builder::Init_CenterOnQr_Feedback_iteration();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CenterOnQr_SendGoal_Request_goal
{
public:
  explicit Init_CenterOnQr_SendGoal_Request_goal(::mission_interfaces::action::CenterOnQr_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CenterOnQr_SendGoal_Request goal(::mission_interfaces::action::CenterOnQr_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_SendGoal_Request msg_;
};

class Init_CenterOnQr_SendGoal_Request_goal_id
{
public:
  Init_CenterOnQr_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CenterOnQr_SendGoal_Request_goal goal_id(::mission_interfaces::action::CenterOnQr_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CenterOnQr_SendGoal_Request_goal(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CenterOnQr_SendGoal_Request>()
{
  return mission_interfaces::action::builder::Init_CenterOnQr_SendGoal_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CenterOnQr_SendGoal_Response_stamp
{
public:
  explicit Init_CenterOnQr_SendGoal_Response_stamp(::mission_interfaces::action::CenterOnQr_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CenterOnQr_SendGoal_Response stamp(::mission_interfaces::action::CenterOnQr_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_SendGoal_Response msg_;
};

class Init_CenterOnQr_SendGoal_Response_accepted
{
public:
  Init_CenterOnQr_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CenterOnQr_SendGoal_Response_stamp accepted(::mission_interfaces::action::CenterOnQr_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CenterOnQr_SendGoal_Response_stamp(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CenterOnQr_SendGoal_Response>()
{
  return mission_interfaces::action::builder::Init_CenterOnQr_SendGoal_Response_accepted();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CenterOnQr_SendGoal_Event_response
{
public:
  explicit Init_CenterOnQr_SendGoal_Event_response(::mission_interfaces::action::CenterOnQr_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CenterOnQr_SendGoal_Event response(::mission_interfaces::action::CenterOnQr_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_SendGoal_Event msg_;
};

class Init_CenterOnQr_SendGoal_Event_request
{
public:
  explicit Init_CenterOnQr_SendGoal_Event_request(::mission_interfaces::action::CenterOnQr_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_CenterOnQr_SendGoal_Event_response request(::mission_interfaces::action::CenterOnQr_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CenterOnQr_SendGoal_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_SendGoal_Event msg_;
};

class Init_CenterOnQr_SendGoal_Event_info
{
public:
  Init_CenterOnQr_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CenterOnQr_SendGoal_Event_request info(::mission_interfaces::action::CenterOnQr_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CenterOnQr_SendGoal_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CenterOnQr_SendGoal_Event>()
{
  return mission_interfaces::action::builder::Init_CenterOnQr_SendGoal_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CenterOnQr_GetResult_Request_goal_id
{
public:
  Init_CenterOnQr_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::CenterOnQr_GetResult_Request goal_id(::mission_interfaces::action::CenterOnQr_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CenterOnQr_GetResult_Request>()
{
  return mission_interfaces::action::builder::Init_CenterOnQr_GetResult_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CenterOnQr_GetResult_Response_result
{
public:
  explicit Init_CenterOnQr_GetResult_Response_result(::mission_interfaces::action::CenterOnQr_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CenterOnQr_GetResult_Response result(::mission_interfaces::action::CenterOnQr_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_GetResult_Response msg_;
};

class Init_CenterOnQr_GetResult_Response_status
{
public:
  Init_CenterOnQr_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CenterOnQr_GetResult_Response_result status(::mission_interfaces::action::CenterOnQr_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CenterOnQr_GetResult_Response_result(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CenterOnQr_GetResult_Response>()
{
  return mission_interfaces::action::builder::Init_CenterOnQr_GetResult_Response_status();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CenterOnQr_GetResult_Event_response
{
public:
  explicit Init_CenterOnQr_GetResult_Event_response(::mission_interfaces::action::CenterOnQr_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CenterOnQr_GetResult_Event response(::mission_interfaces::action::CenterOnQr_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_GetResult_Event msg_;
};

class Init_CenterOnQr_GetResult_Event_request
{
public:
  explicit Init_CenterOnQr_GetResult_Event_request(::mission_interfaces::action::CenterOnQr_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_CenterOnQr_GetResult_Event_response request(::mission_interfaces::action::CenterOnQr_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CenterOnQr_GetResult_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_GetResult_Event msg_;
};

class Init_CenterOnQr_GetResult_Event_info
{
public:
  Init_CenterOnQr_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CenterOnQr_GetResult_Event_request info(::mission_interfaces::action::CenterOnQr_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CenterOnQr_GetResult_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CenterOnQr_GetResult_Event>()
{
  return mission_interfaces::action::builder::Init_CenterOnQr_GetResult_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CenterOnQr_FeedbackMessage_feedback
{
public:
  explicit Init_CenterOnQr_FeedbackMessage_feedback(::mission_interfaces::action::CenterOnQr_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CenterOnQr_FeedbackMessage feedback(::mission_interfaces::action::CenterOnQr_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_FeedbackMessage msg_;
};

class Init_CenterOnQr_FeedbackMessage_goal_id
{
public:
  Init_CenterOnQr_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CenterOnQr_FeedbackMessage_feedback goal_id(::mission_interfaces::action::CenterOnQr_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CenterOnQr_FeedbackMessage_feedback(msg_);
  }

private:
  ::mission_interfaces::action::CenterOnQr_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CenterOnQr_FeedbackMessage>()
{
  return mission_interfaces::action::builder::Init_CenterOnQr_FeedbackMessage_goal_id();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__ACTION__DETAIL__CENTER_ON_QR__BUILDER_HPP_
