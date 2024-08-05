#include <Arduino.h>
#include "robotServo.h"

myServo BaseServo(9);

void setup() {
  Serial.begin(9600);
  BaseServo.init(90);
}


void loop() {
  int position = 0;
for (position = 0; position <= 180; position += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    BaseServo.setPos(position);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (position = 180; position >= 0; position -= 1) { // goes from 180 degrees to 0 degrees
    BaseServo.setPos(position);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}