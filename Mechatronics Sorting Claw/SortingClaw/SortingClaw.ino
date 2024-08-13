#include <Arduino.h>
#include "robotServo.h"
#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

myServo baseServo(11);
myServo elbowServo1(10);
myServo elbowServo2(6);
myServo clawServo(5);

ArduinoLEDMatrix myLed;

void setup() {
  Serial.begin(9600);

  //Display Version
   myLed.begin();
   myLed.textFont(Font_5x7);
   myLed.textScrollSpeed(100);
   myLed.stroke(0xFF, 0, 0);
   myLed.beginText(0, 1, 0xFF, 0, 0);
   myLed.print("V00.00.08");
   myLed.endText(SCROLL_LEFT);

//initialise servos
  baseServo.init(90);
  elbowServo1.init(90);
  elbowServo2.init(90);
  clawServo.init(120);
  
  int pos = 0;
  for  (int pos = 90; pos <= 180; pos += 1) { //move baseServo to 180 degrees
    baseServo.setPos(pos);
    delay(15);
  }

  delay (100);

  for (int pos = 90; pos >= 45; pos -=1){ // move elbowServo1 to 45  degrees
    elbowServo1.setPos(pos);
    delay(15);
  }

delay(100);

  for (int pos = 90; pos <= 135; pos +=1) { //move elbowServo2 to 120 degrees
    elbowServo2.setPos(pos);
    delay(15);
  }

delay(100);

//open and close claw
  clawServo.setPos(30);
  delay(1000);
  clawServo.setPos(120);

delay(100);

    for (int pos = 120; pos >= 90; pos -=1) { //move elbowServo2 back
    elbowServo2.setPos(pos);
    delay(15);
  }

delay(100);


  for (int pos = 45; pos <= 90; pos +=1){ // move elbowServo1 back
    elbowServo1.setPos(pos);
    delay(15);
  }


  for  (int pos = 180; pos >= 90; pos -= 1) { //move baseServo back
    baseServo.setPos(pos);
    delay(15);
  }
}

void loop(){}
