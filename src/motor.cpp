#include <Arduino.h>
#include "motor.h"

void initMotor() {
    pinMode(motorPin, OUTPUT);
}

void changeMotorSpeed(int speed) {
    // speed 是 0~255 的整数值，对应电压从 0 到+5V，值越小，输出等效电压越低。
    analogWrite(motorPin, speed);
}