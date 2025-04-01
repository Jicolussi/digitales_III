//Joaquin Colussi Puig-Tobias Insfran Russo-Federico Gallo
#include <Arduino.h>
#include "stm32f103xb.h"

void setup() {
  RCC->APB2ENR|=RCC_APB2ENR_IOPAEN_Msk;
  RCC->APB2ENR|=RCC_APB2ENR_IOPBEN_Msk;
  GPIOB->CRL=(0x11111111);
  GPIOB->CRH=(0x11111111);
  GPIOA->CRL=(0x44444444);
  GPIOA->CRH=(0x44444444);
}

void loop() {
  uint16_t est=GPIOB->IDR;
  GPIOA->BSRR=(est | 0x23);
}