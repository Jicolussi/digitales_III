#include <Arduino.h>
#include "7seg.h"

void 7seg_init(){
    RCC->APB2ENR |= RCC_APB2ENR_IOPBEN;

  //  GPIOB -> CRL &= ~;
}