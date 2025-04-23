#include "Deco3a8.h"
#include <Arduino.h>

void Deco3a8_init(){
    RCC->APB2ENR|=RCC_APB2ENR_IOPBEN_Msk;

    GPIOB->CRL |= 0x11111111;
}
void dec3a8(int I0, int I1, int I2){
    if(I0==0 & I1==0 & I2==0){
        GPIOB->BSRR |=(1<<0);
    }
    if(I0==0 & I1==0 & I2==1){
        GPIOB->BSRR |=(1<<1);
    }
    if(I0==0 & I1==1 & I2==0){
        GPIOB->BSRR |=(1<<2);
    }
    if(I0==0 & I1==1 & I2==1){
        GPIOB->BSRR |=(1<<3);
    }
    if(I0==1 & I1==0 & I2==0){
        GPIOB->BSRR |=(1<<4);
    }
    if(I0==1 & I1==0 & I2==1){
        GPIOB->BSRR |=(1<<5);
    }
    if(I0==1 & I1==1 & I2==0){
        GPIOB->BSRR |=(1<<6);
    }
    if(I0==1 & I1==1 & I2==1){
        GPIOB->BSRR |=(1<<7);
    }
}    