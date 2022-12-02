/*
 * main.c
 *
 *  Created on: Nov 11, 2022
 *      Author: MSAEED99
 */


// Libraries
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <util/delay.h>

// MCAL
#include "DIO_interface.h"
#include "TIMER0_interface.h"

// Macros
#define delay	20



// Lec09_Task03: Using Fast PWM, control DC Motor speed
void main(void)
{
	// Timer0 output OC0 (PINB3) (See page 2 in data sheet)
	DIO_voidSetPinDirection(DIO_u8PORTB, DIO_u8PIN3, DIO_u8PIN_OUTPUT);

	// Initialize Timer0
	TIMER0_voidTimer0Init();

	// Enable "Global Interrupt Enable"
	GIE_voidEnable();

	while(1)
	{
		// Increase DC Motor speed
		for(u8 i = 0; i < 255; i++)
		{
			Timer0_voidSetCompareMatchVal(i);
			_delay_ms(delay);
		}

		// Decrease DC Motor speed
		for(u8 i = 0; i < 255; i++)
		{
			Timer0_voidSetCompareMatchVal(255 - i);
			_delay_ms(delay);
		}
	}
}


