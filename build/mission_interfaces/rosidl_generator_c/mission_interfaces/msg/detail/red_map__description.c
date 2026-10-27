// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mission_interfaces:msg/RedMap.idl
// generated code does not contain a copyright notice

#include "mission_interfaces/msg/detail/red_map__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__msg__RedMap__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0xde, 0xdb, 0x09, 0xe7, 0xa3, 0x0f, 0x73,
      0xa6, 0x2e, 0xce, 0xf1, 0xfc, 0xf5, 0xb8, 0xfa,
      0x2d, 0x2d, 0x40, 0x12, 0x2c, 0xf5, 0x50, 0x54,
      0x50, 0x48, 0x59, 0x58, 0xba, 0x06, 0x91, 0x74,
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

static char mission_interfaces__msg__RedMap__TYPE_NAME[] = "mission_interfaces/msg/RedMap";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mission_interfaces__msg__RedMap__FIELD_NAME__header[] = "header";
static char mission_interfaces__msg__RedMap__FIELD_NAME__origin_north[] = "origin_north";
static char mission_interfaces__msg__RedMap__FIELD_NAME__origin_east[] = "origin_east";
static char mission_interfaces__msg__RedMap__FIELD_NAME__axis_heading[] = "axis_heading";
static char mission_interfaces__msg__RedMap__FIELD_NAME__cell[] = "cell";
static char mission_interfaces__msg__RedMap__FIELD_NAME__grid_x0[] = "grid_x0";
static char mission_interfaces__msg__RedMap__FIELD_NAME__grid_y0[] = "grid_y0";
static char mission_interfaces__msg__RedMap__FIELD_NAME__width[] = "width";
static char mission_interfaces__msg__RedMap__FIELD_NAME__height[] = "height";
static char mission_interfaces__msg__RedMap__FIELD_NAME__data[] = "data";
static char mission_interfaces__msg__RedMap__FIELD_NAME__version[] = "version";
static char mission_interfaces__msg__RedMap__FIELD_NAME__margin[] = "margin";

static rosidl_runtime_c__type_description__Field mission_interfaces__msg__RedMap__FIELDS[] = {
  {
    {mission_interfaces__msg__RedMap__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedMap__FIELD_NAME__origin_north, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedMap__FIELD_NAME__origin_east, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedMap__FIELD_NAME__axis_heading, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedMap__FIELD_NAME__cell, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedMap__FIELD_NAME__grid_x0, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedMap__FIELD_NAME__grid_y0, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedMap__FIELD_NAME__width, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedMap__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedMap__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedMap__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedMap__FIELD_NAME__margin, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mission_interfaces__msg__RedMap__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
mission_interfaces__msg__RedMap__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mission_interfaces__msg__RedMap__TYPE_NAME, 29, 29},
      {mission_interfaces__msg__RedMap__FIELDS, 12, 12},
    },
    {mission_interfaces__msg__RedMap__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# The red seen so far (target_search, /perception/red_map, latched). Grid in the search's zone frame:\n"
  "#   x_z along `axis_heading` from (origin_north, origin_east), y_z 90 deg to the left of x_z\n"
  "#   (a rotation of the local NED frame aligned with the delivery zone's long side).\n"
  "# Consumers (qr_centering, target_search's SafeGoto) rebuild red_avoidance.RedMap from it.\n"
  "std_msgs/Header header\n"
  "float64 origin_north\n"
  "float64 origin_east\n"
  "float64 axis_heading      # rad, heading of +x_z\n"
  "float32 cell              # m per cell\n"
  "float32 grid_x0           # zone-frame coordinates of the grid's corner\n"
  "float32 grid_y0\n"
  "uint32 width              # cells along x_z\n"
  "uint32 height             # cells along y_z\n"
  "uint8[] data              # row-major (row = y index), 1 = red seen\n"
  "uint32 version\n"
  "float32 margin            # keep-out margin the search uses (m)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__msg__RedMap__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mission_interfaces__msg__RedMap__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 845, 845},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__msg__RedMap__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mission_interfaces__msg__RedMap__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
