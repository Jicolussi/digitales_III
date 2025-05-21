#include "stm32f103xb.h"
#include "TecladoMatri.h"

int main(void) {
    TecladoMatri_init();

    while (1) {
        char tecla = TecladoMatri();
        if (tecla) {
            //parte a realizar codigo para utilizar el teclado.
        }
    }
}