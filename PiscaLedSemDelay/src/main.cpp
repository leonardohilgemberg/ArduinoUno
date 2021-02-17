#include <Arduino.h>

#define PIN_LED_STATUS 13 // Pino que deve piscar o LED
#define TIMER_DELAY 1000 // Tempo para piscar o LED.

#define LED_ON 1
#define LED_OFF 0

void funcPiscaLed( void );

void setup() {
    pinMode(PIN_LED_STATUS, OUTPUT);
}

void loop() {
    funcPiscaLed();
}

void funcPiscaLed( void ){

    static unsigned long timerPiscaLed = 0;

    if(millis() - timerPiscaLed > TIMER_DELAY){
        timerPiscaLed = millis();

        if((millis()%2) == LED_ON){
            digitalWrite(PIN_LED_STATUS, 1);
        }else{
            digitalWrite(PIN_LED_STATUS, 0);
        }
    }   
}