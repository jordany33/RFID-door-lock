#include "ServoHandler.h"

// Define servo
Servo myServo; 

void initializeServo() {
    myServo.attach(4);
    myServo.write(180);
}

void grantAccess() {
    delay(500);
    myServo.write(0);
    delay(8000);
    myServo.write(180);
}

void denyAccess() {
    // Currently, this function doesn't do anything with the servo.
    // But you can define actions if needed.
}
