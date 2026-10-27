// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mission_interfaces:msg/QrDetection.idl
// generated code does not contain a copyright notice

#include "mission_interfaces/msg/detail/qr_detection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__msg__QrDetection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdf, 0x9d, 0xf9, 0x8b, 0xdf, 0x42, 0x20, 0x79,
      0xa1, 0x7c, 0x3a, 0xc7, 0x96, 0x0e, 0x4f, 0x44,
      0x32, 0xf5, 0xf2, 0xa1, 0x7e, 0x25, 0x0e, 0x6c,
      0x14, 0x6f, 0x5f, 0x47, 0x50, 0xa0, 0x63, 0x85,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mission_interfaces__msg__QrDetection__TYPE_NAME[] = "mission_interfaces/msg/QrDetection";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mission_interfaces__msg__QrDetection__FIELD_NAME__header[] = "header";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__detected[] = "detected";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__corners[] = "corners";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__u[] = "u";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__v[] = "v";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__decoded_text[] = "decoded_text";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__reference_ready[] = "reference_ready";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__score[] = "score";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__matched[] = "matched";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__match_threshold[] = "match_threshold";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__image_width[] = "image_width";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__image_height[] = "image_height";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__pose_valid[] = "pose_valid";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__alt_rel[] = "alt_rel";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__drone_x[] = "drone_x";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__drone_y[] = "drone_y";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__drone_z[] = "drone_z";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__drone_heading[] = "drone_heading";
static char mission_interfaces__msg__QrDetection__FIELD_NAME__position_estimate[] = "position_estimate";

static rosidl_runtime_c__type_description__Field mission_interfaces__msg__QrDetection__FIELDS[] = {
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__detected, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__corners, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      8,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__u, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__v, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__decoded_text, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__reference_ready, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__score, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__matched, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__match_threshold, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__image_width, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__image_height, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__pose_valid, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__alt_rel, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__drone_x, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__drone_y, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__drone_z, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__drone_heading, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__msg__QrDetection__FIELD_NAME__position_estimate, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mission_interfaces__msg__QrDetection__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__msg__QrDetection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mission_interfaces__msg__QrDetection__TYPE_NAME, 34, 34},
      {mission_interfaces__msg__QrDetection__FIELDS, 19, 19},
    },
    {mission_interfaces__msg__QrDetection__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Output of qr_detector for one camera frame.\n"
  "std_msgs/Header header        # copied from the image\n"
  "\n"
  "bool detected                 # a QR code was found in this frame\n"
  "float32[8] corners            # quad corners x0,y0,...,x3,y3 in px\n"
  "float32 u                     # px, centre of the quad\n"
  "float32 v\n"
  "string decoded_text           # \"\" if it could not be decoded\n"
  "\n"
  "bool reference_ready          # a reference QR has been captured from the camera\n"
  "float32 score                 # 4-rotation module-grid similarity to the reference, 0..1 (1.0 for a text match)\n"
  "bool matched                  # decoded text equals the reference text, or score >= match_threshold\n"
  "float32 match_threshold\n"
  "uint32 image_width\n"
  "uint32 image_height\n"
  "\n"
  "bool pose_valid\n"
  "float32 alt_rel\n"
  "float32 drone_x\n"
  "float32 drone_y\n"
  "float32 drone_z\n"
  "float32 drone_heading\n"
  "geometry_msgs/Point position_estimate  # local NED of the QR centre (pinhole reprojection), z = drone_z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__msg__QrDetection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mission_interfaces__msg__QrDetection__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 925, 925},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__msg__QrDetection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mission_interfaces__msg__QrDetection__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
