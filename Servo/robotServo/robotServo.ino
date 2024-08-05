#include <Arduino.h>
#include "robotServo.h"

myServo myServo(9);

void setup() {
  Serial.begin(9600);
  myServo.init(90);
}


void loop() {
  myServo.setPos(90);
  delay(1000);
  int position = myServo.getPos();
  myServo.setPos(0);
}