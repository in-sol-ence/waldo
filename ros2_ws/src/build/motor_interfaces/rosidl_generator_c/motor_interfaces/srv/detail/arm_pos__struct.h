// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_interfaces:srv/ArmPos.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_INTERFACES__SRV__DETAIL__ARM_POS__STRUCT_H_
#define MOTOR_INTERFACES__SRV__DETAIL__ARM_POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ArmPos in the package motor_interfaces.
typedef struct motor_interfaces__srv__ArmPos_Request
{
  int8_t positions[6];
} motor_interfaces__srv__ArmPos_Request;

// Struct for a sequence of motor_interfaces__srv__ArmPos_Request.
typedef struct motor_interfaces__srv__ArmPos_Request__Sequence
{
  motor_interfaces__srv__ArmPos_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_interfaces__srv__ArmPos_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ArmPos in the package motor_interfaces.
typedef struct motor_interfaces__srv__ArmPos_Response
{
  bool reached;
} motor_interfaces__srv__ArmPos_Response;

// Struct for a sequence of motor_interfaces__srv__ArmPos_Response.
typedef struct motor_interfaces__srv__ArmPos_Response__Sequence
{
  motor_interfaces__srv__ArmPos_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_interfaces__srv__ArmPos_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_INTERFACES__SRV__DETAIL__ARM_POS__STRUCT_H_
