#ifndef CLAWSERVO_H
#define CLAWSERVO_H

#include <Servo.h>
#include <Arduino.h>

class clawServo {
  private:
  Servo myClaw;
  int pin;
  int currentPos;
  public: 
    public: 
    clawServo() {} // default constructor
    clawServo(int pin);

    void initClaw(int initialPos = 0); //initialise
    void openClaw(); // opens claw
    void closeClaw(); //closes claw
    void setPos(int pos);
    void resetPos(); // moves servo to 90 degrees
};

#endif