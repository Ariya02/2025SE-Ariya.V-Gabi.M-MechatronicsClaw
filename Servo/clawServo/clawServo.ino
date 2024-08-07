#include <Arduino.h>
#include "robotServo.h"

myServo ClawServo(9);

void setup() {
  Serial.begin(9600);
  ClawServo.init(90);
}


void loop() {
  int position = 0;
for (position = 30; position <= 100; position += 1) { // goes from 45 degrees to 90 degrees
    // in steps of 1 degree
    ClawServo.setPos(position);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (position = 100; position >= 30; position -= 1) { 
    ClawServo.setPos(position);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}