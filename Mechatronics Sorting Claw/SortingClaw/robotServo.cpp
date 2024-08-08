#include "robotServo.h"

myServo::myServo(int Pin) {
  pin = Pin;
  currentPos = 0;
}

void myServo::attach() {
  servos.attach(pin);
}

void myServo::init(int initialPos)
{
  attach();
  setPos(initialPos);
}

void myServo::setPos(int pos) {
  if (pos >= 0 && pos <=180){
    servos.write(pos);
    currentPos = pos;
  }
}

int myServo::getPos() {
  return currentPos;
}