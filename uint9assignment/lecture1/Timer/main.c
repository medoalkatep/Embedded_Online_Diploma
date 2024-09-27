/*
 ============================================================================
 Name        : assignments-lesson-9/1.c
 Author      : Mohamed Ahmed Mohamed Osman
 Version     :
 Copyright   : Your copyright notice
 Description : Timer
 ============================================================================
 */

#define F_CPU 8000000UL
#include "MCAL/Timers.h"

extern uint8_t u8_TOVNumber;

void TOIE_Callback()
{
	PORTA = ~PORTA;
}

int main(void)
{
	DDRA = 0xFF;
	sei();
	TIMER0_CALLBACK_CompareMatch_INTERRUPT(TOIE_Callback);
	STIMER0_CONFIG config = {CTC, OCIE_ENABLE, TOIE_DISABLE, PRESCALING_CLK8};
	TIMER0_SetCompareValue(0xF0);
    TIMER0_Init(&config);
	
	
    while (1) 
    {
    }
}

