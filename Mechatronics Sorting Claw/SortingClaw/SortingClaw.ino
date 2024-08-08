#include <Arduino.h>
#include "robotServo.h"
#include "LedArray.h"

#define LED_PIN 13

myServo baseServo(5);
myServo elbowServo1(6);
myServo elbowServo2(9);
myServo neckServo(10);
myServo clawServo(11);

myLed myLed();

void setup() {
  Serial.begin(9600);
  baseServo.init(90);
  elbowServo1.init(90);
  elbowServo2.init(90);
  neckServo.init(90);
  clawServo.init(90);

  myLed.init();
  myLed.version();
}

void loop() {
  baseServo.setPos(45);
  elbowServo1.setPos(45);
  elbowServo2.setPos(45);
  neckServo.setPos(45);
  clawServo.setPos(45);
}
