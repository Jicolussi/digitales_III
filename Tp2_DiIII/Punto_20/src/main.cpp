<<<<<<< HEAD
#include <Arduino.h>
#include <stm32f103xb.h>
void setup() {
RCC->APB2ENR|=RCC_APB2ENR_IOPAEN_Msk;
RCC->APB2ENR|=RCC_APB2ENR_IOPBEN_Msk;
GPIOB->CRL=(0x11111111);
GPIOB->CRH=(0x11111111);
GPIOA->CRL=(0x44444444);
GPIOA->CRH=(0x44444444);
}

void loop() {
int est0=GPIOB->IDR & (1<<0);
int est1=GPIOB->IDR & (1<<1);
int est2=GPIOB->IDR & (1<<2);
int est3=GPIOB->IDR & (1<<3);
    if(est0){
        GPIOA ->BSRR |=GPIO_BSRR_BS0 | GPIO_BSRR_BR1
                     | GPIO_BSRR_BS2 | GPIO_BSRR_BR3
                     | GPIO_BSRR_BS4 | GPIO_BSRR_BR5
                     | GPIO_BSRR_BS6 | GPIO_BSRR_BR7;
    } if(est1){
        GPIOA ->BSRR |=GPIO_BSRR_BS0 | GPIO_BSRR_BR1
                     | GPIO_BSRR_BS2 | GPIO_BSRR_BR3
                     | GPIO_BSRR_BS4 | GPIO_BSRR_BR5
                     | GPIO_BSRR_BS6 | GPIO_BSRR_BR7;
    }if(est2){
        GPIOA ->BSRR |=GPIO_BSRR_BS0 | GPIO_BSRR_BR1
                     | GPIO_BSRR_BS2 | GPIO_BSRR_BR3
                     | GPIO_BSRR_BS4 | GPIO_BSRR_BR5
                     | GPIO_BSRR_BS6 | GPIO_BSRR_BR7;
    }if(est3){
        GPIOA ->BSRR |=GPIO_BSRR_BS0 | GPIO_BSRR_BR1
                     | GPIO_BSRR_BS2 | GPIO_BSRR_BR3
                     | GPIO_BSRR_BS4 | GPIO_BSRR_BR5
                     | GPIO_BSRR_BS6 | GPIO_BSRR_BR7;
    }

=======
#include <Arduino.h>
#include <stm32f103xb.h>
void setup() {
RCC->APB2ENR|=RCC_APB2ENR_IOPAEN_Msk;
RCC->APB2ENR|=RCC_APB2ENR_IOPBEN_Msk;
GPIOB->CRL=(0x11111111);
GPIOB->CRH=(0x11111111);
GPIOA->CRL=(0x44444444);
GPIOA->CRH=(0x44444444);
}

void loop() {
int est0=GPIOB->IDR & (1<<0);
int est1=GPIOB->IDR & (1<<1);
int est2=GPIOB->IDR & (1<<2);
int est3=GPIOB->IDR & (1<<3);
    if(est0){
        GPIOA ->BSRR |=GPIO_BSRR_BS0 | GPIO_BSRR_BR1
                     | GPIO_BSRR_BS2 | GPIO_BSRR_BR3
                     | GPIO_BSRR_BS4 | GPIO_BSRR_BR5
                     | GPIO_BSRR_BS6 | GPIO_BSRR_BR7;
    } if(est1){
        GPIOA ->BSRR |=GPIO_BSRR_BS0 | GPIO_BSRR_BR1
                     | GPIO_BSRR_BS2 | GPIO_BSRR_BR3
                     | GPIO_BSRR_BS4 | GPIO_BSRR_BR5
                     | GPIO_BSRR_BS6 | GPIO_BSRR_BR7;
    }if(est2){
        GPIOA ->BSRR |=GPIO_BSRR_BS0 | GPIO_BSRR_BR1
                     | GPIO_BSRR_BS2 | GPIO_BSRR_BR3
                     | GPIO_BSRR_BS4 | GPIO_BSRR_BR5
                     | GPIO_BSRR_BS6 | GPIO_BSRR_BR7;
    }if(est3){
        GPIOA ->BSRR |=GPIO_BSRR_BS0 | GPIO_BSRR_BR1
                     | GPIO_BSRR_BS2 | GPIO_BSRR_BR3
                     | GPIO_BSRR_BS4 | GPIO_BSRR_BR5
                     | GPIO_BSRR_BS6 | GPIO_BSRR_BR7;
    }

>>>>>>> a78c6f631c14a108d9a3b9cc7c0b434d3865c121
}