/**
 * main.c
 * written by John Kim
 */
#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"

#define RED_LED   GPIO_PIN_1
#define BLUE_LED  GPIO_PIN_2
#define GREEN_LED GPIO_PIN_3

extern int fib(int n);
void blink();
void show_morse(int fib);
void morse_blink(int n);

#ifdef DEBUG
void
__error__(char *pcFilename, uint32_t ui32Line)
{}
#endif

int main(void)
{
    SysCtlClockSet(SYSCTL_SYSDIV_4|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_OSC_MAIN);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED);
    blink();
	return 0;
}

void blink(){
    int i;
    int ret_fib = 0;
    for (i=0; i<20; i++){
        ret_fib = fib(i);
        show_morse(ret_fib);
        SysCtlDelay(20000000);
    }
    return;
}

void show_morse(int fibo){
    int pattern;
    if (fibo>=1000){
        pattern=fibo/1000;
        morse_blink(pattern);
    }
    if (fibo>=100){
            pattern=(fibo%1000)/100;
            morse_blink(pattern);
    }
    if (fibo>=10){
            pattern=(fibo%100)/10;
            morse_blink(pattern);
    }
    pattern=fibo%10;
    morse_blink(pattern);
}

void morse_blink(int n){
    switch(n){
    case 0:
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(10000000);
        break;
    case 1:
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(10000000);
        break;
    case 2:
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(10000000);
        break;
    case 3:
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(10000000);
        break;
    case 4:
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(10000000);
        break;
    case 5:
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(10000000);
        break;
    case 6:
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(10000000);
        break;
    case 7:
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(10000000);
        break;
    case 8:
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(6000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(10000000);
        break;
    case 9:
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, BLUE_LED);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(4000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, RED_LED);
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, RED_LED|BLUE_LED|GREEN_LED, 0);
        SysCtlDelay(10000000);
        break;
    default:
        break;
    }
    return;
}


/*char convert_to_morse(int n){
    switch(n){
    case 0:
        return 0x11111;
        break;
    case 1:
        return 0x01111;
        break;
    case 2:
        return 0x00111;
        break;
    case 3:
        return 0x00011;
        break;
    case 4:
        return 0x00001;
        break;
    case 5:
        return 0x00000;
        break;
    case 6:
        return 0x10000;
        break;
    case 7:
        return 0x11000;
        break;
    case 8:
        return 0x11100;
        break;
    case 9:
        return 0x11110;
        break;
    default:
        return 0x11111;
        break;
    }
}*/
