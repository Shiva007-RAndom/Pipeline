// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mission_interfaces:action/AlignBanner.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/align_banner.hpp"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__ALIGN_BANNER__STRUCT_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__ALIGN_BANNER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'initial_target'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__AlignBanner_Goal __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__AlignBanner_Goal __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AlignBanner_Goal_
{
  using Type = AlignBanner_Goal_<ContainerAllocator>;

  explicit AlignBanner_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : initial_target(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
      this->expected_heading = 0.0f;
      this->max_heading_correction = 0.0f;
      this->max_iters = 0;
      this->tol_px = 0.0f;
      this->gain = 0.0f;
      this->settle_time = 0.0f;
    }
  }

  explicit AlignBanner_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_alloc),
    initial_target(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
      this->expected_heading = 0.0f;
      this->max_heading_correction = 0.0f;
      this->max_iters = 0;
      this->tol_px = 0.0f;
      this->gain = 0.0f;
      this->settle_time = 0.0f;
    }
  }

  // field types and members
  using _color_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _color_type color;
  using _initial_target_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _initial_target_type initial_target;
  using _expected_heading_type =
    float;
  _expected_heading_type expected_heading;
  using _max_heading_correction_type =
    float;
  _max_heading_correction_type max_heading_correction;
  using _max_iters_type =
    uint8_t;
  _max_iters_type max_iters;
  using _tol_px_type =
    float;
  _tol_px_type tol_px;
  using _gain_type =
    float;
  _gain_type gain;
  using _settle_time_type =
    float;
  _settle_time_type settle_time;

  // setters for named parameter idiom
  Type & set__color(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__initial_target(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->initial_target = _arg;
    return *this;
  }
  Type & set__expected_heading(
    const float & _arg)
  {
    this->expected_heading = _arg;
    return *this;
  }
  Type & set__max_heading_correction(
    const float & _arg)
  {
    this->max_heading_correction = _arg;
    return *this;
  }
  Type & set__max_iters(
    const uint8_t & _arg)
  {
    this->max_iters = _arg;
    return *this;
  }
  Type & set__tol_px(
    const float & _arg)
  {
    this->tol_px = _arg;
    return *this;
  }
  Type & set__gain(
    const float & _arg)
  {
    this->gain = _arg;
    return *this;
  }
  Type & set__settle_time(
    const float & _arg)
  {
    this->settle_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::AlignBanner_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::AlignBanner_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_Goal
    std::shared_ptr<mission_interfaces::action::AlignBanner_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_Goal
    std::shared_ptr<mission_interfaces::action::AlignBanner_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlignBanner_Goal_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    if (this->initial_target != other.initial_target) {
      return false;
    }
    if (this->expected_heading != other.expected_heading) {
      return false;
    }
    if (this->max_heading_correction != other.max_heading_correction) {
      return false;
    }
    if (this->max_iters != other.max_iters) {
      return false;
    }
    if (this->tol_px != other.tol_px) {
      return false;
    }
    if (this->gain != other.gain) {
      return false;
    }
    if (this->settle_time != other.settle_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlignBanner_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlignBanner_Goal_

// alias to use template instance with default allocator
using AlignBanner_Goal =
  mission_interfaces::action::AlignBanner_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'banner_position'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__AlignBanner_Result __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__AlignBanner_Result __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AlignBanner_Result_
{
  using Type = AlignBanner_Result_<ContainerAllocator>;

  explicit AlignBanner_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : banner_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->locked = false;
      this->heading_measured = false;
      this->corridor_heading = 0.0f;
    }
  }

  explicit AlignBanner_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    banner_position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->locked = false;
      this->heading_measured = false;
      this->corridor_heading = 0.0f;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _locked_type =
    bool;
  _locked_type locked;
  using _heading_measured_type =
    bool;
  _heading_measured_type heading_measured;
  using _corridor_heading_type =
    float;
  _corridor_heading_type corridor_heading;
  using _banner_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _banner_position_type banner_position;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__locked(
    const bool & _arg)
  {
    this->locked = _arg;
    return *this;
  }
  Type & set__heading_measured(
    const bool & _arg)
  {
    this->heading_measured = _arg;
    return *this;
  }
  Type & set__corridor_heading(
    const float & _arg)
  {
    this->corridor_heading = _arg;
    return *this;
  }
  Type & set__banner_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->banner_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::AlignBanner_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::AlignBanner_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_Result
    std::shared_ptr<mission_interfaces::action::AlignBanner_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_Result
    std::shared_ptr<mission_interfaces::action::AlignBanner_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlignBanner_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->locked != other.locked) {
      return false;
    }
    if (this->heading_measured != other.heading_measured) {
      return false;
    }
    if (this->corridor_heading != other.corridor_heading) {
      return false;
    }
    if (this->banner_position != other.banner_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlignBanner_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlignBanner_Result_

// alias to use template instance with default allocator
using AlignBanner_Result =
  mission_interfaces::action::AlignBanner_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__AlignBanner_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__AlignBanner_Feedback __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AlignBanner_Feedback_
{
  using Type = AlignBanner_Feedback_<ContainerAllocator>;

  explicit AlignBanner_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->iteration = 0;
      this->error_px = 0.0f;
      this->partial = false;
    }
  }

  explicit AlignBanner_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->iteration = 0;
      this->error_px = 0.0f;
      this->partial = false;
    }
  }

  // field types and members
  using _iteration_type =
    uint8_t;
  _iteration_type iteration;
  using _error_px_type =
    float;
  _error_px_type error_px;
  using _partial_type =
    bool;
  _partial_type partial;

  // setters for named parameter idiom
  Type & set__iteration(
    const uint8_t & _arg)
  {
    this->iteration = _arg;
    return *this;
  }
  Type & set__error_px(
    const float & _arg)
  {
    this->error_px = _arg;
    return *this;
  }
  Type & set__partial(
    const bool & _arg)
  {
    this->partial = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::AlignBanner_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::AlignBanner_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_Feedback
    std::shared_ptr<mission_interfaces::action::AlignBanner_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_Feedback
    std::shared_ptr<mission_interfaces::action::AlignBanner_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlignBanner_Feedback_ & other) const
  {
    if (this->iteration != other.iteration) {
      return false;
    }
    if (this->error_px != other.error_px) {
      return false;
    }
    if (this->partial != other.partial) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlignBanner_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlignBanner_Feedback_

// alias to use template instance with default allocator
using AlignBanner_Feedback =
  mission_interfaces::action::AlignBanner_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "mission_interfaces/action/detail/align_banner__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__AlignBanner_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__AlignBanner_SendGoal_Request __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AlignBanner_SendGoal_Request_
{
  using Type = AlignBanner_SendGoal_Request_<ContainerAllocator>;

  explicit AlignBanner_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit AlignBanner_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    mission_interfaces::action::AlignBanner_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const mission_interfaces::action::AlignBanner_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_SendGoal_Request
    std::shared_ptr<mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_SendGoal_Request
    std::shared_ptr<mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlignBanner_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlignBanner_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlignBanner_SendGoal_Request_

// alias to use template instance with default allocator
using AlignBanner_SendGoal_Request =
  mission_interfaces::action::AlignBanner_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__AlignBanner_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__AlignBanner_SendGoal_Response __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AlignBanner_SendGoal_Response_
{
  using Type = AlignBanner_SendGoal_Response_<ContainerAllocator>;

  explicit AlignBanner_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit AlignBanner_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_SendGoal_Response
    std::shared_ptr<mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_SendGoal_Response
    std::shared_ptr<mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlignBanner_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlignBanner_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlignBanner_SendGoal_Response_

// alias to use template instance with default allocator
using AlignBanner_SendGoal_Response =
  mission_interfaces::action::AlignBanner_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__AlignBanner_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__AlignBanner_SendGoal_Event __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AlignBanner_SendGoal_Event_
{
  using Type = AlignBanner_SendGoal_Event_<ContainerAllocator>;

  explicit AlignBanner_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit AlignBanner_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::AlignBanner_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::AlignBanner_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::AlignBanner_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::AlignBanner_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_SendGoal_Event
    std::shared_ptr<mission_interfaces::action::AlignBanner_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_SendGoal_Event
    std::shared_ptr<mission_interfaces::action::AlignBanner_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlignBanner_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlignBanner_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlignBanner_SendGoal_Event_

// alias to use template instance with default allocator
using AlignBanner_SendGoal_Event =
  mission_interfaces::action::AlignBanner_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces

namespace mission_interfaces
{

namespace action
{

struct AlignBanner_SendGoal
{
  using Request = mission_interfaces::action::AlignBanner_SendGoal_Request;
  using Response = mission_interfaces::action::AlignBanner_SendGoal_Response;
  using Event = mission_interfaces::action::AlignBanner_SendGoal_Event;
};

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__AlignBanner_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__AlignBanner_GetResult_Request __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AlignBanner_GetResult_Request_
{
  using Type = AlignBanner_GetResult_Request_<ContainerAllocator>;

  explicit AlignBanner_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit AlignBanner_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_GetResult_Request
    std::shared_ptr<mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_GetResult_Request
    std::shared_ptr<mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlignBanner_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlignBanner_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlignBanner_GetResult_Request_

// alias to use template instance with default allocator
using AlignBanner_GetResult_Request =
  mission_interfaces::action::AlignBanner_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/align_banner__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__AlignBanner_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__AlignBanner_GetResult_Response __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AlignBanner_GetResult_Response_
{
  using Type = AlignBanner_GetResult_Response_<ContainerAllocator>;

  explicit AlignBanner_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit AlignBanner_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    mission_interfaces::action::AlignBanner_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const mission_interfaces::action::AlignBanner_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_GetResult_Response
    std::shared_ptr<mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_GetResult_Response
    std::shared_ptr<mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlignBanner_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlignBanner_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlignBanner_GetResult_Response_

// alias to use template instance with default allocator
using AlignBanner_GetResult_Response =
  mission_interfaces::action::AlignBanner_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__AlignBanner_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__AlignBanner_GetResult_Event __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AlignBanner_GetResult_Event_
{
  using Type = AlignBanner_GetResult_Event_<ContainerAllocator>;

  explicit AlignBanner_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit AlignBanner_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::AlignBanner_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::AlignBanner_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::AlignBanner_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::AlignBanner_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_GetResult_Event
    std::shared_ptr<mission_interfaces::action::AlignBanner_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_GetResult_Event
    std::shared_ptr<mission_interfaces::action::AlignBanner_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlignBanner_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlignBanner_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlignBanner_GetResult_Event_

// alias to use template instance with default allocator
using AlignBanner_GetResult_Event =
  mission_interfaces::action::AlignBanner_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces

namespace mission_interfaces
{

namespace action
{

struct AlignBanner_GetResult
{
  using Request = mission_interfaces::action::AlignBanner_GetResult_Request;
  using Response = mission_interfaces::action::AlignBanner_GetResult_Response;
  using Event = mission_interfaces::action::AlignBanner_GetResult_Event;
};

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "mission_interfaces/action/detail/align_banner__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__AlignBanner_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__AlignBanner_FeedbackMessage __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AlignBanner_FeedbackMessage_
{
  using Type = AlignBanner_FeedbackMessage_<ContainerAllocator>;

  explicit AlignBanner_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit AlignBanner_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    mission_interfaces::action::AlignBanner_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const mission_interfaces::action::AlignBanner_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::AlignBanner_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::AlignBanner_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::AlignBanner_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::AlignBanner_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::AlignBanner_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::AlignBanner_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_FeedbackMessage
    std::shared_ptr<mission_interfaces::action::AlignBanner_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__AlignBanner_FeedbackMessage
    std::shared_ptr<mission_interfaces::action::AlignBanner_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlignBanner_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlignBanner_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlignBanner_FeedbackMessage_

// alias to use template instance with default allocator
using AlignBanner_FeedbackMessage =
  mission_interfaces::action::AlignBanner_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace mission_interfaces
{

namespace action
{

struct AlignBanner
{
  /// The goal message defined in the action definition.
  using Goal = mission_interfaces::action::AlignBanner_Goal;
  /// The result message defined in the action definition.
  using Result = mission_interfaces::action::AlignBanner_Result;
  /// The feedback message defined in the action definition.
  using Feedback = mission_interfaces::action::AlignBanner_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = mission_interfaces::action::AlignBanner_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = mission_interfaces::action::AlignBanner_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = mission_interfaces::action::AlignBanner_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct AlignBanner AlignBanner;

}  // namespace action

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__ACTION__DETAIL__ALIGN_BANNER__STRUCT_HPP_
