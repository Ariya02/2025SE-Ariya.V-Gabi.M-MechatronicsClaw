#include <Arduino.h>
#include "robotServo.h"
#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

myServo baseServo(10);
myServo elbowServo1(9);

ArduinoLEDMatrix myLed;

void setup() {
  Serial.begin(9600);

  //Display Version
   myLed.begin();
   myLed.textFont(Font_5x7);
   myLed.textScrollSpeed(100);
   myLed.stroke(0xFF, 0, 0);
   myLed.beginText(0, 1, 0xFF, 0, 0);
   myLed.print("V00.00.01");
   myLed.endText(SCROLL_LEFT);

//initialise servos
  baseServo.init(90);
  elbowServo1.init(90);
  
//move servo to 180 degrees
  int pos = 0;
  for  (int pos = 90; pos <= 180; pos += 1) {
    baseServo.setPos(pos);
    delay(15);
  }

  delay (1000);

// move servo to 45 degrees
  for (int pos = 90; pos >= 180; pos -=1){
    elbowServo1.setPos(pos);
    delay(15);
  }
}

void loop() {

}
