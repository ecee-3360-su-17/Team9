

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "Hex2MorseLED.h"
//#include "utils/uartstdio.h"


extern int fib(int n);
int
main(void)
{
    int n;
    int fib_out = 0;
    //
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF))
    {
    }

    //
    // Configure the GPIO port for the LED operation.
    //
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED);

    //
    // Loop Forever
    //

    while(1) {

        fib_out = fib(7);
        translateFib(fib_out);
/*
        for (n = 0; n < 21; n++)
        {
             fib_out = fib(n); //Assembly fib function


            //    printf("%d \n", c);
             translateFib(fib_out);    //fib HEX to morse LED in C#
        }
        */

    }





}
