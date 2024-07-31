#include <Servo.h>
#define SERVO_PIN 13 

class Servo
{
private: 
  byte pin;
public: 
  Servo() {} // do not use

  Servo(byte pin)
  {
    this->pin = pin;
  }

  void init()
  {
    pinMode(pin, OUTPUT);
  }

  void attach(pin)
  {
    pinMode(pin, OUTPUT);
  }

  void write(angle)
  {
    angle(int, OUTPUT);
  }
};

Servo servo(SERVO_PIN);
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

