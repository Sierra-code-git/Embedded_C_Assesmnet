/*Here’s a starter code template in Embedded C for your Light-Sensitive Motor Control System using an ATmega328P microcontroller.
 This template includes ADC for LDR, PWM for motor control, button input with debounce, and I2C LCD display setup.*/

//Starter Code Template
#include <avr/io.h>
#include <util/delay.h>
#include "lcd_i2c.h"  // Include your I2C LCD library

#define BUTTON_PIN PB1
#define MOTOR_PWM_PIN PD6

// Initialize ADC
void ADC_init() {
    ADMUX = (1 << REFS0); // AVcc reference
    ADCSRA = (1 << ADEN) | (1 << ADPS2) | (1 << ADPS1); // Enable ADC, prescaler 64
}

// Read ADC value
uint16_t ADC_read(uint8_t channel) {
    ADMUX = (ADMUX & 0xF0) | (channel & 0x0F); // Select ADC channel
    ADCSRA |= (1 << ADSC); // Start conversion
    while (ADCSRA & (1 << ADSC));
    return ADC;
}

// Initialize PWM
void PWM_init() {
    DDRD |= (1 << MOTOR_PWM_PIN); // Set PWM pin as output
    TCCR0A = (1 << COM0A1) | (1 << WGM00) | (1 << WGM01); // Fast PWM, non-inverting
    TCCR0B = (1 << CS01); // Prescaler 8
}

// Set PWM duty cycle
void set_motor_speed(uint8_t speed) {
    OCR0A = speed;
}

// Debounce button
uint8_t is_button_pressed() {

	// Check if the button connected to BUTTON_PIN on port B is pressed (active low)
	
		// Debounce delay to avoid false triggering due to mechanical bounce

		// Check again after delay to confirm the button is still pressed
		
			// Button press confirmed, return 1
		
	}

    return 0;
}

int main(void) {
    DDRB &= ~(1 << BUTTON_PIN); // Button as input
    PORTB |= (1 << BUTTON_PIN); // Enable pull-up

    ADC_init();
    PWM_init();
    lcd_init(); // Initialize I2C LCD
    lcd_clear();

    uint8_t motor_on = 0;


	while (1) {
    // Check if the button is pressed
    
        // Toggle motor state (ON/OFF)
        // Clear the LCD display
        // Set cursor to first row, first column
        // Display motor status
        // Debounce delay to prevent multiple toggles
    }

    if (motor_on) {
        // Read light level from LDR connected to ADC channel 0
        // Scale 10-bit ADC value (0–1023) to 8-bit (0–255)
        // Set motor speed using PWM

        // Set cursor to second row, first column
        // Display label
        // Display current motor speed
    } 
	else 
	{
       // If motor is off, ensure speed is 0
    }

    _delay_ms(100); // Small delay to reduce CPU usage and update rate
}

}
