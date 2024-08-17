#include "clawServo.h"
#include "hingeServo.h"
#include "rotatingServo.h"
#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

#define BASE_SERVO_PIN 11
#define ELBOW1_SERVO_PIN 10
#define ELBOW2_SERVO_PIN 6
#define CLAW_SERVO_PIN 5

rotateServo baseServo(BASE_SERVO_PIN);
hingeServo elbowServo1(ELBOW1_SERVO_PIN); //bottom hinge servo
hingeServo elbowServo2(ELBOW2_SERVO_PIN); //top hinge servo
clawServo sortingClaw(CLAW_SERVO_PIN); 

ArduinoLEDMatrix myLed;

void setup() {
  //Display Version
  myLed.begin();
   myLed.textFont(Font_5x7);
   myLed.textScrollSpeed(100);
   myLed.stroke(0xFF, 0, 0);
   myLed.beginText(0, 1, 0xFF, 0, 0);
   myLed.print("V00.02.01");
   myLed.endText(SCROLL_LEFT);

   //initialise servos
  baseServo.initRotate(90);
  elbowServo1.initHinge(90);
  elbowServo2.initHinge(90);
  sortingClaw.initClaw(65);

  //Pick up and relocate 1st claw
  elbowServo2.moveServo(150);
  sortingClaw.closeClaw();
  elbowServo2.resetPos();
  baseServo.moveServo(180); // moves base to 180 degrees
  elbowServo1.moveServo(50); // moves elbow1 to 60 degrees
  elbowServo2.moveServo(140); // moves elbow2 to 130 degrees
  sortingClaw.openClaw();
  elbowServo1.resetPos();
  elbowServo2.resetPos();
  baseServo.resetPos();

  //Pick up and relocate 2nd claw
  elbowServo2.moveServo(160);
  sortingClaw.closeClaw();
  elbowServo2.resetPos();
  baseServo.moveServo(0);
  elbowServo1.moveServo(50); 
  elbowServo2.moveServo(140);
  sortingClaw.openClaw();
  elbowServo1.resetPos();
  elbowServo2.resetPos();
  baseServo.resetPos();

  //Pick up and relocate 3rd claw
  elbowServo2.moveServo(170);
  sortingClaw.closeClaw();
  elbowServo2.resetPos();
  baseServo.moveServo(45);
  elbowServo1.moveServo(50); 
  elbowServo2.moveServo(140);
  sortingClaw.openClaw();
  elbowServo1.resetPos();
  elbowServo2.resetPos();
  baseServo.resetPos();
}

void loop() {}
