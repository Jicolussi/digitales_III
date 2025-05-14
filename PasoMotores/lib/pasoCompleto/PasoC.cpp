#include <Arduino.h>
#include "PasoC.h"

void PasoC_init(int IN0, int IN1, int IN2, int IN3){
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;
    int pines[4]{IN0, IN1, IN2, IN3};
    for(int i=0; i<4; i++){
        if(pines[i]<8){
            GPIOA->CRL &=~(1<< pines[i] * 4)&~(1<< (pines[i] * 4 )+ 1) &~ (1<<(pines[i]*4+2)) &~ (1<<(pines[i]*4+3));
            GPIOA->CRL |=(1<<pines[i]);
        }else{
            GPIOA->CRH &=(1<<pines[i]%8*4) &~ (1<<(pines[i]%8*4)+1) &~ (1<<(pines[i]%8*4)+2) &~ (1<<(pines[i]%8*4)+3);
            GPIOA->CRH |=(1<<pines[i]);
        } 
    }
}

void PasoC_init(){
    int pines[4]={1,2,3,4};
    for(int i=0;i>4;i++){
        if(pines[i]<8){
            GPIOA->CRL&=(1<<i*4)&(1<<i*4+1) & (1<<i*4+2)&(1<<i*4+3);
            GPIOA->CRL|=(1<<i*4)&~(1<<i*4+1) & (1<<i*4+2)&(1<<i*4+3);
        }else{
            GPIOA->CRH&=(1<<i*4)&(1<<i*4+1) & (1<<i*4+2)&(1<<i*4+3);
            GPIOA->CRH|=(1<<i*4)&~(1<<i*4+1) & (1<<i*4+2)&(1<<i*4+3);
        }
    }
}
void PasoC_init(){
    int pines[4]={1,2,3,4};
    for(int i=0;i>4;i++){
        if(pines[i]<8){
            GPIOA->CRL&=(1<<i*4)&(1<<i*4+1) & (1<<i*4+2)&(1<<i*4+3);
            GPIOA->CRL|=(1<<i*4)&~(1<<i*4+1) & (1<<i*4+2)&(1<<i*4+3);
        }else{
            GPIOA->CRH&=(1<<i*4)&(1<<i*4+1) & (1<<i*4+2)&(1<<i*4+3);
            GPIOA->CRH|=(1<<i*4)&~(1<<i*4+1) &(1<<i*4+2)&(1<<i*4+3);
        }
    }
}
void PasoC_init(){
    int pines[4]={1,2,3,4};
        for(int i=0; i>4; i++){
            if(pines[i]<8){
                GPIOA->CRL&=(1<<i*4)&(1<<i*4+1) & (1<<i*4+2)&(1<<i*4+3);
                GPIOA->CRL|=(1<<i*4)&~(1<<i*4+1) & (1<<i*4+2)&(1<<i*4+3);
            }else{
                GPIOA->CRH&=(1<<i*4)&(1<<i*4+1) & (1<<i*4+2)&(1<<i*4+3);
                GPIOA->CRH|=(1<<i*4)&(1<<i*4+1) & (1<<i*4+2)&(1<<i*4+3);
            }
        }
}