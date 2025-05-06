#include <Arduino.h>
#ifndef PASOC_H
#define PASOC_H

void PasoC_init(int IN0, int IN1, int IN2, int IN3);
void PasoC(int IN0, int IN1, int IN2, int IN3, int pasos);
#endif 