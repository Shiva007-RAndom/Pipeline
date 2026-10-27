// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:srv/SetBannerColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/srv/set_banner_color.hpp"


#ifndef MISSION_INTERFACES__SRV__DETAIL__SET_BANNER_COLOR__BUILDER_HPP_
#define MISSION_INTERFACES__SRV__DETAIL__SET_BANNER_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/srv/detail/set_banner_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetBannerColor_Request_color
{
public:
  Init_SetBannerColor_Request_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::srv::SetBannerColor_Request color(::mission_interfaces::srv::SetBannerColor_Request::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::srv::SetBannerColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::srv::SetBannerColor_Request>()
{
  return mission_interfaces::srv::builder::Init_SetBannerColor_Request_color();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetBannerColor_Response_message
{
public:
  explicit Init_SetBannerColor_Response_message(::mission_interfaces::srv::SetBannerColor_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::srv::SetBannerColor_Response message(::mission_interfaces::srv::SetBannerColor_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::srv::SetBannerColor_Response msg_;
};

class Init_SetBannerColor_Response_success
{
public:
  Init_SetBannerColor_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBannerColor_Response_message success(::mission_interfaces::srv::SetBannerColor_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetBannerColor_Response_message(msg_);
  }

private:
  ::mission_interfaces::srv::SetBannerColor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::srv::SetBannerColor_Response>()
{
  return mission_interfaces::srv::builder::Init_SetBannerColor_Response_success();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetBannerColor_Event_response
{
public:
  explicit Init_SetBannerColor_Event_response(::mission_interfaces::srv::SetBannerColor_Event & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::srv::SetBannerColor_Event response(::mission_interfaces::srv::SetBannerColor_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::srv::SetBannerColor_Event msg_;
};

class Init_SetBannerColor_Event_request
{
public:
  explicit Init_SetBannerColor_Event_request(::mission_interfaces::srv::SetBannerColor_Event & msg)
  : msg_(msg)
  {}
  Init_SetBannerColor_Event_response request(::mission_interfaces::srv::SetBannerColor_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetBannerColor_Event_response(msg_);
  }

private:
  ::mission_interfaces::srv::SetBannerColor_Event msg_;
};

class Init_SetBannerColor_Event_info
{
public:
  Init_SetBannerColor_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBannerColor_Event_request info(::mission_interfaces::srv::SetBannerColor_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetBannerColor_Event_request(msg_);
  }

private:
  ::mission_interfaces::srv::SetBannerColor_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::srv::SetBannerColor_Event>()
{
  return mission_interfaces::srv::builder::Init_SetBannerColor_Event_info();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__SRV__DETAIL__SET_BANNER_COLOR__BUILDER_HPP_
