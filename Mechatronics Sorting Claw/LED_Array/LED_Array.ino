#define LED_PIN 13

class Led 
{
private:
  byte pin;
public:
  Led() {} //do not use

  Led(byte pin)
  {
    this->pin = pin;
  }

  void init()
  {
    pinMode(pin, OUTPUT);
  }

  void on()
  {
    digitalWrite(pin, High);
  }

  void off()
  {

  }
};


void setup() {


}

void loop() {


}
