/*
 * Hex2MorseLED.h
 *
 *  Created on: Feb 9, 2017
 *      Author: ik5m
 */

#ifndef HEX2MORSELED_H_
#define HEX2MORSELED_H_
#define RED_LED   GPIO_PIN_1
#define BLUE_LED  GPIO_PIN_2
#define GREEN_LED GPIO_PIN_3
volatile uint32_t ui32Loop;


/* Global Varibles */
uint8_t firstON = 0;
uint8_t secondON = 0;
uint8_t thirdON = 0;

int morse[16] = {0b1111111, //0 /* First 2 bits are selectors,
                  0b1101111,    //1    they let the function know
                  0b1100111,    //2    if it is a number or a letter */
                  0b1100011,    //3
                  0b1100001,    //4
                  0b1100000,    //5
                  0b1110000,    //6
                  0b1111000,    //7
                  0b1111100,    //8
                  0b1111110,    //9

                  0b0001,       //A
                  0b001000,     //B
                  0b001010,     //C
                  0b00100,      //D
                  0b000,        //E
                  0b000010      //F
                 };


void Morse_LED_out(uint8_t a, uint8_t b, uint8_t c, uint8_t d, uint8_t e){
    if(a == 1){
    GPIOPinWrite(GPIO_PORTF_BASE, RED_LED, RED_LED);

    for(ui32Loop = 0; ui32Loop < 3000000; ui32Loop++)//Long
    {
    }
    GPIOPinWrite(GPIO_PORTF_BASE, RED_LED, 0);
    }
    else if(a == 0){
    GPIOPinWrite(GPIO_PORTF_BASE, BLUE_LED, BLUE_LED);

    for(ui32Loop = 0; ui32Loop < 1500000; ui32Loop++)//short
    {
    }
    GPIOPinWrite(GPIO_PORTF_BASE, BLUE_LED, 0);
    }


    for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++);

    if(b == 1){
    GPIOPinWrite(GPIO_PORTF_BASE, RED_LED, RED_LED);
    for(ui32Loop = 0; ui32Loop < 3000000; ui32Loop++)//Long
       {
       }
    GPIOPinWrite(GPIO_PORTF_BASE, RED_LED, 0);
    }
    else if(b == 0){
    GPIOPinWrite(GPIO_PORTF_BASE, BLUE_LED, BLUE_LED);
    for(ui32Loop = 0; ui32Loop < 1500000; ui32Loop++)//short
       {
       }
    GPIOPinWrite(GPIO_PORTF_BASE, BLUE_LED, 0);
    }

     for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++);


    if(c == 1){
    GPIOPinWrite(GPIO_PORTF_BASE, RED_LED, RED_LED);
    for(ui32Loop = 0; ui32Loop < 3000000; ui32Loop++)//Long
       {
       }
    GPIOPinWrite(GPIO_PORTF_BASE, RED_LED, 0);
    }
    else if(c == 0){
    GPIOPinWrite(GPIO_PORTF_BASE, BLUE_LED, BLUE_LED);
    for(ui32Loop = 0; ui32Loop < 1500000; ui32Loop++)//short
       {
       }
    GPIOPinWrite(GPIO_PORTF_BASE, BLUE_LED, 0);
    }

     for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++);//

    if(d == 1){
    GPIOPinWrite(GPIO_PORTF_BASE, RED_LED, RED_LED);
    for(ui32Loop = 0; ui32Loop < 3000000; ui32Loop++)//Long
       {
       } //Long
    GPIOPinWrite(GPIO_PORTF_BASE, RED_LED, 0);
    }
    else if(d == 0){
    GPIOPinWrite(GPIO_PORTF_BASE, BLUE_LED, BLUE_LED);
    for(ui32Loop = 0; ui32Loop < 1500000; ui32Loop++)//short
       {
       }
    GPIOPinWrite(GPIO_PORTF_BASE, BLUE_LED, 0);
    }

     for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++);

    if(e == 1){
    GPIOPinWrite(GPIO_PORTF_BASE, RED_LED, RED_LED);
    for(ui32Loop = 0; ui32Loop < 3000000; ui32Loop++)//Long
       {
       }
    GPIOPinWrite(GPIO_PORTF_BASE, RED_LED, 0);
    }
    else if(e == 0){
    GPIOPinWrite(GPIO_PORTF_BASE, BLUE_LED, BLUE_LED);
    for(ui32Loop = 0; ui32Loop < 1500000; ui32Loop++)//short
       {
       }
    GPIOPinWrite(GPIO_PORTF_BASE, BLUE_LED, 0);
    }

    /* indicates new word */
    GPIOPinWrite(GPIO_PORTF_BASE, GREEN_LED, GREEN_LED);
    for(ui32Loop = 0; ui32Loop < 900000; ui32Loop++)
          {
        //Pause between LEDs
          }

    GPIOPinWrite(GPIO_PORTF_BASE, GREEN_LED, 0);

}

int translateFib(int fibNum){
    int FIRST = 0;
    int SECOND = 0;
    int THIRD = 0;
    int FOURTH = 0;

        FOURTH = fibNum & 0xF;
        if(fibNum > 0xF){
        THIRD  = (fibNum & 0x00F0) >> 4;
        thirdON = 1;
        if(fibNum > 0xFF){
        SECOND = (fibNum & 0x0F00) >> 8;
        secondON = 1;
        if(fibNum > 0xFFF){
        FIRST  = (fibNum & 0xF000) >> 12;
        firstON = 1;
        }}}

        uint8_t WORD;
        uint8_t SELECTOR, a, b, c, d, e = 0;


        if(firstON == 1){
        WORD = morse[FIRST];
        SELECTOR = (WORD & 0b1100000) >> 5;//Checks if the WORD is a number
                                           //or a letter. 00 is a number and
                                           //11 is a letter.
        if(SELECTOR == 0b11){
        a = (WORD & 0b0010000) >> 4;
        b = (WORD & 0b0001000) >> 3;
        c = (WORD & 0b0000100) >> 2;
        d = (WORD & 0b0000010) >> 1;
        e = (WORD & 0b0000001);
        }

        else if(SELECTOR == 0b00){
            if(WORD == 0b1){         //A
            a = 2;
            b = 2;
            c = 2;
            d = 0;
            e = 1;
            }
            else if(WORD == 0b1000){ //B
            a = 2;
            b = 1;
            c = 0;
            d = 0;
            e = 0;
            }
            else if(WORD == 0b1010){ //C
            a = 2;
            b = 1;
            c = 0;
            d = 1;
            e = 0;
            }
            else if(WORD == 0b100){ //D
            a = 2;
            b = 2;
            c = 1;
            d = 0;
            e = 0;
            }
            else if(WORD == 0b0){   //E
            a = 2;
            b = 2;
            c = 2;
            d = 2;
            e = 0;
            }
            else if(WORD == 0b0010){  //F
            a = 2;
            b = 0;
            c = 0;
            d = 1;
            e = 0;
            }
        }
        Morse_LED_out(a, b, c, d, e);
        firstON = 0;
        for(ui32Loop = 0; ui32Loop < 4000000; ui32Loop++); //Pause between WORDS
        }

        if(secondON == 1){
        WORD = morse[SECOND];
        SELECTOR = (WORD & 0b1100000) >> 5;//Checks if the WORD is a number
                                           //or a letter. 00 is a number and
                                           //11 is a letter.
        if(SELECTOR == 0b11){
        a = (WORD & 0b0010000) >> 4;
        b = (WORD & 0b0001000) >> 3;
        c = (WORD & 0b0000100) >> 2;
        d = (WORD & 0b0000010) >> 1;
        e = (WORD & 0b0000001);
        }

        else if(SELECTOR == 0b00){
            if(WORD == 0b1){         //A
            a = 2;
            b = 2;
            c = 2;
            d = 0;
            e = 1;
            }
            else if(WORD == 0b1000){ //B
            a = 2;
            b = 1;
            c = 0;
            d = 0;
            e = 0;
            }
            else if(WORD == 0b1010){ //C
            a = 2;
            b = 1;
            c = 0;
            d = 1;
            e = 0;
            }
            else if(WORD == 0b100){ //D
            a = 2;
            b = 2;
            c = 1;
            d = 0;
            e = 0;
            }
            else if(WORD == 0b0){   //E
            a = 2;
            b = 2;
            c = 2;
            d = 2;
            e = 0;
            }
            else if(WORD == 0b0010){  //F
            a = 2;
            b = 0;
            c = 0;
            d = 1;
            e = 0;
            }
        }
        Morse_LED_out(a, b, c, d, e);
        secondON = 0;
        for(ui32Loop = 0; ui32Loop < 4000000; ui32Loop++); //Pause between WORDS
        }

        if(thirdON == 1){
        WORD = morse[THIRD];
        SELECTOR = (WORD & 0b1100000) >> 5;//Checks if the WORD is a number
                                           //or a letter. 00 is a number and
                                           //11 is a letter.
        if(SELECTOR == 0b11){
        a = (WORD & 0b0010000) >> 4;
        b = (WORD & 0b0001000) >> 3;
        c = (WORD & 0b0000100) >> 2;
        d = (WORD & 0b0000010) >> 1;
        e = (WORD & 0b0000001);
        }

        else if(SELECTOR == 0b00){
            if(WORD == 0b1){         //A
            a = 2;
            b = 2;
            c = 2;
            d = 0;
            e = 1;
            }
            else if(WORD == 0b1000){ //B
            a = 2;
            b = 1;
            c = 0;
            d = 0;
            e = 0;
            }
            else if(WORD == 0b1010){ //C
            a = 2;
            b = 1;
            c = 0;
            d = 1;
            e = 0;
            }
            else if(WORD == 0b100){ //D
            a = 2;
            b = 2;
            c = 1;
            d = 0;
            e = 0;
            }
            else if(WORD == 0b0){   //E
            a = 2;
            b = 2;
            c = 2;
            d = 2;
            e = 0;
            }
            else if(WORD == 0b0010){  //F
            a = 2;
            b = 0;
            c = 0;
            d = 1;
            e = 0;
            }
        }
        Morse_LED_out(a, b, c, d, e);
        thirdON = 0;
        for(ui32Loop = 0; ui32Loop < 4000000; ui32Loop++); //Pause between WORDS

        }


        WORD = morse[FOURTH];
        SELECTOR = (WORD & 0b1100000) >> 5;//Checks if the WORD is a number
                                           //or a letter. 00 is a number and
                                           //11 is a letter.
        if(SELECTOR == 0b11){
        a = (WORD & 0b0010000) >> 4;
        b = (WORD & 0b0001000) >> 3;
        c = (WORD & 0b0000100) >> 2;
        d = (WORD & 0b0000010) >> 1;
        e = (WORD & 0b0000001);
        }

        else if(SELECTOR == 0b00){
            if(WORD == 0b1){         //A
            a = 2;
            b = 2;
            c = 2;
            d = 0;
            e = 1;
            }
            else if(WORD == 0b1000){ //B
            a = 2;
            b = 1;
            c = 0;
            d = 0;
            e = 0;
            }
            else if(WORD == 0b1010){ //C
            a = 2;
            b = 1;
            c = 0;
            d = 1;
            e = 0;
            }
            else if(WORD == 0b100){ //D
            a = 2;
            b = 2;
            c = 1;
            d = 0;
            e = 0;
            }
            else if(WORD == 0b0){   //E
            a = 2;
            b = 2;
            c = 2;
            d = 2;
            e = 0;
            }
            else if(WORD == 0b0010){  //F
            a = 2;
            b = 0;
            c = 0;
            d = 1;
            e = 0;
            }
        }
        Morse_LED_out(a, b, c, d, e);
        for(ui32Loop = 0; ui32Loop < 4000000; ui32Loop++); //Pause between WORDS


    return 0;
}

#endif /* HEX2MORSELED_H_ */
