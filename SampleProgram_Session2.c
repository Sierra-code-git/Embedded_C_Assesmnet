/*Here’s an example Embedded C program for the light-controlled LED brightness project using an LDR (via ADC) and an LED (via GPIO with PWM). 
This version is written for the ATmega328P microcontroller (used in Arduino Uno), using AVR-GCC style Embedded C:*/

//Embedded C Code (AVR-GCC)
#include <avr/io.h>
#include <util/delay.h>

// Initialize ADC
void ADC_init() {
    ADMUX = (1 << REFS0);                      // AVcc as reference, ADC0 as input
    ADCSRA = (1 << ADEN) | (1 << ADPS2);       // Enable ADC, prescaler = 16
}

// Read ADC value from channel 0
uint16_t ADC_read() {
    ADCSRA |= (1 << ADSC);                     // Start conversion
    while (ADCSRA & (1 << ADSC));              // Wait for conversion to finish
    return ADC;
}

// Initialize PWM on OC1A (Pin PB1 / Arduino D9)
void PWM_init() {
                           // Set PB1 as output
         // Fast PWM 8-bit, non-inverting
          // Prescaler = 8
}

int main(void) {
    ADC_init();
    PWM_init();

    while (1) {
                       // Read LDR value
                     // Scale 10-bit ADC to 8-bit PWM
                                     // Set PWM duty cycle
        							   // set delay time 100ms
    }
}
