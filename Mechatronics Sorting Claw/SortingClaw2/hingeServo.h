#ifndef HINGESERVO_H
#define HINGESERVO_H

#include <Servo.h>
#include <Arduino.h>

class hingeServo {
  private:
  Servo myElbow;
  int currentPos;
  int pin;
  public:
    hingeServo() {} // default constructor do not use
    hingeServo(int pin);

    void initHinge(int initialPos = 0); //initialise
    void setPos(int pos); // sets servo position
    void resetPos(); // moves servo to 90 degrees
    void moveServo(int moveAngle); //moves servo in 1 degree increments
    int getPos(); // gets servo position
};

#endif