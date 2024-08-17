#include "rotatingServo.h"

rotateServo::rotateServo(int Pin){
  pin = Pin;
}

void rotateServo::initRotate(int initialPos){
  myBase.attach(pin);
  setPos(initialPos);
}

void rotateServo::setPos(int pos){
    if (pos >= 0 && pos <=180){
    myBase.write(pos);
    currentPos = pos;
}
}

void rotateServo::moveServo(int moveAngle){
 if (moveAngle > currentPos) {
    for (int angle = currentPos; angle <= moveAngle; angle += 1) {
      myBase.write(angle);
      delay(20);
     }
  } 
  else {
    for (int angle = currentPos; angle >=moveAngle; angle -= 1) {
      myBase.write(angle); 
      delay(20);
    }
  }
  currentPos = moveAngle; //Makes current position the angle
}

void rotateServo::resetPos(){
  moveServo(90);
  delay(1000);
}

int rotateServo::getPos(){
  return currentPos;
}