#include <Arduino.h>
#include "sieteSeg.h"

void dec7seg_init(){
  RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;
  GPIOA->CRL |= GPIO_CRL_CNF0|GPIO_CRL_MODE0_0;
  GPIOA->CRL |= GPIO_CRL_CNF1|GPIO_CRL_MODE1_0;
  GPIOA->CRL |= GPIO_CRL_CNF2|GPIO_CRL_MODE2_0;
  GPIOA->CRL |= GPIO_CRL_CNF3|GPIO_CRL_MODE3_0;
  GPIOA->CRL |= GPIO_CRL_CNF4|GPIO_CRL_MODE4_0;
  GPIOA->CRL |= GPIO_CRL_CNF5|GPIO_CRL_MODE5_0;
  GPIOA->CRL |= GPIO_CRL_CNF6|GPIO_CRL_MODE6_0;
}
void dec7seg(int num){

  switch (num){
  case 0:
    GPIOA ->BSRR |= GPIO_BSRR_BS0;
    GPIOA ->BSRR |= GPIO_BSRR_BS1;
    GPIOA ->BSRR |= GPIO_BSRR_BS2;
    GPIOA ->BSRR |= GPIO_BSRR_BS3;
    GPIOA ->BSRR |= GPIO_BSRR_BS4;
    GPIOA ->BSRR |= GPIO_BSRR_BS5;
    GPIOA ->BSRR |= GPIO_BSRR_BR6;
  break; 
  case 1:
    GPIOA ->BSRR |= GPIO_BSRR_BR0;
    GPIOA ->BSRR |= GPIO_BSRR_BS1;
    GPIOA ->BSRR |= GPIO_BSRR_BS2;
    GPIOA ->BSRR |= GPIO_BSRR_BR3;
    GPIOA ->BSRR |= GPIO_BSRR_BR4;
    GPIOA ->BSRR |= GPIO_BSRR_BR5;
    GPIOA ->BSRR |= GPIO_BSRR_BR6;
  break;
  case 2:
    GPIOA ->BSRR |= GPIO_BSRR_BS0;
    GPIOA ->BSRR |= GPIO_BSRR_BS1;
    GPIOA ->BSRR |= GPIO_BSRR_BR2;
    GPIOA ->BSRR |= GPIO_BSRR_BS3;
    GPIOA ->BSRR |= GPIO_BSRR_BS4;
    GPIOA ->BSRR |= GPIO_BSRR_BR5;
    GPIOA ->BSRR |= GPIO_BSRR_BS6;
  break;
  case 3:
    GPIOA ->BSRR |= GPIO_BSRR_BS0;
    GPIOA ->BSRR |= GPIO_BSRR_BS1;
    GPIOA ->BSRR |= GPIO_BSRR_BS2;
    GPIOA ->BSRR |= GPIO_BSRR_BS3;
    GPIOA ->BSRR |= GPIO_BSRR_BR4;
    GPIOA ->BSRR |= GPIO_BSRR_BR5;
    GPIOA ->BSRR |= GPIO_BSRR_BS6;
  break;
  case 4:
    GPIOA ->BSRR |= GPIO_BSRR_BR0;
    GPIOA ->BSRR |= GPIO_BSRR_BS1;
    GPIOA ->BSRR |= GPIO_BSRR_BS2;
    GPIOA ->BSRR |= GPIO_BSRR_BR3;
    GPIOA ->BSRR |= GPIO_BSRR_BR4;
    GPIOA ->BSRR |= GPIO_BSRR_BS5;
    GPIOA ->BSRR |= GPIO_BSRR_BS6;
  break;
  case 5:
    GPIOA ->BSRR |= GPIO_BSRR_BS0;
    GPIOA ->BSRR |= GPIO_BSRR_BR1;
    GPIOA ->BSRR |= GPIO_BSRR_BS2;
    GPIOA ->BSRR |= GPIO_BSRR_BS3;
    GPIOA ->BSRR |= GPIO_BSRR_BR4;
    GPIOA ->BSRR |= GPIO_BSRR_BS5;
    GPIOA ->BSRR |= GPIO_BSRR_BS6;
  break;
  case 6:
    GPIOA ->BSRR |= GPIO_BSRR_BR0;
    GPIOA ->BSRR |= GPIO_BSRR_BR1;
    GPIOA ->BSRR |= GPIO_BSRR_BS2;
    GPIOA ->BSRR |= GPIO_BSRR_BS3;
    GPIOA ->BSRR |= GPIO_BSRR_BS4;
    GPIOA ->BSRR |= GPIO_BSRR_BS5;
    GPIOA ->BSRR |= GPIO_BSRR_BS6;
  break;
  case 7:
    GPIOA ->BSRR |= GPIO_BSRR_BS0;
    GPIOA ->BSRR |= GPIO_BSRR_BS1;
    GPIOA ->BSRR |= GPIO_BSRR_BS2;
    GPIOA ->BSRR |= GPIO_BSRR_BR3;
    GPIOA ->BSRR |= GPIO_BSRR_BR4;
    GPIOA ->BSRR |= GPIO_BSRR_BR5;
    GPIOA ->BSRR |= GPIO_BSRR_BR6;
  break;
  case 8:
    GPIOA ->BSRR |= GPIO_BSRR_BS0;
    GPIOA ->BSRR |= GPIO_BSRR_BS1;
    GPIOA ->BSRR |= GPIO_BSRR_BS2;
    GPIOA ->BSRR |= GPIO_BSRR_BS3;
    GPIOA ->BSRR |= GPIO_BSRR_BS4;
    GPIOA ->BSRR |= GPIO_BSRR_BS5;
    GPIOA ->BSRR |= GPIO_BSRR_BS6;
  break;
  case 9:
    GPIOA ->BSRR |= GPIO_BSRR_BS0;
    GPIOA ->BSRR |= GPIO_BSRR_BS1;
    GPIOA ->BSRR |= GPIO_BSRR_BS2;
    GPIOA ->BSRR |= GPIO_BSRR_BR3;
    GPIOA ->BSRR |= GPIO_BSRR_BR4;
    GPIOA ->BSRR |= GPIO_BSRR_BS5;
    GPIOA ->BSRR |= GPIO_BSRR_BS6;
  break;

  default:
    GPIOA ->BSRR |= GPIO_BSRR_BR0;
    GPIOA ->BSRR |= GPIO_BSRR_BR1;
    GPIOA ->BSRR |= GPIO_BSRR_BR2;
    GPIOA ->BSRR |= GPIO_BSRR_BR3;
    GPIOA ->BSRR |= GPIO_BSRR_BR4;
    GPIOA ->BSRR |= GPIO_BSRR_BR5;
    GPIOA ->BSRR |= GPIO_BSRR_BR6;
  break;
  }
}