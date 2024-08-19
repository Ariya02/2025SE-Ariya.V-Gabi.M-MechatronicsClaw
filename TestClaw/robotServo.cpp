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

void myServo::moveServo(int moveAngle){  
 if (moveAngle > currentPos) {
    for (int angle = currentPos; angle <= moveAngle; angle += 1) {
      servos.write(angle);
      delay(20);
     }
  } 
  else {
    for (int angle = currentPos; angle >=moveAngle; angle -= 1) {
      servos.write(angle); 
      delay(20);
    }
  }
  currentPos = moveAngle; //Makes current position the angle
}


void myServo::openClaw(){
  setPos(50); //opens claw
  delay(1000);
}

void myServo::closeClaw(){
  setPos(90);//closes claw
  delay(1000);
}

void myServo:: resetPos(){
  moveServo(90);
  delay(1000);
}

int myServo::getPos() {
  return currentPos;
}