#include <Arduino.h>
#include "robotServo.h"
#include "LedArray.h"

myServo baseServo(10);
myServo elbowServo1(9);


myLed displayLed("V00.00.001");

void setup() {
  Serial.begin(9600);
  displayLed.Led.begin();
  displayLed.displayVer();

  baseServo.init(90);
  elbowServo1.init(90);
  
  int pos = 0;
  for  (int pos = 90; pos <= 180; pos += 1) {
    baseServo.setPos(pos);
    delay(15);
  }

  delay (1000);

  for (int pos = 90; pos <= 180; pos +=1){
    elbowServo1.setPos(pos);
    delay(15);
  }
}

void loop() {

}
