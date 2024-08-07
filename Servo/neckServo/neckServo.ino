<<<<<<< Updated upstream
#include <Arduino.h>
#include "robotServo.h"

myServo ElbowServo1(9);

void setup() {
  Serial.begin(9600);
  ElbowServo1.init(90);
}

void loop() {
  int pos = 0;
  for (pos = 100; pos >= 20; pos -= 1) {
    ElbowServo1.setPos(pos);              
    delay(50);                       
  }
  for (pos = 100; pos >=90; pos += 1){
    ElbowServo1.setPos(pos);              
    delay(50);  
  }
=======
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

>>>>>>> Stashed changes
}
