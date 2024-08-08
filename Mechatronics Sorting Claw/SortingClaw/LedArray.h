#ifndef LEDARRAY_H
#define LEDARRAY_H

#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

class myLed {
  private:
    ArduinoLEDMatrix Led;
    int pin;

  public:
    myLed(int Pin);

    void init();
    void version(); 
  };
#endif