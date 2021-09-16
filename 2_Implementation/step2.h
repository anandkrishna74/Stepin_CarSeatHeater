#ifndef STEP_2_H
#define STEP_2_H


#include <util/delay.h>
#include <avr/io.h>


void initADC(); //Initialize the registers for ADC setup.


uint16_t ReadADC(uint8_t ch); \\Gives the ADC values to the selected channel.


uint16_t step2_GetADC(void);

#endif \\STEP_2_H
