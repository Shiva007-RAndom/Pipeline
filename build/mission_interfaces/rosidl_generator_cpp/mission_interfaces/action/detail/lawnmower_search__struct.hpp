// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mission_interfaces:action/LawnmowerSearch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/lawnmower_search.hpp"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__LAWNMOWER_SEARCH__STRUCT_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__LAWNMOWER_SEARCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_Goal __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_Goal __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LawnmowerSearch_Goal_
{
  using Type = LawnmowerSearch_Goal_<ContainerAllocator>;

  explicit LawnmowerSearch_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0f;
      this->length = 0.0f;
      this->row_step = 0.0f;
      this->rows = 0;
      this->speed = 0.0f;
      this->waypoint_tolerance = 0.0f;
    }
  }

  explicit LawnmowerSearch_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0f;
      this->length = 0.0f;
      this->row_step = 0.0f;
      this->rows = 0;
      this->speed = 0.0f;
      this->waypoint_tolerance = 0.0f;
    }
  }

  // field types and members
  using _start_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _start_type start;
  using _heading_type =
    float;
  _heading_type heading;
  using _length_type =
    float;
  _length_type length;
  using _row_step_type =
    float;
  _row_step_type row_step;
  using _rows_type =
    uint8_t;
  _rows_type rows;
  using _speed_type =
    float;
  _speed_type speed;
  using _waypoint_tolerance_type =
    float;
  _waypoint_tolerance_type waypoint_tolerance;

  // setters for named parameter idiom
  Type & set__start(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__row_step(
    const float & _arg)
  {
    this->row_step = _arg;
    return *this;
  }
  Type & set__rows(
    const uint8_t & _arg)
  {
    this->rows = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__waypoint_tolerance(
    const float & _arg)
  {
    this->waypoint_tolerance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::LawnmowerSearch_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::LawnmowerSearch_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_Goal
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_Goal
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LawnmowerSearch_Goal_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->row_step != other.row_step) {
      return false;
    }
    if (this->rows != other.rows) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->waypoint_tolerance != other.waypoint_tolerance) {
      return false;
    }
    return true;
  }
  bool operator!=(const LawnmowerSearch_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LawnmowerSearch_Goal_

// alias to use template instance with default allocator
using LawnmowerSearch_Goal =
  mission_interfaces::action::LawnmowerSearch_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'target'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_Result __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_Result __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LawnmowerSearch_Result_
{
  using Type = LawnmowerSearch_Result_<ContainerAllocator>;

  explicit LawnmowerSearch_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->decoded_text = "";
      this->score = 0.0f;
    }
  }

  explicit LawnmowerSearch_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    target(_alloc, _init),
    decoded_text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->decoded_text = "";
      this->score = 0.0f;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _target_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _target_type target;
  using _decoded_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _decoded_text_type decoded_text;
  using _score_type =
    float;
  _score_type score;

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
  Type & set__target(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__decoded_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->decoded_text = _arg;
    return *this;
  }
  Type & set__score(
    const float & _arg)
  {
    this->score = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::LawnmowerSearch_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::LawnmowerSearch_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_Result
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_Result
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LawnmowerSearch_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->target != other.target) {
      return false;
    }
    if (this->decoded_text != other.decoded_text) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    return true;
  }
  bool operator!=(const LawnmowerSearch_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LawnmowerSearch_Result_

// alias to use template instance with default allocator
using LawnmowerSearch_Result =
  mission_interfaces::action::LawnmowerSearch_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_Feedback __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LawnmowerSearch_Feedback_
{
  using Type = LawnmowerSearch_Feedback_<ContainerAllocator>;

  explicit LawnmowerSearch_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoint = 0ul;
      this->state = "";
    }
  }

  explicit LawnmowerSearch_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoint = 0ul;
      this->state = "";
    }
  }

  // field types and members
  using _waypoint_type =
    uint32_t;
  _waypoint_type waypoint;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__waypoint(
    const uint32_t & _arg)
  {
    this->waypoint = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::LawnmowerSearch_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::LawnmowerSearch_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_Feedback
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_Feedback
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LawnmowerSearch_Feedback_ & other) const
  {
    if (this->waypoint != other.waypoint) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const LawnmowerSearch_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LawnmowerSearch_Feedback_

// alias to use template instance with default allocator
using LawnmowerSearch_Feedback =
  mission_interfaces::action::LawnmowerSearch_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_SendGoal_Request __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LawnmowerSearch_SendGoal_Request_
{
  using Type = LawnmowerSearch_SendGoal_Request_<ContainerAllocator>;

  explicit LawnmowerSearch_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit LawnmowerSearch_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mission_interfaces::action::LawnmowerSearch_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const mission_interfaces::action::LawnmowerSearch_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_SendGoal_Request
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_SendGoal_Request
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LawnmowerSearch_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const LawnmowerSearch_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LawnmowerSearch_SendGoal_Request_

// alias to use template instance with default allocator
using LawnmowerSearch_SendGoal_Request =
  mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_SendGoal_Response __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LawnmowerSearch_SendGoal_Response_
{
  using Type = LawnmowerSearch_SendGoal_Response_<ContainerAllocator>;

  explicit LawnmowerSearch_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit LawnmowerSearch_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_SendGoal_Response
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_SendGoal_Response
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LawnmowerSearch_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const LawnmowerSearch_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LawnmowerSearch_SendGoal_Response_

// alias to use template instance with default allocator
using LawnmowerSearch_SendGoal_Response =
  mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_SendGoal_Event __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LawnmowerSearch_SendGoal_Event_
{
  using Type = LawnmowerSearch_SendGoal_Event_<ContainerAllocator>;

  explicit LawnmowerSearch_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit LawnmowerSearch_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::LawnmowerSearch_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::LawnmowerSearch_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::LawnmowerSearch_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::LawnmowerSearch_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_SendGoal_Event
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_SendGoal_Event
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LawnmowerSearch_SendGoal_Event_ & other) const
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
  bool operator!=(const LawnmowerSearch_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LawnmowerSearch_SendGoal_Event_

// alias to use template instance with default allocator
using LawnmowerSearch_SendGoal_Event =
  mission_interfaces::action::LawnmowerSearch_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces

namespace mission_interfaces
{

namespace action
{

struct LawnmowerSearch_SendGoal
{
  using Request = mission_interfaces::action::LawnmowerSearch_SendGoal_Request;
  using Response = mission_interfaces::action::LawnmowerSearch_SendGoal_Response;
  using Event = mission_interfaces::action::LawnmowerSearch_SendGoal_Event;
};

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_GetResult_Request __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LawnmowerSearch_GetResult_Request_
{
  using Type = LawnmowerSearch_GetResult_Request_<ContainerAllocator>;

  explicit LawnmowerSearch_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit LawnmowerSearch_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_GetResult_Request
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_GetResult_Request
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LawnmowerSearch_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const LawnmowerSearch_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LawnmowerSearch_GetResult_Request_

// alias to use template instance with default allocator
using LawnmowerSearch_GetResult_Request =
  mission_interfaces::action::LawnmowerSearch_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_GetResult_Response __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LawnmowerSearch_GetResult_Response_
{
  using Type = LawnmowerSearch_GetResult_Response_<ContainerAllocator>;

  explicit LawnmowerSearch_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit LawnmowerSearch_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mission_interfaces::action::LawnmowerSearch_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const mission_interfaces::action::LawnmowerSearch_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_GetResult_Response
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_GetResult_Response
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LawnmowerSearch_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const LawnmowerSearch_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LawnmowerSearch_GetResult_Response_

// alias to use template instance with default allocator
using LawnmowerSearch_GetResult_Response =
  mission_interfaces::action::LawnmowerSearch_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_GetResult_Event __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LawnmowerSearch_GetResult_Event_
{
  using Type = LawnmowerSearch_GetResult_Event_<ContainerAllocator>;

  explicit LawnmowerSearch_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit LawnmowerSearch_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::LawnmowerSearch_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::LawnmowerSearch_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::LawnmowerSearch_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::LawnmowerSearch_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_GetResult_Event
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_GetResult_Event
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LawnmowerSearch_GetResult_Event_ & other) const
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
  bool operator!=(const LawnmowerSearch_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LawnmowerSearch_GetResult_Event_

// alias to use template instance with default allocator
using LawnmowerSearch_GetResult_Event =
  mission_interfaces::action::LawnmowerSearch_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces

namespace mission_interfaces
{

namespace action
{

struct LawnmowerSearch_GetResult
{
  using Request = mission_interfaces::action::LawnmowerSearch_GetResult_Request;
  using Response = mission_interfaces::action::LawnmowerSearch_GetResult_Response;
  using Event = mission_interfaces::action::LawnmowerSearch_GetResult_Event;
};

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__LawnmowerSearch_FeedbackMessage __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LawnmowerSearch_FeedbackMessage_
{
  using Type = LawnmowerSearch_FeedbackMessage_<ContainerAllocator>;

  explicit LawnmowerSearch_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit LawnmowerSearch_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mission_interfaces::action::LawnmowerSearch_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const mission_interfaces::action::LawnmowerSearch_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::LawnmowerSearch_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::LawnmowerSearch_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::LawnmowerSearch_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::LawnmowerSearch_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::LawnmowerSearch_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_FeedbackMessage
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__LawnmowerSearch_FeedbackMessage
    std::shared_ptr<mission_interfaces::action::LawnmowerSearch_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LawnmowerSearch_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const LawnmowerSearch_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LawnmowerSearch_FeedbackMessage_

// alias to use template instance with default allocator
using LawnmowerSearch_FeedbackMessage =
  mission_interfaces::action::LawnmowerSearch_FeedbackMessage_<std::allocator<void>>;

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

struct LawnmowerSearch
{
  /// The goal message defined in the action definition.
  using Goal = mission_interfaces::action::LawnmowerSearch_Goal;
  /// The result message defined in the action definition.
  using Result = mission_interfaces::action::LawnmowerSearch_Result;
  /// The feedback message defined in the action definition.
  using Feedback = mission_interfaces::action::LawnmowerSearch_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = mission_interfaces::action::LawnmowerSearch_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = mission_interfaces::action::LawnmowerSearch_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = mission_interfaces::action::LawnmowerSearch_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct LawnmowerSearch LawnmowerSearch;

}  // namespace action

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__ACTION__DETAIL__LAWNMOWER_SEARCH__STRUCT_HPP_
