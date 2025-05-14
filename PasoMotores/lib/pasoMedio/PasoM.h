#include <Arduino.h>
#ifndef PASOM_H
#define PASOM_H

void PasoM_init(int IN0, int IN1, int IN2, int IN3);
void PasoM(int IN0, int IN1, int IN2, int IN3, int pasos);
#endif