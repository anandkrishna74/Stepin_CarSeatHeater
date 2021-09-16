#include "step1.h"


void init(void)
{	
	DDRD |= (1<<PD2); 
    DDRD &= ~(1<<PD0); 
    PORTD |= (1<<PD0); 
    DDRD &= ~(1<<PD1); 
    PORTD |= (1<<PD1); 
}

void TurnLED_ON(){
    LED_PORT |= (1<<LED_PIN); 
}

void TurnLED_OFF(){
    LED_PORT &= ~(1<<LED_PIN);
}

int act1=0;
int activity1_LED(void)
{
       init();
        if(!(PIND&(1<<BUTTON_SENSOR )) && !(PIND&(1<<TEMP_SENSOR)))
        { 
            act1=1;
        }
        else  //in all other cases
        {
            act1=0;
        }
    return act1;
