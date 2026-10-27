// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:action/CaptureReference.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/capture_reference.hpp"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__CAPTURE_REFERENCE__BUILDER_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__CAPTURE_REFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/action/detail/capture_reference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CaptureReference_Goal>()
{
  return ::mission_interfaces::action::CaptureReference_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CaptureReference_Result_decoded_text
{
public:
  explicit Init_CaptureReference_Result_decoded_text(::mission_interfaces::action::CaptureReference_Result & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CaptureReference_Result decoded_text(::mission_interfaces::action::CaptureReference_Result::_decoded_text_type arg)
  {
    msg_.decoded_text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_Result msg_;
};

class Init_CaptureReference_Result_image_path
{
public:
  explicit Init_CaptureReference_Result_image_path(::mission_interfaces::action::CaptureReference_Result & msg)
  : msg_(msg)
  {}
  Init_CaptureReference_Result_decoded_text image_path(::mission_interfaces::action::CaptureReference_Result::_image_path_type arg)
  {
    msg_.image_path = std::move(arg);
    return Init_CaptureReference_Result_decoded_text(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_Result msg_;
};

class Init_CaptureReference_Result_message
{
public:
  explicit Init_CaptureReference_Result_message(::mission_interfaces::action::CaptureReference_Result & msg)
  : msg_(msg)
  {}
  Init_CaptureReference_Result_image_path message(::mission_interfaces::action::CaptureReference_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CaptureReference_Result_image_path(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_Result msg_;
};

class Init_CaptureReference_Result_success
{
public:
  Init_CaptureReference_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureReference_Result_message success(::mission_interfaces::action::CaptureReference_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CaptureReference_Result_message(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CaptureReference_Result>()
{
  return mission_interfaces::action::builder::Init_CaptureReference_Result_success();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CaptureReference_Feedback_elapsed
{
public:
  Init_CaptureReference_Feedback_elapsed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::CaptureReference_Feedback elapsed(::mission_interfaces::action::CaptureReference_Feedback::_elapsed_type arg)
  {
    msg_.elapsed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CaptureReference_Feedback>()
{
  return mission_interfaces::action::builder::Init_CaptureReference_Feedback_elapsed();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CaptureReference_SendGoal_Request_goal
{
public:
  explicit Init_CaptureReference_SendGoal_Request_goal(::mission_interfaces::action::CaptureReference_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CaptureReference_SendGoal_Request goal(::mission_interfaces::action::CaptureReference_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_SendGoal_Request msg_;
};

class Init_CaptureReference_SendGoal_Request_goal_id
{
public:
  Init_CaptureReference_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureReference_SendGoal_Request_goal goal_id(::mission_interfaces::action::CaptureReference_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CaptureReference_SendGoal_Request_goal(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CaptureReference_SendGoal_Request>()
{
  return mission_interfaces::action::builder::Init_CaptureReference_SendGoal_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CaptureReference_SendGoal_Response_stamp
{
public:
  explicit Init_CaptureReference_SendGoal_Response_stamp(::mission_interfaces::action::CaptureReference_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CaptureReference_SendGoal_Response stamp(::mission_interfaces::action::CaptureReference_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_SendGoal_Response msg_;
};

class Init_CaptureReference_SendGoal_Response_accepted
{
public:
  Init_CaptureReference_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureReference_SendGoal_Response_stamp accepted(::mission_interfaces::action::CaptureReference_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CaptureReference_SendGoal_Response_stamp(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CaptureReference_SendGoal_Response>()
{
  return mission_interfaces::action::builder::Init_CaptureReference_SendGoal_Response_accepted();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CaptureReference_SendGoal_Event_response
{
public:
  explicit Init_CaptureReference_SendGoal_Event_response(::mission_interfaces::action::CaptureReference_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CaptureReference_SendGoal_Event response(::mission_interfaces::action::CaptureReference_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_SendGoal_Event msg_;
};

class Init_CaptureReference_SendGoal_Event_request
{
public:
  explicit Init_CaptureReference_SendGoal_Event_request(::mission_interfaces::action::CaptureReference_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_CaptureReference_SendGoal_Event_response request(::mission_interfaces::action::CaptureReference_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CaptureReference_SendGoal_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_SendGoal_Event msg_;
};

class Init_CaptureReference_SendGoal_Event_info
{
public:
  Init_CaptureReference_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureReference_SendGoal_Event_request info(::mission_interfaces::action::CaptureReference_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CaptureReference_SendGoal_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CaptureReference_SendGoal_Event>()
{
  return mission_interfaces::action::builder::Init_CaptureReference_SendGoal_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CaptureReference_GetResult_Request_goal_id
{
public:
  Init_CaptureReference_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::CaptureReference_GetResult_Request goal_id(::mission_interfaces::action::CaptureReference_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CaptureReference_GetResult_Request>()
{
  return mission_interfaces::action::builder::Init_CaptureReference_GetResult_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CaptureReference_GetResult_Response_result
{
public:
  explicit Init_CaptureReference_GetResult_Response_result(::mission_interfaces::action::CaptureReference_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CaptureReference_GetResult_Response result(::mission_interfaces::action::CaptureReference_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_GetResult_Response msg_;
};

class Init_CaptureReference_GetResult_Response_status
{
public:
  Init_CaptureReference_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureReference_GetResult_Response_result status(::mission_interfaces::action::CaptureReference_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CaptureReference_GetResult_Response_result(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CaptureReference_GetResult_Response>()
{
  return mission_interfaces::action::builder::Init_CaptureReference_GetResult_Response_status();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CaptureReference_GetResult_Event_response
{
public:
  explicit Init_CaptureReference_GetResult_Event_response(::mission_interfaces::action::CaptureReference_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CaptureReference_GetResult_Event response(::mission_interfaces::action::CaptureReference_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_GetResult_Event msg_;
};

class Init_CaptureReference_GetResult_Event_request
{
public:
  explicit Init_CaptureReference_GetResult_Event_request(::mission_interfaces::action::CaptureReference_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_CaptureReference_GetResult_Event_response request(::mission_interfaces::action::CaptureReference_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CaptureReference_GetResult_Event_response(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_GetResult_Event msg_;
};

class Init_CaptureReference_GetResult_Event_info
{
public:
  Init_CaptureReference_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureReference_GetResult_Event_request info(::mission_interfaces::action::CaptureReference_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CaptureReference_GetResult_Event_request(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CaptureReference_GetResult_Event>()
{
  return mission_interfaces::action::builder::Init_CaptureReference_GetResult_Event_info();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_CaptureReference_FeedbackMessage_feedback
{
public:
  explicit Init_CaptureReference_FeedbackMessage_feedback(::mission_interfaces::action::CaptureReference_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::CaptureReference_FeedbackMessage feedback(::mission_interfaces::action::CaptureReference_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_FeedbackMessage msg_;
};

class Init_CaptureReference_FeedbackMessage_goal_id
{
public:
  Init_CaptureReference_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureReference_FeedbackMessage_feedback goal_id(::mission_interfaces::action::CaptureReference_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CaptureReference_FeedbackMessage_feedback(msg_);
  }

private:
  ::mission_interfaces::action::CaptureReference_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::CaptureReference_FeedbackMessage>()
{
  return mission_interfaces::action::builder::Init_CaptureReference_FeedbackMessage_goal_id();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__ACTION__DETAIL__CAPTURE_REFERENCE__BUILDER_HPP_
