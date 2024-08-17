#include "clawServo.h"

clawServo::clawServo(int Pin){
 pin = Pin;
}

void clawServo::initClaw(int initialPos){
  myClaw.attach(pin);
  setPos(initialPos);
}

void clawServo::openClaw(){
  setPos(50); //opens claw
  delay(1000);
}

void clawServo::closeClaw(){
  setPos(90);//closes claw
  delay(1000);
}

void clawServo::setPos(int pos){
  if (pos >= 0 && pos <=180){
  myClaw.write(pos);
  currentPos = pos;
  }
}

void clawServo::resetPos(){
  setPos(90);
  delay(1000);
}