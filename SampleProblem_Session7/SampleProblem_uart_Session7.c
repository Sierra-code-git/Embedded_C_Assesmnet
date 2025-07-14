#include <avr/io.h>
#include "uart.h"

void UART_Init(uint16_t baud) {
    uint16_t ubrr = F_CPU/16/baud - 1;
    UBRR0H = (ubrr >> 8);
    UBRR0L = ubrr;
    // Enable transmitter
    // 8-bit data
}

void UART_SendChar(char c) {
     // Wait until the UART Data Register is empty (ready to send)
    // Load the character into the UART Data Register to transmit
}


void UART_SendString(const char* str) {
     // Loop until the null terminator is reached
       // Send each character one by one using UART_SendChar
    
}

