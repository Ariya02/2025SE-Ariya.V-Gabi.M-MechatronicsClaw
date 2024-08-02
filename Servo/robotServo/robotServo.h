#ifndef SERVO_H
#define SERVO_H

#include <Arduino.h>
#include <Servo.h>

class myServo
{
private:
  byte pin;
public:
  myServo() {} // do not use
  myServo(byte pin);

  void init();
  void ServoPos();
}
#endif