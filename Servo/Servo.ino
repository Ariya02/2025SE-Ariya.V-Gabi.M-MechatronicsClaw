#include <Servo.h>

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
    pinMode(pin, OUTPUT);
  }
}



void setup() {
  myservo.attach(5, 700, 2300);
}

void loop() {
  myservo.write(0-180);
}