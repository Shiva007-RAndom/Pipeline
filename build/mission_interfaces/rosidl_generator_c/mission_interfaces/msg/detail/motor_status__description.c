// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mission_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#include "mission_interfaces/msg/detail/motor_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__msg__MotorStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0x22, 0xdb, 0x1a, 0xe8, 0x32, 0x53, 0xad,
      0x66, 0x8c, 0x28, 0x78, 0xa0, 0xa7, 0x99, 0x05,
      0xcd, 0x9d, 0x07, 0x7c, 0x95, 0xfc, 0xe2, 0x0e,
      0x41, 0xc0, 0x91, 0xa4, 0x2b, 0xf6, 0xda, 0x79,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mission_interfaces__msg__MotorStatus__TYPE_NAME[] = "mission_interfaces/msg/MotorStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mission_interfaces__msg__MotorStatus__FIELD_NAME__header[] = "header";
static char mission_interfaces__msg__MotorStatus__FIELD_NAME__servo_pwm[] = "servo_pwm";
static char mission_interfaces__msg__MotorStatus__FIELD_NAME__thrust[] = "thrust";
static char mission_interfaces__msg__MotorStatus__FIELD_NAME__cmd_roll_deg[] = "cmd_roll_deg";
static char mission_interfaces__msg__MotorStatus__FIELD_NAME__cmd_pitch_deg[] = "cmd_pitch_deg";

static rosidl_runtime_c__type_description__Field mission_interfaces__msg__MotorStatus__FIELDS[] = {
  {
    {mission_interfaces__msg__MotorStatus__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__MotorStatus__FIELD_NAME__servo_pwm, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__MotorStatus__FIELD_NAME__thrust, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__MotorStatus__FIELD_NAME__cmd_roll_deg, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__MotorStatus__FIELD_NAME__cmd_pitch_deg, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mission_interfaces__msg__MotorStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__msg__MotorStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mission_interfaces__msg__MotorStatus__TYPE_NAME, 34, 34},
      {mission_interfaces__msg__MotorStatus__FIELDS, 5, 5},
    },
    {mission_interfaces__msg__MotorStatus__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Bench motor telemetry (bench_flight_controller with spin_motors:=true), shown on the HUD.\n"
  "std_msgs/Header header\n"
  "uint16[4] servo_pwm   # SERVO_OUTPUT_RAW / RC out channels 1..4\n"
  "float32 thrust        # 0..1 commanded collective thrust\n"
  "float32 cmd_roll_deg\n"
  "float32 cmd_pitch_deg";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__msg__MotorStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mission_interfaces__msg__MotorStatus__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 279, 279},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__msg__MotorStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mission_interfaces__msg__MotorStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
