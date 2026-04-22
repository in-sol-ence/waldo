// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_interfaces:srv/WheelVel.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_INTERFACES__SRV__DETAIL__WHEEL_VEL__STRUCT_H_
#define MOTOR_INTERFACES__SRV__DETAIL__WHEEL_VEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/WheelVel in the package motor_interfaces.
typedef struct motor_interfaces__srv__WheelVel_Request
{
  int16_t vel[3];
} motor_interfaces__srv__WheelVel_Request;

// Struct for a sequence of motor_interfaces__srv__WheelVel_Request.
typedef struct motor_interfaces__srv__WheelVel_Request__Sequence
{
  motor_interfaces__srv__WheelVel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_interfaces__srv__WheelVel_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/WheelVel in the package motor_interfaces.
typedef struct motor_interfaces__srv__WheelVel_Response
{
  bool complete;
} motor_interfaces__srv__WheelVel_Response;

// Struct for a sequence of motor_interfaces__srv__WheelVel_Response.
typedef struct motor_interfaces__srv__WheelVel_Response__Sequence
{
  motor_interfaces__srv__WheelVel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_interfaces__srv__WheelVel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_INTERFACES__SRV__DETAIL__WHEEL_VEL__STRUCT_H_
