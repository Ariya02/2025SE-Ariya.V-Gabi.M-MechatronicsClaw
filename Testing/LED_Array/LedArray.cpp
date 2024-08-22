#include "LedArray.h"

myLed::myLed(String ver){
  version = ver;
}

void myLed::versionDisplay(String ver){
  version = ver;
}

void myLed::displayVer() {
  thisLed.textFont(Font_5x7);
  thisLed.textScrollSpeed(100);
  thisLed.stroke(0xFF, 0, 0);
  thisLed.beginText(0, 1, 0xFF, 0, 0);
  thisLed.print("version");
  thisLed.endText(SCROLL_LEFT);
}