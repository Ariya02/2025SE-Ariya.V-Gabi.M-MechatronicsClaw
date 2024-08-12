#ifndef LEDARRAY_H
#define LEDARRAY_H

#include <Arduino.h>
#include "Arduino_LED_Matrix.h"
#include "ArduinoGraphics.h"

class myLed {
  private:
    ArduinoLEDMatrix thisLed;
    String version;
  public:
    myLed(String ver); //initialises
    void versionDisplay(String version); //Update version
    void displayVer(); // displays updated version
    
  };
#endif