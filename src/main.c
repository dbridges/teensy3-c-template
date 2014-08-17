#include "core_pins.h"

int main(void)
{
    int delayTime = 100;

    pinMode(LED_BUILTIN, OUTPUT);

    while (1) {
        digitalWriteFast(LED_BUILTIN, HIGH);
        delay(delayTime);
        digitalWriteFast(LED_BUILTIN, LOW);
        delay(delayTime);
    }

    return 0;
}
