// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mission_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice

#include "mission_interfaces/msg/detail/vehicle_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__msg__VehicleState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x88, 0xcf, 0x4b, 0xc8, 0xaa, 0xdb, 0xbf, 0x83,
      0xcb, 0x5e, 0x23, 0x61, 0xef, 0x68, 0x25, 0x71,
      0x96, 0x14, 0xe0, 0x06, 0x17, 0x72, 0x47, 0x0a,
      0x2c, 0xb6, 0xa6, 0xd6, 0xa4, 0xc1, 0xec, 0xd7,
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

static char mission_interfaces__msg__VehicleState__TYPE_NAME[] = "mission_interfaces/msg/VehicleState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mission_interfaces__msg__VehicleState__FIELD_NAME__header[] = "header";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__valid[] = "valid";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__ready[] = "ready";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__armed[] = "armed";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__airborne[] = "airborne";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__mode[] = "mode";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__controller[] = "controller";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__x[] = "x";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__y[] = "y";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__z[] = "z";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__heading[] = "heading";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__vx[] = "vx";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__vy[] = "vy";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__vz[] = "vz";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__alt_rel[] = "alt_rel";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__roll[] = "roll";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__pitch[] = "pitch";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__xy_global[] = "xy_global";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__ref_lat[] = "ref_lat";
static char mission_interfaces__msg__VehicleState__FIELD_NAME__ref_lon[] = "ref_lon";

static rosidl_runtime_c__type_description__Field mission_interfaces__msg__VehicleState__FIELDS[] = {
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__valid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__ready, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__armed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__airborne, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__controller, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__vx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__vy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__vz, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__alt_rel, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__xy_global, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__ref_lat, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__VehicleState__FIELD_NAME__ref_lon, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mission_interfaces__msg__VehicleState__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
mission_interfaces__msg__VehicleState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mission_interfaces__msg__VehicleState__TYPE_NAME, 35, 35},
      {mission_interfaces__msg__VehicleState__FIELDS, 20, 20},
    },
    {mission_interfaces__msg__VehicleState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Vehicle state published by flight_controller (MAVROS) or bench_flight_controller on\n"
  "# /flight_controller/pose. Every mission node reads the drone pose from here, so the bench\n"
  "# controller can stand in for the real one without any other node noticing.\n"
  "std_msgs/Header header\n"
  "\n"
  "bool valid            # local position is valid\n"
  "bool ready            # autopilot connected, booted and has a GPS fix (bench: always true)\n"
  "bool armed\n"
  "bool airborne\n"
  "string mode           # flight mode as reported by the autopilot (\"GUIDED\", \"GUIDED_NOGPS\", ...)\n"
  "string controller     # \"mavros\" | \"bench\"\n"
  "\n"
  "# Local NED position from the EKF origin (m), heading 0 = north clockwise (rad)\n"
  "float32 x\n"
  "float32 y\n"
  "float32 z\n"
  "float32 heading\n"
  "float32 vx\n"
  "float32 vy\n"
  "float32 vz\n"
  "\n"
  "float32 alt_rel       # m above home (take-off point); NaN if unknown\n"
  "\n"
  "# Attitude (NED earth, FRD body), rad. Used to drop camera frames taken while banking hard.\n"
  "float32 roll\n"
  "float32 pitch\n"
  "\n"
  "# Geographic position of the local frame's origin (geofence files are lat/lon)\n"
  "bool xy_global\n"
  "float64 ref_lat\n"
  "float64 ref_lon";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__msg__VehicleState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mission_interfaces__msg__VehicleState__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1059, 1059},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__msg__VehicleState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mission_interfaces__msg__VehicleState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
