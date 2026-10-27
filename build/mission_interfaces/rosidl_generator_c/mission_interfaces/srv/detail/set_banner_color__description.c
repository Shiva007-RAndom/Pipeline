// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mission_interfaces:srv/SetBannerColor.idl
// generated code does not contain a copyright notice

#include "mission_interfaces/srv/detail/set_banner_color__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__srv__SetBannerColor__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x40, 0x87, 0xb8, 0xd3, 0xcd, 0x63, 0x55, 0x72,
      0xea, 0xd5, 0x3c, 0x01, 0x32, 0x19, 0x93, 0x48,
      0x55, 0x23, 0xf1, 0xa3, 0xbd, 0xd1, 0x3c, 0x64,
      0x5b, 0x69, 0xaf, 0x60, 0x44, 0x43, 0x9a, 0x09,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__srv__SetBannerColor_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x19, 0x04, 0x50, 0x8a, 0x4d, 0xc2, 0x4b, 0x38,
      0xf7, 0x4f, 0xf5, 0xa2, 0x07, 0x1e, 0x83, 0x25,
      0x76, 0xe8, 0x57, 0x40, 0x10, 0xfc, 0x28, 0xb4,
      0x09, 0x35, 0x82, 0xfb, 0xfd, 0x22, 0x63, 0x55,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__srv__SetBannerColor_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0x73, 0xd3, 0xa4, 0x38, 0xfb, 0x4e, 0x5e,
      0x87, 0xc7, 0x10, 0xb2, 0xa7, 0xa3, 0x25, 0x07,
      0xab, 0x00, 0x18, 0x51, 0x53, 0x6f, 0x96, 0xbb,
      0xba, 0xe5, 0x41, 0xf2, 0x86, 0x07, 0xb4, 0xdc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__srv__SetBannerColor_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6a, 0x60, 0x7b, 0x17, 0x4f, 0x35, 0xfd, 0x2c,
      0x25, 0xdd, 0xdc, 0x97, 0x92, 0x71, 0x3f, 0x73,
      0xbf, 0x82, 0x02, 0xbe, 0xa9, 0xd6, 0x29, 0xc6,
      0x57, 0xf8, 0xb0, 0xe9, 0x39, 0x47, 0xe9, 0xe7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char mission_interfaces__srv__SetBannerColor__TYPE_NAME[] = "mission_interfaces/srv/SetBannerColor";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mission_interfaces__srv__SetBannerColor_Event__TYPE_NAME[] = "mission_interfaces/srv/SetBannerColor_Event";
static char mission_interfaces__srv__SetBannerColor_Request__TYPE_NAME[] = "mission_interfaces/srv/SetBannerColor_Request";
static char mission_interfaces__srv__SetBannerColor_Response__TYPE_NAME[] = "mission_interfaces/srv/SetBannerColor_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char mission_interfaces__srv__SetBannerColor__FIELD_NAME__request_message[] = "request_message";
static char mission_interfaces__srv__SetBannerColor__FIELD_NAME__response_message[] = "response_message";
static char mission_interfaces__srv__SetBannerColor__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field mission_interfaces__srv__SetBannerColor__FIELDS[] = {
  {
    {mission_interfaces__srv__SetBannerColor__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mission_interfaces__srv__SetBannerColor_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__srv__SetBannerColor__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mission_interfaces__srv__SetBannerColor_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__srv__SetBannerColor__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mission_interfaces__srv__SetBannerColor_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mission_interfaces__srv__SetBannerColor__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__srv__SetBannerColor_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__srv__SetBannerColor_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__srv__SetBannerColor_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__srv__SetBannerColor__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mission_interfaces__srv__SetBannerColor__TYPE_NAME, 37, 37},
      {mission_interfaces__srv__SetBannerColor__FIELDS, 3, 3},
    },
    {mission_interfaces__srv__SetBannerColor__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mission_interfaces__srv__SetBannerColor_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mission_interfaces__srv__SetBannerColor_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = mission_interfaces__srv__SetBannerColor_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mission_interfaces__srv__SetBannerColor_Request__FIELD_NAME__color[] = "color";

static rosidl_runtime_c__type_description__Field mission_interfaces__srv__SetBannerColor_Request__FIELDS[] = {
  {
    {mission_interfaces__srv__SetBannerColor_Request__FIELD_NAME__color, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__srv__SetBannerColor_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mission_interfaces__srv__SetBannerColor_Request__TYPE_NAME, 45, 45},
      {mission_interfaces__srv__SetBannerColor_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mission_interfaces__srv__SetBannerColor_Response__FIELD_NAME__success[] = "success";
static char mission_interfaces__srv__SetBannerColor_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field mission_interfaces__srv__SetBannerColor_Response__FIELDS[] = {
  {
    {mission_interfaces__srv__SetBannerColor_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__srv__SetBannerColor_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__srv__SetBannerColor_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mission_interfaces__srv__SetBannerColor_Response__TYPE_NAME, 46, 46},
      {mission_interfaces__srv__SetBannerColor_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mission_interfaces__srv__SetBannerColor_Event__FIELD_NAME__info[] = "info";
static char mission_interfaces__srv__SetBannerColor_Event__FIELD_NAME__request[] = "request";
static char mission_interfaces__srv__SetBannerColor_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field mission_interfaces__srv__SetBannerColor_Event__FIELDS[] = {
  {
    {mission_interfaces__srv__SetBannerColor_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__srv__SetBannerColor_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mission_interfaces__srv__SetBannerColor_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__srv__SetBannerColor_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mission_interfaces__srv__SetBannerColor_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mission_interfaces__srv__SetBannerColor_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__srv__SetBannerColor_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {mission_interfaces__srv__SetBannerColor_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__srv__SetBannerColor_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mission_interfaces__srv__SetBannerColor_Event__TYPE_NAME, 43, 43},
      {mission_interfaces__srv__SetBannerColor_Event__FIELDS, 3, 3},
    },
    {mission_interfaces__srv__SetBannerColor_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mission_interfaces__srv__SetBannerColor_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mission_interfaces__srv__SetBannerColor_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# banner_detector: choose which banner colour to classify. \"\" stops processing.\n"
  "string color          # \"green\" | \"blue\" | \"\"\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__srv__SetBannerColor__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mission_interfaces__srv__SetBannerColor__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 158, 158},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__srv__SetBannerColor_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mission_interfaces__srv__SetBannerColor_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__srv__SetBannerColor_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mission_interfaces__srv__SetBannerColor_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__srv__SetBannerColor_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mission_interfaces__srv__SetBannerColor_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__srv__SetBannerColor__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mission_interfaces__srv__SetBannerColor__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mission_interfaces__srv__SetBannerColor_Event__get_individual_type_description_source(NULL);
    sources[3] = *mission_interfaces__srv__SetBannerColor_Request__get_individual_type_description_source(NULL);
    sources[4] = *mission_interfaces__srv__SetBannerColor_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__srv__SetBannerColor_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mission_interfaces__srv__SetBannerColor_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__srv__SetBannerColor_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mission_interfaces__srv__SetBannerColor_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__srv__SetBannerColor_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mission_interfaces__srv__SetBannerColor_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mission_interfaces__srv__SetBannerColor_Request__get_individual_type_description_source(NULL);
    sources[3] = *mission_interfaces__srv__SetBannerColor_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
