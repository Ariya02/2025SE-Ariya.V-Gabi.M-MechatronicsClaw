#ifndef ROBOTSERVO_H
#define ROBOTSERVO_H

#include <Servo.h>

class myServo {
  private:
    Servo servos;
    int pin;
    int currentPos;
    int movePos;

  public:
    myServo(int Pin);

    void init(int initialPos = 0); //initialise
    void setPos(int pos); // sets servo position
    int getPos(); // gets servo position
    void attach(); // attaches servo to pin
    void moveLess(int movePos);// moves postion to a smaller angle than current positon
  };
#endif