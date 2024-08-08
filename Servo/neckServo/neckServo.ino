#include <Arduino.h>
#include "robotServo.h"

myServo neckServo(9);

void setup() {
  Serial.begin(9600);
  neckServo.init(90);
}

void loop() {
  int pos = 0;
  for (pos = 45; pos <= 180; pos += 1) { // goes from 45 degrees to 180 degrees
      neckServo.setPos(pos);              // tell servo to go to position in variable 'pos'
      delay(100);                       // waits 15ms for the servo to reach the position
    }
    for (pos = 180; pos >= 45; pos -= 1) { // goes from 180 degrees to 45 degrees
      neckServo.setPos(pos);              // tell servo to go to position in variable 'pos'
      delay(100);                       // waits 15ms for the servo to reach the position
    }
      for (pos = 45; pos >= 0; pos -= 1) { // goes from 45 degrees to 0 degrees
      neckServo.setPos(pos);              // tell servo to go to position in variable 'pos'
      delay(100);                       // waits 15ms for the servo to reach the position
    }
      for (pos = 0; pos <= 45; pos += 1) { // goes from 0 degrees to 180 degrees
      neckServo.setPos(pos);              // tell servo to go to position in variable 'pos'
      delay(100);                       // waits 15ms for the servo to reach the position
    }
}
