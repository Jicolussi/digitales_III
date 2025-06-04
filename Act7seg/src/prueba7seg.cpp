#include <Arduino.h>
#include "sieteSeg.h"

void setup() {
  dec7seg_init();
}

void loop() {
    dec7seg(0);
    delay(1000);
    dec7seg(1);
    delay(1000);
    dec7seg(2);
    delay(1000);
    dec7seg(3);
    delay(1000);
    dec7seg(4);
    delay(1000);
    dec7seg(5);
    delay(1000);
    dec7seg(6);
    delay(1000);
    dec7seg(7);
    delay(1000);
    dec7seg(8);
    delay(1000);
    dec7seg(9);
    delay(1000);
}