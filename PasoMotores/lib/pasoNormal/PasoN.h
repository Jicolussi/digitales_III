#include <Arduino.h>
#ifndef PASON_H
#define PASON_H

void PasoN_init(int IN0, int IN1, int IN2, int IN3);
void PasoN(int IN0, int IN1, int IN2, int IN3, int pasos);
#endif