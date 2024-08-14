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

void myServo::moveLess(int movePos){ //move to a higher angle 
    for (int pos = getPos(); pos >= movePos; pos -= 1) {
    setPos(pos);
  }
}

int myServo::getPos() {
  return currentPos;
}