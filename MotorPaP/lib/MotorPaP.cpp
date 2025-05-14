#include <Arduino.h>
#include "MotorPaP.h"

void MotorPaP_init(){
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;

    GPIOA->CRL &= ~GPIO_CRL_CNF0 & ~GPIO_CRL_MODE0; //borro los bits del registro del pin 0
    GPIOA->CRL |=  GPIO_CRL_MODE0_0; // pongo los unos que quiero

    GPIOA->CRL &= ~GPIO_CRL_CNF1 & ~GPIO_CRL_MODE1;
    GPIOA->CRL |=  GPIO_CRL_MODE1_0;

    GPIOA->CRL &= ~GPIO_CRL_CNF2 & ~GPIO_CRL_MODE2;
    GPIOA->CRL |=  GPIO_CRL_MODE2_0;

    GPIOA->CRL &= ~GPIO_CRL_CNF3 & ~GPIO_CRL_MODE3;
    GPIOA->CRL |=  GPIO_CRL_MODE3_0;

}

void MotorPaP(char tipopasos, int pasos){

switch (tipopasos){

    case 'n':
        switch (pasos){
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
    break;

    case 'c':
        switch(pasos){
            case 1:
                GPIOA-> BSRR |=GPIO_BSRR_BS0;
                GPIOA-> BSRR |=GPIO_BSRR_BR1;
                GPIOA-> BSRR |=GPIO_BSRR_BR2;
                GPIOA-> BSRR |=GPIO_BSRR_BR3;
            break;
            case 2:
                GPIOA-> BSRR |=GPIO_BSRR_BR0;
                GPIOA-> BSRR |=GPIO_BSRR_BS1;
                GPIOA-> BSRR |=GPIO_BSRR_BR2;
                GPIOA-> BSRR |=GPIO_BSRR_BR3;   
            break;
            case 3:
                GPIOA-> BSRR |=GPIO_BSRR_BR0;
                GPIOA-> BSRR |=GPIO_BSRR_BR1;
                GPIOA-> BSRR |=GPIO_BSRR_BS2;
                GPIOA-> BSRR |=GPIO_BSRR_BR3;
            break;
                case 4:
                GPIOA-> BSRR |=GPIO_BSRR_BR0;
                GPIOA-> BSRR |=GPIO_BSRR_BR1;
                GPIOA-> BSRR |=GPIO_BSRR_BR2;
                GPIOA-> BSRR |=GPIO_BSRR_BS3;
            break;
            default:
                GPIOA-> BSRR |=GPIO_BSRR_BR0;
                GPIOA-> BSRR |=GPIO_BSRR_BR1;
                GPIOA-> BSRR |=GPIO_BSRR_BR2;
                GPIOA-> BSRR |=GPIO_BSRR_BR3;
        break;
        }
    break;

    case 'm':
        switch(pasos){
            case 1:
                GPIOA-> BSRR |= GPIO_BSRR_BS0;
                GPIOA-> BSRR |= GPIO_BSRR_BR1;
                GPIOA-> BSRR |= GPIO_BSRR_BR2;
                GPIOA-> BSRR |= GPIO_BSRR_BR3;
            break;
            case 2:
                GPIOA->BSRR |= GPIO_BSRR_BS0;
                GPIOA->BSRR |= GPIO_BSRR_BS1;
                GPIOA->BSRR |= GPIO_BSRR_BR2;
                GPIOA->BSRR |= GPIO_BSRR_BR3;
            break;
            case 3:
                GPIOA->BSRR |= GPIO_BSRR_BR0;
                GPIOA->BSRR |= GPIO_BSRR_BS1;
                GPIOA->BSRR |= GPIO_BSRR_BR2;
                GPIOA->BSRR |= GPIO_BSRR_BR3;
            break;
            case 4:
                GPIOA->BSRR |= GPIO_BSRR_BR0;
                GPIOA->BSRR |= GPIO_BSRR_BS1;
                GPIOA->BSRR |= GPIO_BSRR_BS2;
                GPIOA->BSRR |= GPIO_BSRR_BR3;
            break;
            case 5:
                GPIOA->BSRR |= GPIO_BSRR_BR0;
                GPIOA->BSRR |= GPIO_BSRR_BR1;
                GPIOA->BSRR |= GPIO_BSRR_BS2;
                GPIOA->BSRR |= GPIO_BSRR_BR3;
            break;
            case 6:
                GPIOA->BSRR |= GPIO_BSRR_BR0;
                GPIOA->BSRR |= GPIO_BSRR_BR1;
                GPIOA->BSRR |= GPIO_BSRR_BS2;
                GPIOA->BSRR |= GPIO_BSRR_BS3;
            break;
            case 7:
                GPIOA->BSRR |= GPIO_BSRR_BR0;
                GPIOA->BSRR |= GPIO_BSRR_BR1;
                GPIOA->BSRR |= GPIO_BSRR_BR2;
                GPIOA->BSRR |= GPIO_BSRR_BS3;
            break;
            case 8:
                GPIOA->BSRR |= GPIO_BSRR_BS0;
                GPIOA->BSRR |= GPIO_BSRR_BR1;
                GPIOA->BSRR |= GPIO_BSRR_BR2;
                GPIOA->BSRR |= GPIO_BSRR_BS3;
            break;
            default:
                GPIOA->BSRR |= GPIO_BSRR_BR0;
                GPIOA->BSRR |= GPIO_BSRR_BR1;
                GPIOA->BSRR |= GPIO_BSRR_BR2;
                GPIOA->BSRR |= GPIO_BSRR_BR3;
            break; 
        }
    break;

    default:
            GPIOA->BSRR |= GPIO_BSRR_BR0;
            GPIOA->BSRR |= GPIO_BSRR_BR1;
            GPIOA->BSRR |= GPIO_BSRR_BR2;
            GPIOA->BSRR |= GPIO_BSRR_BR3;
    break;
    }
}