#include "hingeServo.h"

hingeServo::hingeServo(int Pin){
  pin = Pin;
}

void hingeServo::initHinge(int initialPos){
  myElbow.attach(pin);
  setPos(initialPos);
}

void hingeServo::setPos(int pos){
  if (pos >= 0 && pos <=180){
  myElbow.write(pos);
  currentPos = pos;
  }
}

void hingeServo::resetPos(){
  moveServo(90);
  delay(100);
}

void hingeServo::moveServo(int moveAngle){
   if (moveAngle > currentPos) {
    for (int angle = currentPos; angle <= moveAngle; angle += 1) {
      myElbow.write(angle);
      delay(20);
     }
  } 
  else {
    for (int angle = currentPos; angle >=moveAngle; angle -= 1) {
      myElbow.write(angle); 
      delay(20);
    }
  }
  currentPos = moveAngle; //Makes current position the angle
}

int hingeServo::getPos(){
  return currentPos;
}