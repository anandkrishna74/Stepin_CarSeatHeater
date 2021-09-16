#ifndef STEP_3_H
#define STEP_3_H


#define PWM20PERCENT  // Output PWM for 20% duty cycle. 
#define PWM40PERCENT // Output PWM for 40% duty cycle.
#define PWM70PERCENT // Output PWM for 70% duty cycle. 
#define PWM95PERCENT //Output PWM for 95% duty cycle.


#include <util/delay.h>
#include <avr/io.h>

 //Function Definitions


void initTimer();

void Step3_PWM(uint16_t temp);

#endif
