// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/mission_status.hpp"


#ifndef MISSION_INTERFACES__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
#define MISSION_INTERFACES__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/msg/detail/mission_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace msg
{

namespace builder
{

class Init_MissionStatus_reference_ready
{
public:
  explicit Init_MissionStatus_reference_ready(::mission_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::msg::MissionStatus reference_ready(::mission_interfaces::msg::MissionStatus::_reference_ready_type arg)
  {
    msg_.reference_ready = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_countdown
{
public:
  explicit Init_MissionStatus_countdown(::mission_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_reference_ready countdown(::mission_interfaces::msg::MissionStatus::_countdown_type arg)
  {
    msg_.countdown = std::move(arg);
    return Init_MissionStatus_reference_ready(msg_);
  }

private:
  ::mission_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_state_text
{
public:
  explicit Init_MissionStatus_state_text(::mission_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_countdown state_text(::mission_interfaces::msg::MissionStatus::_state_text_type arg)
  {
    msg_.state_text = std::move(arg);
    return Init_MissionStatus_countdown(msg_);
  }

private:
  ::mission_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_stage
{
public:
  explicit Init_MissionStatus_stage(::mission_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_state_text stage(::mission_interfaces::msg::MissionStatus::_stage_type arg)
  {
    msg_.stage = std::move(arg);
    return Init_MissionStatus_state_text(msg_);
  }

private:
  ::mission_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_header
{
public:
  Init_MissionStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionStatus_stage header(::mission_interfaces::msg::MissionStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MissionStatus_stage(msg_);
  }

private:
  ::mission_interfaces::msg::MissionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::msg::MissionStatus>()
{
  return mission_interfaces::msg::builder::Init_MissionStatus_header();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
