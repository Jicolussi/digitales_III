#include <Arduino.h>
#include "dec7s.h"

int puls;
int cont;

void setup() {
  void dec7seg_init();
  GPIOA->CRH |=GPIO_CRH_CNF|GPIO_CRL_MODE1_0;
}

void loop() {
    
  if(puls=0){

  }
}
