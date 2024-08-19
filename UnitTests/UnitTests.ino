#include <Servo.h>

Servo baseServo;  

  baseServo.attach(10);

void setup() {
  if (pos >= 0 && pos <=180){
    servos.write(pos);
    currentPos = pos;
  }
}

void loop() {}