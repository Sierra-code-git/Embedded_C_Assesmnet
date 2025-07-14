#include <avr/io.h>
#include <util/delay.h>
#include "led.h"
#include "sensor.h"
#include "uart.h"

int main(void) {
              // Initialize the LED pin (set as output)

               // Initialize the ADC module to read analog values (e.g., from temperature sensor)

        // Initialize UART communication with a baud rate of 9600

    while (1) {
             // Toggle the LED state (ON/OFF)

           // Wait for 500 milliseconds to create a blinking effect

         // Read temperature value from sensor and store it in 'temp'

         // Create a character buffer to hold the formatted temperature string

        
        // Format the temperature value into a string with 2 decimal places and store it in 'buffer'

         // Send the formatted temperature string over UART to a serial terminal
    }
}

