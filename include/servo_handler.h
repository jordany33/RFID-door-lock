#ifndef SERVOHANDLER_H
#define SERVOHANDLER_H

#include <Servo.h>

// Initialize the servo motor
void initializeServo();

// Grant access using the servo
void grantAccess();

// Deny access using the servo
void denyAccess();

#endif
