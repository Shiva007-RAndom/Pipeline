// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/motor_status.h"


#ifndef MISSION_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
#define MISSION_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/MotorStatus in the package mission_interfaces.
/**
  * Bench motor telemetry (bench_flight_controller with spin_motors:=true), shown on the HUD.
 */
typedef struct mission_interfaces__msg__MotorStatus
{
  std_msgs__msg__Header header;
  /// SERVO_OUTPUT_RAW / RC out channels 1..4
  uint16_t servo_pwm[4];
  /// 0..1 commanded collective thrust
  float thrust;
  float cmd_roll_deg;
  float cmd_pitch_deg;
} mission_interfaces__msg__MotorStatus;

// Struct for a sequence of mission_interfaces__msg__MotorStatus.
typedef struct mission_interfaces__msg__MotorStatus__Sequence
{
  mission_interfaces__msg__MotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__msg__MotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
