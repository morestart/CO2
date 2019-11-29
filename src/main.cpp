#include <Arduino.h>
#include "wifi.h"
#include "mqtt.h"
#include "definitions.h"
#include "button.h"
#include "processdata.h"
#include "sensor.h"
#include "motor.h"


void setup()
{
	Serial.begin(9600);
	initButton();
	initMotor();
	initDHT();
	loadWifiWebConfig();
	loadMQTTConfig();
	subscribeTopic_();
	initTimer();
}

void loop()
{
	getButtonDown();
	keepMqttConnect();
	loopTimer();
}