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
   myLed.print("V00.01.13");
   myLed.endText(SCROLL_LEFT);

//initialise servos
  baseServo.init(90);
  elbowServo1.init(90);
  elbowServo2.init(90);
  clawServo.init(65);
  
  //Pick up and relocate 1st cube
  elbowServo2.moveServo(150);
  clawServo.closeClaw();
  elbowServo2.resetPos();
  baseServo.moveServo(180); // moves base to 180 degrees
  elbowServo1.moveServo(50); // moves elbow1 to 60 degrees
  elbowServo2.moveServo(140); // moves elbow2 to 130 degrees
  clawServo.openClaw();
  elbowServo2.resetPos();
  elbowServo1.resetPos();
  baseServo.resetPos();

  //Pick up and relocate 2nd cube
  elbowServo2.moveServo(160);
  clawServo.closeClaw();
  elbowServo2.resetPos();
  baseServo.moveServo(0);
  elbowServo1.moveServo(50); 
  elbowServo2.moveServo(140);
  clawServo.openClaw();
  elbowServo2.resetPos();
  elbowServo1.resetPos();
  baseServo.resetPos();

  //Pick up and relocate 3rd cube
  elbowServo2.moveServo(170);
  clawServo.closeClaw();
  elbowServo2.resetPos();
  baseServo.moveServo(45);
  elbowServo1.moveServo(50); 
  elbowServo2.moveServo(140);
  clawServo.openClaw();
  elbowServo2.resetPos();
  elbowServo1.resetPos();
  baseServo.resetPos();
}

void loop(){}
