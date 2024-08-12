#include "LedArray.h"

myLed::myLed(int Pin){
    pin = Pin;
}

void myLed::init(){
  Led.begin();
}

void myLed::version() {
  Led.textFont(Font_5x7);
  Led.textScrollSpeed(100);
  Led.stroke(0xFF, 0, 0);
  Led.beginText(0, 1, 0xFF, 0, 0);
  Led.print("V00.00.01");
  Led.endText(SCROLL_LEFT);
}