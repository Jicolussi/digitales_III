#include <Arduino.h>
#ifndef MOTORPAP_H
#define MOTORPAP_H

void MotorPaP_init(int IN0, int IN1, int IN2, int IN3);
void MotorPaP(int IN0, int IN1, int IN2, int IN3, int tipoPaso, int pasos);
#endif