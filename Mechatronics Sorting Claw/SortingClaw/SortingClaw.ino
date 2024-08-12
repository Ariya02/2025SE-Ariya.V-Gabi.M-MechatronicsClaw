#include <Arduino.h>
#include "robotServo.h"
#include "LedArray.h"

#define LED_PIN 13

myServo baseServo(10);
//myServo elbowServo1(6);
//myServo elbowServo2(9);
//myServo neckServo(10);
//myServo clawServo(11);

//myLed myLed();

void setup() {
  Serial.begin(9600);
  baseServo.init(90);
  //elbowServo1.init(90);
  //elbowServo2.init(90);
  //neckServo.init(90);
  //clawServo.init(90);

}

void loop() {
  int pos = 0;
  for (pos = 90; pos >= 45; pos -=1){
      baseServo.setPos(pos);
      delay(50);
  }
}
