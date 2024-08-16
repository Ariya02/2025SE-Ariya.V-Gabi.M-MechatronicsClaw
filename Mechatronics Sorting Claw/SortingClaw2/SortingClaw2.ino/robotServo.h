#ifndef ROBOTSERVO_H
#define ROBOTSERVO_H

#include <Servo.h>
#include <Arduino.h>

class baseServo {
  private:
    Servo mybase;
    int pin;
    int currentPos;
    int thisAngle;

  public:
    myServo(int Pin);

    void init(int initialPos = 0); //initialise
    void setPos(int pos); // sets servo position
    int getPos(); // gets servo position
    void attach(); // attaches servo to pin
    void moveServo(int moveAngle); //moves servo in 1 degree increments
    void openClaw(); // opens claw
    void closeClaw(); //closes claw
    void resetPos(); // moves servo to 90 degrees
  };
#endif