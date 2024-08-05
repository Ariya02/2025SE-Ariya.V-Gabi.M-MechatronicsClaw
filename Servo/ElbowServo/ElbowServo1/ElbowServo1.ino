#include <Arduino.h>
#include "robotServo.h"

myServo ElbowServo1(9);

void setup() {
  Serial.begin(9600);
  ElbowServo1.init(90);
}

void loop() {
  int pos = 0;
  for (pos = 90; pos >= 0; pos -= 1) {
    ElbowServo1.setPos(pos);              
    delay(100);                       
  }
}
