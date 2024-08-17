#ifndef ROTATINGSERVO_H
#define ROTATINGSERVO_H

#include <Servo.h>
#include <Arduino.h>

class rotateServo {
  private:
    Servo myBase;
    int currentPos;
    int pin;
  public: 
    rotateServo() {} // default constructor
    rotateServo(int pin);

    void initRotate(int initialPos = 0); //initialise
    void setPos(int pos); // sets servo position
    void moveServo(int moveAngle); //moves servo in 1 degree increments
    void resetPos(); // moves servo to 90 degrees
    int getPos(); // gets servo position
};

#endif