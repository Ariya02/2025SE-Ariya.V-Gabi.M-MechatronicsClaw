#include "robotServo.h"
#define SERVO_PIN 13 

myServo thisServo;

void setup() {
  thisServo.init(9);
  thisServo.attach(9);
}


void loop() {
  thisServo.ServoPos();
}

