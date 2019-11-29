#ifndef SENSOR_H
#define SENSOR_H

#include <Arduino.h>
int getSensorData();
void initDHT();
float getHum();
float getTem();

#endif