#include <Servo.h>
#define SERVO_PIN 13 

class myServo
{
private: 
  byte pin;
public: 
  myServo() {} // do not use

  myServo(byte pin)
  {
    this->pin = pin;
  }

  void init()
  {
    pinMode(pin, OUTPUT);
  }

  void attach(pin);

  void write(angle)
  {
    angle(int, OUTPUT);
  }
};

myServo servo();
int pos = 0 ;

void setup() {
  servo.init();
  servo.attach(9);
}


void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

