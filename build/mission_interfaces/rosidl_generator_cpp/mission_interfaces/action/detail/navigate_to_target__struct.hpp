// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mission_interfaces:action/NavigateToTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/navigate_to_target.hpp"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_TARGET__STRUCT_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_Goal __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_Goal __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToTarget_Goal_
{
  using Type = NavigateToTarget_Goal_<ContainerAllocator>;

  explicit NavigateToTarget_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->z = 0.0f;
      this->yaw = 0.0f;
      this->speed = 0.0f;
      this->tolerance = 0.0f;
    }
  }

  explicit NavigateToTarget_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->z = 0.0f;
      this->yaw = 0.0f;
      this->speed = 0.0f;
      this->tolerance = 0.0f;
    }
  }

  // field types and members
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _z_type =
    float;
  _z_type z;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _speed_type =
    float;
  _speed_type speed;
  using _tolerance_type =
    float;
  _tolerance_type tolerance;

  // setters for named parameter idiom
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__tolerance(
    const float & _arg)
  {
    this->tolerance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::NavigateToTarget_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::NavigateToTarget_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_Goal
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_Goal
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToTarget_Goal_ & other) const
  {
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->tolerance != other.tolerance) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToTarget_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToTarget_Goal_

// alias to use template instance with default allocator
using NavigateToTarget_Goal =
  mission_interfaces::action::NavigateToTarget_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'target'
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_Result __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_Result __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToTarget_Result_
{
  using Type = NavigateToTarget_Result_<ContainerAllocator>;

  explicit NavigateToTarget_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init),
    position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->detoured = false;
    }
  }

  explicit NavigateToTarget_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    target(_alloc, _init),
    position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->detoured = false;
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
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _detoured_type =
    bool;
  _detoured_type detoured;

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
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__detoured(
    const bool & _arg)
  {
    this->detoured = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::NavigateToTarget_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::NavigateToTarget_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_Result
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_Result
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToTarget_Result_ & other) const
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
    if (this->position != other.position) {
      return false;
    }
    if (this->detoured != other.detoured) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToTarget_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToTarget_Result_

// alias to use template instance with default allocator
using NavigateToTarget_Result =
  mission_interfaces::action::NavigateToTarget_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_Feedback __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToTarget_Feedback_
{
  using Type = NavigateToTarget_Feedback_<ContainerAllocator>;

  explicit NavigateToTarget_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->distance = 0.0f;
    }
  }

  explicit NavigateToTarget_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::NavigateToTarget_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::NavigateToTarget_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_Feedback
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_Feedback
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToTarget_Feedback_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToTarget_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToTarget_Feedback_

// alias to use template instance with default allocator
using NavigateToTarget_Feedback =
  mission_interfaces::action::NavigateToTarget_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "mission_interfaces/action/detail/navigate_to_target__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_SendGoal_Request __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToTarget_SendGoal_Request_
{
  using Type = NavigateToTarget_SendGoal_Request_<ContainerAllocator>;

  explicit NavigateToTarget_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit NavigateToTarget_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mission_interfaces::action::NavigateToTarget_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const mission_interfaces::action::NavigateToTarget_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_SendGoal_Request
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_SendGoal_Request
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToTarget_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToTarget_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToTarget_SendGoal_Request_

// alias to use template instance with default allocator
using NavigateToTarget_SendGoal_Request =
  mission_interfaces::action::NavigateToTarget_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_SendGoal_Response __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToTarget_SendGoal_Response_
{
  using Type = NavigateToTarget_SendGoal_Response_<ContainerAllocator>;

  explicit NavigateToTarget_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit NavigateToTarget_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_SendGoal_Response
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_SendGoal_Response
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToTarget_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToTarget_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToTarget_SendGoal_Response_

// alias to use template instance with default allocator
using NavigateToTarget_SendGoal_Response =
  mission_interfaces::action::NavigateToTarget_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_SendGoal_Event __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToTarget_SendGoal_Event_
{
  using Type = NavigateToTarget_SendGoal_Event_<ContainerAllocator>;

  explicit NavigateToTarget_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit NavigateToTarget_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::NavigateToTarget_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::NavigateToTarget_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::NavigateToTarget_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::NavigateToTarget_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_SendGoal_Event
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_SendGoal_Event
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToTarget_SendGoal_Event_ & other) const
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
  bool operator!=(const NavigateToTarget_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToTarget_SendGoal_Event_

// alias to use template instance with default allocator
using NavigateToTarget_SendGoal_Event =
  mission_interfaces::action::NavigateToTarget_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces

namespace mission_interfaces
{

namespace action
{

struct NavigateToTarget_SendGoal
{
  using Request = mission_interfaces::action::NavigateToTarget_SendGoal_Request;
  using Response = mission_interfaces::action::NavigateToTarget_SendGoal_Response;
  using Event = mission_interfaces::action::NavigateToTarget_SendGoal_Event;
};

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_GetResult_Request __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToTarget_GetResult_Request_
{
  using Type = NavigateToTarget_GetResult_Request_<ContainerAllocator>;

  explicit NavigateToTarget_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit NavigateToTarget_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_GetResult_Request
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_GetResult_Request
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToTarget_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToTarget_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToTarget_GetResult_Request_

// alias to use template instance with default allocator
using NavigateToTarget_GetResult_Request =
  mission_interfaces::action::NavigateToTarget_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/navigate_to_target__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_GetResult_Response __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToTarget_GetResult_Response_
{
  using Type = NavigateToTarget_GetResult_Response_<ContainerAllocator>;

  explicit NavigateToTarget_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit NavigateToTarget_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mission_interfaces::action::NavigateToTarget_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const mission_interfaces::action::NavigateToTarget_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_GetResult_Response
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_GetResult_Response
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToTarget_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToTarget_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToTarget_GetResult_Response_

// alias to use template instance with default allocator
using NavigateToTarget_GetResult_Response =
  mission_interfaces::action::NavigateToTarget_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_GetResult_Event __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToTarget_GetResult_Event_
{
  using Type = NavigateToTarget_GetResult_Event_<ContainerAllocator>;

  explicit NavigateToTarget_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit NavigateToTarget_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::NavigateToTarget_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mission_interfaces::action::NavigateToTarget_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::NavigateToTarget_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::NavigateToTarget_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_GetResult_Event
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_GetResult_Event
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToTarget_GetResult_Event_ & other) const
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
  bool operator!=(const NavigateToTarget_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToTarget_GetResult_Event_

// alias to use template instance with default allocator
using NavigateToTarget_GetResult_Event =
  mission_interfaces::action::NavigateToTarget_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mission_interfaces

namespace mission_interfaces
{

namespace action
{

struct NavigateToTarget_GetResult
{
  using Request = mission_interfaces::action::NavigateToTarget_GetResult_Request;
  using Response = mission_interfaces::action::NavigateToTarget_GetResult_Response;
  using Event = mission_interfaces::action::NavigateToTarget_GetResult_Event;
};

}  // namespace action

}  // namespace mission_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "mission_interfaces/action/detail/navigate_to_target__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__action__NavigateToTarget_FeedbackMessage __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToTarget_FeedbackMessage_
{
  using Type = NavigateToTarget_FeedbackMessage_<ContainerAllocator>;

  explicit NavigateToTarget_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit NavigateToTarget_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mission_interfaces::action::NavigateToTarget_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const mission_interfaces::action::NavigateToTarget_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::action::NavigateToTarget_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::action::NavigateToTarget_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::action::NavigateToTarget_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::action::NavigateToTarget_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::action::NavigateToTarget_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_FeedbackMessage
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__action__NavigateToTarget_FeedbackMessage
    std::shared_ptr<mission_interfaces::action::NavigateToTarget_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToTarget_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToTarget_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToTarget_FeedbackMessage_

// alias to use template instance with default allocator
using NavigateToTarget_FeedbackMessage =
  mission_interfaces::action::NavigateToTarget_FeedbackMessage_<std::allocator<void>>;

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

struct NavigateToTarget
{
  /// The goal message defined in the action definition.
  using Goal = mission_interfaces::action::NavigateToTarget_Goal;
  /// The result message defined in the action definition.
  using Result = mission_interfaces::action::NavigateToTarget_Result;
  /// The feedback message defined in the action definition.
  using Feedback = mission_interfaces::action::NavigateToTarget_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = mission_interfaces::action::NavigateToTarget_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = mission_interfaces::action::NavigateToTarget_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = mission_interfaces::action::NavigateToTarget_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct NavigateToTarget NavigateToTarget;

}  // namespace action

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_TARGET__STRUCT_HPP_
