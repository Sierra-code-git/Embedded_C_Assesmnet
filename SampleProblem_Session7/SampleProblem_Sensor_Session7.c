#include <avr/io.h>
#include "sensor.h"

void ADC_Init(void) {
    ADMUX = (1 << REFS0); // AVCC reference
    ADCSRA = (1 << ADEN) | (1 << ADPS2); // Enable ADC, prescaler 16
}

uint16_t ADC_Read(uint8_t channel) {
   // Select channel
    // Start conversion
    // Wait
    return ADC;
}

float Read_Temperature(void) {
    // LM35 on channel 0
    // Convert to °C
}
