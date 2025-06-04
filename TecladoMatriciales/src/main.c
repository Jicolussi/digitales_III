//actividad hecha por Colussi Puig Joaquin, Gallo Federico y Insfran Russo Tobias.
#include "TecladoMatri.h"
#include "stm32f103xb.h"
#include <string.h>

#define fede 6

char entrada[fede + 1] = {0};
char contra_a[fede + 1] = "1234";

uint8_t entra = 0;
uint8_t contra = 0;

void del(uint32_t ms);

void v-contra(void);
void c-contra(void);
void limpiar_entrada(void);

int main(void) {
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;
    GPIOA->CRL &= ~(GPIO_CRL_MODE0 | GPIO_CRL_CNF0 |
                    GPIO_CRL_MODE1 | GPIO_CRL_CNF1);

    GPIOA->CRL |= (GPIO_CRL_MODE0_1 | GPIO_CRL_MODE1_1); 
    GPIOA->BRR = (1 << 0) | (1 << 1);
    TecladoMatri_init();
}        
while (1) {
    char tecla = TecladoMatri();
    if (tecla !=0) {
        if(tecla=='*'){
            if (strcmp(entrada, contra_a) == 0) {
                GPIOA->BSRR = (1 << 0);
                GPIOA->BRR  = (1 << 1);
                contra = 1;
                limpiar_entrada();
            }else {
                GPIOA->BSRR = (1 << 1);
                GPIOA->BRR  = (1 << 0);
                contra = 0;
            }
            del(1000);
            GPIOA->BRR = (1 << 0) | (1 << 1);

        }else if(tecla =='#'){
            if(contra){
                limpiar_entrada();
                entrada=0;
                while (entra < fede) {
                    char tecla = TecladoMatri();
                    if (tecla != 0 && tecla != '*' && tecla != '#') {
                        input[input_index++] = tecla;
                        input[input_index] = '\0';
                        delay_ms(200);
                    }
                }
                strcpy(stored_password, input);
                contra=0;
            }
            limpiar_entrada();
        }else if(entra < fede){
            entrada[entra++]=tecla;
            entrada[entra]= '\0'
        }
        delay(200);
    }
}
void limpiar_entrada(void) {
    memset(entrada, 0, sizeof(entrada));
    entra = 0;
}   
void del(uint32_t ms) {
    for (uint32_t i = 0; i < ms * 8000; i++) {
        __NOP();
    }
}