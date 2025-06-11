#include <Blocs.h>
#include <stm32f103xb.h>

#define MUX1_IN_0 0 
#define MUX1_IN_1 1 
#define MUX1_SELE 2 
#define MUX1_OUT 0 

#define MUX2_IN_0 4 
#define MUX2_IN_1 5 
#define MUX2_SELE 6 
#define MUX2_OUT 5 

#define CONT_CLK 3 
#define CONT_OUT_0 1 
#define CONT_OUT_1 2 
#define CONT_OUT_2 3 
#define CONT_OUT_3 4 

#define SUM_A0 9 
#define SUM_A1 10 
#define SUM_B0 11 
#define SUM_B1 12 
#define SUM_CY 15 
#define SUM_Z0 12 
#define SUM_Z1 13 
#define SUM_CO 14 

int PA[12] = {0, 1, 2, 3, 4, 5, 6, 9, 10, 11, 12, 15}; 
int PB[9] = {0, 1, 2, 3, 4, 5, 12, 13, 14};

void Blocs_Init(){
    RCC -> APB2ENR |= RCC_APB2ENR_IOPAEN;
    RCC -> APB2ENR |= RCC_APB2ENR_IOPBEN;
    for (int i=0; i<13; i++){
        if (PA[i]<8){
            GPIOA -> CRL &= ~(0xF << (PA[i]*4));
            GPIOA -> CRL |= (1 << ((PA[i]*4)+2));
        }
        else{
            GPIOA -> CRH &= ~(0xF << ((PA[i]%8)*4));
            GPIOA -> CRH |= (1 << (((PA[i]%8)*4)+2));
        }
    } 
    for (int i=0; i<10; i++){
        if(PB[i]<8){
            GPIOB -> CRL &= ~(0xF << (PB[i]*4));
            GPIOB -> CRL |= (1 << (PB[i]*4));
        }
        else{
            GPIOB -> CRL &= ~(0xF << ((PB[i]%8)*4));
            GPIOB -> CRH |= (1 << ((PB[i]%8)*4));
        }
    }
}
void mux1(){
    int Pa2 = GPIOA -> IDR & (1 << MUX1_SELE);
    if(Pa2==0){
        int Pa0 = GPIOA -> IDR & (1 << MUX1_IN_0);
        if (Pa0) GPIOB -> BSRR |= (1 << MUX1_OUT);
        else GPIOB -> BSRR |= (1 << MUX1_OUT+16);
    }
    else{
        int Pa1 = GPIOA -> IDR & (1 << MUX1_IN_1);
        if (Pa1) GPIOB -> BSRR |= (1 << MUX1_OUT);
        else GPIOB -> BSRR |= (1 << MUX1_OUT+16);
    }
}
void mux2(){
    int Pa6 = GPIOA -> IDR & (1 << MUX2_SELE);
    if(Pa6==0){
        int Pa4 = GPIOA -> IDR & (1 << MUX2_IN_0);
        if (Pa4) GPIOB -> BSRR |= (1 << MUX2_OUT);
        else GPIOB -> BSRR |= (1 << MUX2_OUT+16);
    }
    else{
        int Pa5 = GPIOA -> IDR & (1 << MUX2_IN_1);
        if (Pa5) GPIOB -> BSRR |= (1 << MUX2_OUT);
        else GPIOB -> BSRR |= (1 << MUX2_OUT+16);
    }
}
int pos = 0;
void Cont_A(){
    int salidas[4] ={CONT_OUT_0, CONT_OUT_1, CONT_OUT_2, CONT_OUT_3};
    int Pa3 = GPIOA -> IDR & (1 << 3);
    if (Pa3==1){
        for (int i=0; i<4; i++){
            GPIOB -> BSRR |= (1 << salidas[i]+16);
        }
        if (pos>3){
            pos=0;
            GPIOB -> BSRR |= (1 << salidas[pos]);
            pos++;
            delay_ms(100);
        }
        else{
            GPIOB -> BSRR |= (1 << salidas[pos]);
            pos++;
            delay_ms(100);
        }
        
    }
}
void sum(){
    int Pa9 = GPIOA -> IDR & (1 << SUM_A0);
    int Pa10 = GPIOA -> IDR & (1 << SUM_A1);
    int Pa11 = GPIOA -> IDR & (1 << SUM_B0);
    int Pa12 = GPIOA -> IDR & (1 << SUM_B1);
    int Pa15 = GPIOA -> IDR & (1 << SUM_CY);
    int carry;
    int A = Pa9 + Pa11;
    int B = Pa10 + Pa12;
    
    int suma = A | (B << 1) | (carry << 2);
}