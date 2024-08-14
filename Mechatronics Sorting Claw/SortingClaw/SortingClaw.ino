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
   myLed.print("V00.00.09");
   myLed.endText(SCROLL_LEFT);

//initialise servos
  baseServo.init(90);
  elbowServo1.init(90);
  elbowServo2.init(90);
  clawServo.init(120);
  
  baseServo.moveServo(180); // moves base to 180 degrees
  elbowServo1.moveServo(45); // moves elbow1 to 45 degrees
  elbowServo2.moveServo(120); // moves elbow2 to 120 degrees
  clawServo.moveClaw(); //Opens and closes claw
  elbowServo2.resetPos();
  elbowServo1.resetPos();
  baseServo.resetPos();
}

void loop(){}
