#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>

LED led1(LED1_PIN, LED1_ACT);
LED led2(LED2_PIN, LED2_ACT); 

OneButton button(EXT_BTN_PIN, !EXT_BTN_ACT);

int selectedLED = 1;

void btnSingleClick()
{
    if (selectedLED == 1) {
        led1.flip();
    } else {
        led2.flip();
    }
}

void btnDoubleClick() 
{
    selectedLED = (selectedLED == 1) ? 2 : 1;
}

void btnLongPress() {
    if (selectedLED == 1) {
        led1.blink(200);
    } else {
        led2.blink(200);
    }
}

void setup() {
    led1.off();
    led2.off();
    
    button.attachClick(btnSingleClick);
    button.attachDoubleClick(btnDoubleClick);
    button.attachLongPressStart(btnLongPress);
}

void loop() {
    led1.loop();
    led2.loop();
    button.tick();
}