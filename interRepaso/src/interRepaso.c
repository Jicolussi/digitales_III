#include "stm32f103xb.h"
#include "sieteSeg.h"
#define inter 4


int main(void){
    dec7seg_init();
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;
    RCC->APB2ENR |= RCC_APB2ENR_IOPBEN;
    RCC->APB2ENR |= RCC_APB2ENR_AFIOEN;

    GPIOB->CRL &= ~(1 << (inter * 4))& ~(1 << (inter * 4)+1)&  ~(1 << (inter * 4)+2)& ~(1 << (inter * 4)+3); 
    GPIOB->CRL |=  (1 << (inter * 4+2));

    AFIO->EXTICR[1]&= ~(0xF << (3 * 4));

    EXTI->IMR   |=(1<<4);
    EXTI->RTSR  |=(1<<4);
    EXTI->FTSR  &= ~(1<<4);

    NVIC_EnableIRQ(EXTI3_IRQn);
    NVIC_SetPriority(EXTI3_IRQn, 0);

    while (1){
        switch (num){
            case(0):
            dec7seg(0);
            break;
            
            case(1):
            dec7seg(1);
            break;

            case(2):
            dec7seg(2);
            break;

            case(3):
            dec7seg(3);
            break;

            case(4):
            dec7seg(4);
            break;

            case(5):
            dec7seg(5);
            break;

            case(6):
            dec7seg(6);
            break;

            case(7):
            dec7seg(7);
            break;

            case(8):
            dec7seg(8);
            break;

            case(9):
            dec7seg(9);
            break;

            default:
            dec7seg(0);
            break;
        }

    }
    return 0;
}
void EXTI3_IRQHandler(void){
    if (EXTI->PR & (1 << 3)){
        EXTI->PR |= (1 << 3);
        int num=0;
    }
}
