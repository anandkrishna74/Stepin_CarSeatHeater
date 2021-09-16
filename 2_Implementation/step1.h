#ifndef STEP_1_H
#define STEP_1_H


#define F_CPU 16000000UL 	// Clock Frequency of MCU is 16 MHz 
#define LED_PORT (PORTD)    //LED Port Number 
#define LED_PIN  (PORTD2)   // LED Pin number  
#define BUTTON_SENSOR  (PORTD0)   // Port for Button Sensor  
#define TEMP_SENSOR  (PORTD1)   // Port for Temperature Sensor   


#include <util/delay.h>
#include <avr/io.h>


void init(void);

void TurnLED_ON();
//Function to turn LED ON.


void TurnLED_OFF();

//function to turn led off.
int activity1_LED(void);

#endif 
