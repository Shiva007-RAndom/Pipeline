// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mission_interfaces:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice

#include "mission_interfaces/msg/detail/position_setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__msg__PositionSetpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0b, 0x34, 0x51, 0x81, 0x21, 0xe7, 0x77, 0xad,
      0x9a, 0xdc, 0x58, 0xa3, 0xd6, 0x03, 0x25, 0xec,
      0xdc, 0x3b, 0x2c, 0xee, 0xcc, 0x9c, 0x25, 0xc0,
      0x90, 0x0e, 0x75, 0x8c, 0x55, 0x4e, 0x73, 0xc3,
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

static char mission_interfaces__msg__PositionSetpoint__TYPE_NAME[] = "mission_interfaces/msg/PositionSetpoint";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mission_interfaces__msg__PositionSetpoint__FIELD_NAME__header[] = "header";
static char mission_interfaces__msg__PositionSetpoint__FIELD_NAME__x[] = "x";
static char mission_interfaces__msg__PositionSetpoint__FIELD_NAME__y[] = "y";
static char mission_interfaces__msg__PositionSetpoint__FIELD_NAME__z[] = "z";
static char mission_interfaces__msg__PositionSetpoint__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field mission_interfaces__msg__PositionSetpoint__FIELDS[] = {
  {
    {mission_interfaces__msg__PositionSetpoint__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__PositionSetpoint__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__PositionSetpoint__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__PositionSetpoint__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__PositionSetpoint__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mission_interfaces__msg__PositionSetpoint__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
mission_interfaces__msg__PositionSetpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mission_interfaces__msg__PositionSetpoint__TYPE_NAME, 39, 39},
      {mission_interfaces__msg__PositionSetpoint__FIELDS, 5, 5},
    },
    {mission_interfaces__msg__PositionSetpoint__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Streamed position target for flight_controller (~/setpoint), local NED. Used by target_search to\n"
  "# follow the red-zone avoidance carrot point (published at ~20 Hz). Accepted only while GUIDED is\n"
  "# engaged and no action goal is running; if the stream stops for 0.5 s the vehicle holds position.\n"
  "std_msgs/Header header\n"
  "float32 x            # north, m\n"
  "float32 y            # east, m\n"
  "float32 z            # down, m\n"
  "float32 yaw          # heading, rad (0 = north, clockwise); NaN = keep the current heading";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__msg__PositionSetpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mission_interfaces__msg__PositionSetpoint__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 504, 504},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__msg__PositionSetpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mission_interfaces__msg__PositionSetpoint__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
