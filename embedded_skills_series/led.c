#include "led.h"
#include <msp430.h>


void init_led()
{
    P1DIR |= red_LED; // direct pin as output
    P9DIR |= green_LED; // direct pin as output
    P1OUT ___ red_LED; // turn red LED Off
    P9OUT __ green_LED; // turn green LED on
}
