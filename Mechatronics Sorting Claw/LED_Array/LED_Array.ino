#define LED_PIN 13

#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix Led;

void setup() {
  Serial.begin(9600);
   Led.begin();
   Led.textFont(Font_5x7);
   Led.textScrollSpeed(100);
   Led.stroke(0xFF, 0, 0);
   Led.beginText(0, 1, 0xFF, 0, 0);
   Led.print("V00.00.01");
   Led.endText(SCROLL_LEFT);
}

void loop() {
  Led.loadFrame(arrow_left);
  delay(500);

  Led.loadFrame(arrow_right);
  delay(500);
  
  Led.loadFrame(arrow_up);
  delay(500);

  Led.loadFrame(arrow_down);
  delay(500);

}