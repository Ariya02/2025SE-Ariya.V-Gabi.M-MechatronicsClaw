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

void myServo::moveServo(int angle){  
 if (angle > currentPos) {
    for (int angle = currentPos; angle <= angle; thisAngle += 1) {
      servos.write(thisAngle);
      delay(20);
     }
  } 
  else {
    for (int angle = currentPos; angle >= angle; thisAngle-= 1) {
      servos.write(thisAngle); 
      delay(15);
    }
  }
  currentPos = angle; //Makes current position the angle
  delay(1000); 
}


void myServo::moveClaw(){
  setPos(30); //opens claw
  delay(2000);
  setPos(120);//closes claw
  delay(500);
}

void myServo:: resetPos(){
  moveServo(90);
}

int myServo::getPos() {
  return currentPos;
}