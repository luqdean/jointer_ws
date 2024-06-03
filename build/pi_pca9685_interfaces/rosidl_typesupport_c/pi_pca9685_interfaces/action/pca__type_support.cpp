// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from pi_pca9685_interfaces:action/PCA.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pi_pca9685_interfaces/action/detail/pca__struct.h"
#include "pi_pca9685_interfaces/action/detail/pca__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pi_pca9685_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PCA_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PCA_Goal_type_support_ids_t;

static const _PCA_Goal_type_support_ids_t _PCA_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PCA_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PCA_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PCA_Goal_type_support_symbol_names_t _PCA_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_pca9685_interfaces, action, PCA_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_pca9685_interfaces, action, PCA_Goal)),
  }
};

typedef struct _PCA_Goal_type_support_data_t
{
  void * data[2];
} _PCA_Goal_type_support_data_t;

static _PCA_Goal_type_support_data_t _PCA_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PCA_Goal_message_typesupport_map = {
  2,
  "pi_pca9685_interfaces",
  &_PCA_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PCA_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PCA_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PCA_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PCA_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pi_pca9685_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pi_pca9685_interfaces, action, PCA_Goal)() {
  return &::pi_pca9685_interfaces::action::rosidl_typesupport_c::PCA_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_pca9685_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PCA_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PCA_Result_type_support_ids_t;

static const _PCA_Result_type_support_ids_t _PCA_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PCA_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PCA_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PCA_Result_type_support_symbol_names_t _PCA_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_pca9685_interfaces, action, PCA_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_pca9685_interfaces, action, PCA_Result)),
  }
};

typedef struct _PCA_Result_type_support_data_t
{
  void * data[2];
} _PCA_Result_type_support_data_t;

static _PCA_Result_type_support_data_t _PCA_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PCA_Result_message_typesupport_map = {
  2,
  "pi_pca9685_interfaces",
  &_PCA_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PCA_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PCA_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PCA_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PCA_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pi_pca9685_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pi_pca9685_interfaces, action, PCA_Result)() {
  return &::pi_pca9685_interfaces::action::rosidl_typesupport_c::PCA_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_pca9685_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PCA_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PCA_Feedback_type_support_ids_t;

static const _PCA_Feedback_type_support_ids_t _PCA_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PCA_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PCA_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PCA_Feedback_type_support_symbol_names_t _PCA_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_pca9685_interfaces, action, PCA_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_pca9685_interfaces, action, PCA_Feedback)),
  }
};

typedef struct _PCA_Feedback_type_support_data_t
{
  void * data[2];
} _PCA_Feedback_type_support_data_t;

static _PCA_Feedback_type_support_data_t _PCA_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PCA_Feedback_message_typesupport_map = {
  2,
  "pi_pca9685_interfaces",
  &_PCA_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PCA_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PCA_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PCA_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PCA_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pi_pca9685_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pi_pca9685_interfaces, action, PCA_Feedback)() {
  return &::pi_pca9685_interfaces::action::rosidl_typesupport_c::PCA_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_pca9685_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PCA_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PCA_SendGoal_Request_type_support_ids_t;

static const _PCA_SendGoal_Request_type_support_ids_t _PCA_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PCA_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PCA_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PCA_SendGoal_Request_type_support_symbol_names_t _PCA_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_pca9685_interfaces, action, PCA_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_pca9685_interfaces, action, PCA_SendGoal_Request)),
  }
};

typedef struct _PCA_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PCA_SendGoal_Request_type_support_data_t;

static _PCA_SendGoal_Request_type_support_data_t _PCA_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PCA_SendGoal_Request_message_typesupport_map = {
  2,
  "pi_pca9685_interfaces",
  &_PCA_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PCA_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PCA_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PCA_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PCA_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pi_pca9685_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pi_pca9685_interfaces, action, PCA_SendGoal_Request)() {
  return &::pi_pca9685_interfaces::action::rosidl_typesupport_c::PCA_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_pca9685_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PCA_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PCA_SendGoal_Response_type_support_ids_t;

static const _PCA_SendGoal_Response_type_support_ids_t _PCA_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PCA_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PCA_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PCA_SendGoal_Response_type_support_symbol_names_t _PCA_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_pca9685_interfaces, action, PCA_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_pca9685_interfaces, action, PCA_SendGoal_Response)),
  }
};

typedef struct _PCA_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PCA_SendGoal_Response_type_support_data_t;

static _PCA_SendGoal_Response_type_support_data_t _PCA_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PCA_SendGoal_Response_message_typesupport_map = {
  2,
  "pi_pca9685_interfaces",
  &_PCA_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PCA_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PCA_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PCA_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PCA_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pi_pca9685_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pi_pca9685_interfaces, action, PCA_SendGoal_Response)() {
  return &::pi_pca9685_interfaces::action::rosidl_typesupport_c::PCA_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_pca9685_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PCA_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PCA_SendGoal_type_support_ids_t;

static const _PCA_SendGoal_type_support_ids_t _PCA_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PCA_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PCA_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PCA_SendGoal_type_support_symbol_names_t _PCA_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_pca9685_interfaces, action, PCA_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_pca9685_interfaces, action, PCA_SendGoal)),
  }
};

typedef struct _PCA_SendGoal_type_support_data_t
{
  void * data[2];
} _PCA_SendGoal_type_support_data_t;

static _PCA_SendGoal_type_support_data_t _PCA_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PCA_SendGoal_service_typesupport_map = {
  2,
  "pi_pca9685_interfaces",
  &_PCA_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PCA_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PCA_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PCA_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PCA_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pi_pca9685_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, pi_pca9685_interfaces, action, PCA_SendGoal)() {
  return &::pi_pca9685_interfaces::action::rosidl_typesupport_c::PCA_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_pca9685_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PCA_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PCA_GetResult_Request_type_support_ids_t;

static const _PCA_GetResult_Request_type_support_ids_t _PCA_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PCA_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PCA_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PCA_GetResult_Request_type_support_symbol_names_t _PCA_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_pca9685_interfaces, action, PCA_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_pca9685_interfaces, action, PCA_GetResult_Request)),
  }
};

typedef struct _PCA_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PCA_GetResult_Request_type_support_data_t;

static _PCA_GetResult_Request_type_support_data_t _PCA_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PCA_GetResult_Request_message_typesupport_map = {
  2,
  "pi_pca9685_interfaces",
  &_PCA_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PCA_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PCA_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PCA_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PCA_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pi_pca9685_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pi_pca9685_interfaces, action, PCA_GetResult_Request)() {
  return &::pi_pca9685_interfaces::action::rosidl_typesupport_c::PCA_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_pca9685_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PCA_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PCA_GetResult_Response_type_support_ids_t;

static const _PCA_GetResult_Response_type_support_ids_t _PCA_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PCA_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PCA_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PCA_GetResult_Response_type_support_symbol_names_t _PCA_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_pca9685_interfaces, action, PCA_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_pca9685_interfaces, action, PCA_GetResult_Response)),
  }
};

typedef struct _PCA_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PCA_GetResult_Response_type_support_data_t;

static _PCA_GetResult_Response_type_support_data_t _PCA_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PCA_GetResult_Response_message_typesupport_map = {
  2,
  "pi_pca9685_interfaces",
  &_PCA_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PCA_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PCA_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PCA_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PCA_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pi_pca9685_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pi_pca9685_interfaces, action, PCA_GetResult_Response)() {
  return &::pi_pca9685_interfaces::action::rosidl_typesupport_c::PCA_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_pca9685_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PCA_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PCA_GetResult_type_support_ids_t;

static const _PCA_GetResult_type_support_ids_t _PCA_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PCA_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PCA_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PCA_GetResult_type_support_symbol_names_t _PCA_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_pca9685_interfaces, action, PCA_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_pca9685_interfaces, action, PCA_GetResult)),
  }
};

typedef struct _PCA_GetResult_type_support_data_t
{
  void * data[2];
} _PCA_GetResult_type_support_data_t;

static _PCA_GetResult_type_support_data_t _PCA_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PCA_GetResult_service_typesupport_map = {
  2,
  "pi_pca9685_interfaces",
  &_PCA_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PCA_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PCA_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PCA_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PCA_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pi_pca9685_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, pi_pca9685_interfaces, action, PCA_GetResult)() {
  return &::pi_pca9685_interfaces::action::rosidl_typesupport_c::PCA_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__struct.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_pca9685_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PCA_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PCA_FeedbackMessage_type_support_ids_t;

static const _PCA_FeedbackMessage_type_support_ids_t _PCA_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PCA_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PCA_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PCA_FeedbackMessage_type_support_symbol_names_t _PCA_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_pca9685_interfaces, action, PCA_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_pca9685_interfaces, action, PCA_FeedbackMessage)),
  }
};

typedef struct _PCA_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PCA_FeedbackMessage_type_support_data_t;

static _PCA_FeedbackMessage_type_support_data_t _PCA_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PCA_FeedbackMessage_message_typesupport_map = {
  2,
  "pi_pca9685_interfaces",
  &_PCA_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PCA_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PCA_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PCA_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PCA_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pi_pca9685_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pi_pca9685_interfaces, action, PCA_FeedbackMessage)() {
  return &::pi_pca9685_interfaces::action::rosidl_typesupport_c::PCA_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "pi_pca9685_interfaces/action/pca.h"
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__type_support.h"

static rosidl_action_type_support_t _pi_pca9685_interfaces__action__PCA__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, pi_pca9685_interfaces, action, PCA)()
{
  // Thread-safe by always writing the same values to the static struct
  _pi_pca9685_interfaces__action__PCA__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, pi_pca9685_interfaces, action, PCA_SendGoal)();
  _pi_pca9685_interfaces__action__PCA__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, pi_pca9685_interfaces, action, PCA_GetResult)();
  _pi_pca9685_interfaces__action__PCA__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _pi_pca9685_interfaces__action__PCA__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, pi_pca9685_interfaces, action, PCA_FeedbackMessage)();
  _pi_pca9685_interfaces__action__PCA__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_pi_pca9685_interfaces__action__PCA__typesupport_c;
}

#ifdef __cplusplus
}
#endif
