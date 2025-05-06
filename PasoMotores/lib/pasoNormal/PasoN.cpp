#include <Arduino.h>
#include "PasoN.h"

void PasoN_init(){
    RCC-> APB2ENR |= RCC_APB2ENR_IOPAEN;

    GPIOA -> CRL &= ~GPIO_CRL_CNF0;
    GPIOA -> CRL |= GPIO_CRL_MODE0_0;

    GPIOA -> CRL &= ~GPIO_CRL_CNF1;
    GPIOA -> CRL |= GPIO_CRL_MODE1_0;

    GPIOA -> CRL &= ~GPIO_CRL_CNF2;
    GPIOA -> CRL |= GPIO_CRL_MODE2_0;

    GPIOA -> CRL &= ~GPIO_CRL_CNF3;
    GPIOA -> CRL |= GPIO_CRL_MODE3_0;

}

void PasoN(int pasos){

    switch (pasos)
    {

    case 1:
        GPIOA->BSRR |= GPIO_BSRR_BS0;
        GPIOA->BSRR |= GPIO_BSRR_BS1;
        GPIOA->BSRR |= GPIO_BSRR_BR2;
        GPIOA->BSRR |= GPIO_BSRR_BR3;
    break;

    case 2:
        GPIOA->BSRR |= GPIO_BSRR_BR0;
        GPIOA->BSRR |= GPIO_BSRR_BS1;
        GPIOA->BSRR |= GPIO_BSRR_BS2;
        GPIOA->BSRR |= GPIO_BSRR_BR3;
    break;

    case 3:
        GPIOA->BSRR |= GPIO_BSRR_BR0;
        GPIOA->BSRR |= GPIO_BSRR_BR1;
        GPIOA->BSRR |= GPIO_BSRR_BS2;
        GPIOA->BSRR |= GPIO_BSRR_BS3;
    break;

    case 4:
        GPIOA->BSRR |= GPIO_BSRR_BS0;
        GPIOA->BSRR |= GPIO_BSRR_BR1;
        GPIOA->BSRR |= GPIO_BSRR_BR2;
        GPIOA->BSRR |= GPIO_BSRR_BS3;

    default:
        GPIOA->BSRR |= GPIO_BSRR_BR0;
        GPIOA->BSRR |= GPIO_BSRR_BR1;
        GPIOA->BSRR |= GPIO_BSRR_BR2;
        GPIOA->BSRR |= GPIO_BSRR_BR3;
    break;

    }
}