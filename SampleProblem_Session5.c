/*Here’s an Embedded C example for power-efficient interrupt management using an ATmega328P microcontroller. 
This code puts the MCU into power-down sleep mode and wakes it up using an external interrupt (e.g., button press on INT0).*/

//Embedded C Code: Sleep and Wake-Up via Interrupt
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>
#include <util/delay.h>

#define LED_PIN PB0

// Interrupt Service Routine for INT0
ISR(INT0_vect) {
    // Wake-up logic: toggle LED
    PORTB ^= (1 << LED_PIN);
}


void setup_interrupt() {
      	 	  	// Set LED pin as output
     	 	 	// Turn off LED initially by clearing the output

          	  	// Configure PD2 (INT0) as input
         	   	// Enable internal pull-up resistor on PD2

        	   	// Enable external interrupt INT0
          		// Set INT0 to trigger on falling edge (button press)
                         // Enable global interrupts
}


int main(void) {
     // Initialize interrupt and I/O settings

    while (1) {
        // Prepare the microcontroller to enter power-down sleep mode
        
                 // Enable sleep mode
                    // Put MCU to sleep until an interrupt occurs

        // MCU wakes up here after INT0 interrupt is triggered
                // Disable sleep to prevent re-entering sleep unintentionally

                 // Optional delay for debounce or to visualize LED activity
    }
}


