#ifndef MOTOR_H
#define MOTOR_H

#define motorPin D5
#define lowSpeed 100
#define mediumSpeed 180
#define highSpeed 255


void initMotor();
void changeMotorSpeed(int speed);

#endif