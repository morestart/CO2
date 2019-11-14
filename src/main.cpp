#include <Arduino.h>
#include "sensor.h"

void setup() {
  Serial.begin(9600);
}


void loop() {
  getSensorData();
  delay(2000);
}