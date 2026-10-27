// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mission_interfaces:msg/RedPatch.idl
// generated code does not contain a copyright notice

#include "mission_interfaces/msg/detail/red_patch__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__msg__RedPatch__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xae, 0xa3, 0x37, 0xf1, 0xf6, 0x2f, 0xaa, 0x8d,
      0x57, 0x71, 0xfb, 0x22, 0x8b, 0x6f, 0x69, 0xc3,
      0x06, 0x21, 0xd8, 0xb2, 0x02, 0xe4, 0xdf, 0xcc,
      0x2c, 0xf9, 0x12, 0x2a, 0x9e, 0x25, 0x17, 0x17,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point32__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point32__EXPECTED_HASH = {1, {
    0x2f, 0xc4, 0xdb, 0x7c, 0xae, 0x16, 0xa4, 0x58,
    0x2c, 0x79, 0xa5, 0x6b, 0x66, 0x17, 0x3a, 0x8d,
    0x48, 0xd5, 0x2c, 0x7d, 0xc5, 0x20, 0xdd, 0xc5,
    0x5a, 0x0d, 0x4b, 0xcf, 0x2a, 0x4b, 0xfd, 0xbc,
  }};
#endif

static char mission_interfaces__msg__RedPatch__TYPE_NAME[] = "mission_interfaces/msg/RedPatch";
static char geometry_msgs__msg__Point32__TYPE_NAME[] = "geometry_msgs/msg/Point32";

// Define type names, field names, and default values
static char mission_interfaces__msg__RedPatch__FIELD_NAME__centroid_x[] = "centroid_x";
static char mission_interfaces__msg__RedPatch__FIELD_NAME__centroid_y[] = "centroid_y";
static char mission_interfaces__msg__RedPatch__FIELD_NAME__offset_x[] = "offset_x";
static char mission_interfaces__msg__RedPatch__FIELD_NAME__offset_y[] = "offset_y";
static char mission_interfaces__msg__RedPatch__FIELD_NAME__area_px[] = "area_px";
static char mission_interfaces__msg__RedPatch__FIELD_NAME__area_fraction[] = "area_fraction";
static char mission_interfaces__msg__RedPatch__FIELD_NAME__bbox_xywh[] = "bbox_xywh";
static char mission_interfaces__msg__RedPatch__FIELD_NAME__contour[] = "contour";

static rosidl_runtime_c__type_description__Field mission_interfaces__msg__RedPatch__FIELDS[] = {
  {
    {mission_interfaces__msg__RedPatch__FIELD_NAME__centroid_x, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedPatch__FIELD_NAME__centroid_y, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedPatch__FIELD_NAME__offset_x, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedPatch__FIELD_NAME__offset_y, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedPatch__FIELD_NAME__area_px, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedPatch__FIELD_NAME__area_fraction, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedPatch__FIELD_NAME__bbox_xywh, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__RedPatch__FIELD_NAME__contour, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Point32__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mission_interfaces__msg__RedPatch__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point32__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__msg__RedPatch__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mission_interfaces__msg__RedPatch__TYPE_NAME, 31, 31},
      {mission_interfaces__msg__RedPatch__FIELDS, 8, 8},
    },
    {mission_interfaces__msg__RedPatch__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point32__EXPECTED_HASH, geometry_msgs__msg__Point32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point32__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# One red patch (candidate red / restricted zone) found in an image.\n"
  "# Ported from qr_match_interfaces/RedPatch (Shiva007-RAndom/Qr-and-red-zone-detection).\n"
  "\n"
  "# Centroid from image moments, in pixels (origin top-left)\n"
  "float32 centroid_x\n"
  "float32 centroid_y\n"
  "\n"
  "# Offset of the centroid from the image centre, normalised to [-1, 1] (+x = right, +y = down)\n"
  "float32 offset_x\n"
  "float32 offset_y\n"
  "\n"
  "# Contour area in pixels^2 and as a fraction of the whole image\n"
  "float32 area_px\n"
  "float32 area_fraction\n"
  "\n"
  "# Axis-aligned bounding box in pixels: [x, y, width, height]\n"
  "int32[4] bbox_xywh\n"
  "\n"
  "# Simplified outline of the patch, pixel coordinates (z unused)\n"
  "geometry_msgs/Point32[] contour";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__msg__RedPatch__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mission_interfaces__msg__RedPatch__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 665, 665},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__msg__RedPatch__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mission_interfaces__msg__RedPatch__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point32__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
