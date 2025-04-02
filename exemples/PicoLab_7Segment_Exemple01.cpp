#include <Arduino.h>
#include <Wire.h>
#include <PiCoLabSensors.h>



void setup() {
  Wire.begin(); // join i2c bus (address optional for master)  
}

void loop() {
  for (int i = 0; i < 10; i++) {
    writeinto7segment(i);
    delay(250);
  }
  delay(1000);
  clear7segment();
  delay(1000);
  for (int i = 9; i >= 0; i--) {
    writeinto7segment(i);
    delay(250);
  }
  delay(1000);
  clear7segment();
  delay(1000);
}