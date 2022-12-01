/*
 * TIMER0_register.h
 *
 *  Created on: Nov 11, 2022
 *      Author: MSAEED99
 */

#ifndef TIMER0_REGISTER_H_
#define TIMER0_REGISTER_H_


// Timer0 Control register - TCCR0
#define TCCR0			*((volatile u8*) 0x53)
// Timer0 Control register bits
#define TCCR0_FOC0		7		/* Force output compare*/
#define TCCR0_WGM00		6		/* Wave generation mode bit0*/
#define TCCR0_COM01		5		/* OC0 pin action bit1*/
#define TCCR0_COM00		4		/* OC0 pin action bit0*/
#define TCCR0_WGM01		3		/* Wave generation mode bit1*/
#define TCCR0_CS02		2		/* Pre-scaler value bit2*/
#define TCCR0_CS01		1		/* Pre-scaler value bit1*/
#define TCCR0_CS00		0		/* Pre-scaler value bit0*/


// Timer/Counter0 register
#define TCNT0			*((volatile u8*) 0x52)


// Compare Match register
#define OCR0			*((volatile u8*) 0x5C)


// Timer0 Interrupt Mask
#define TIMSK			*((volatile u8*) 0x59)
// Timer0 Interrupt Mask bits
#define TIMSK_OCIE0		1		/* Output compare 0 interrupt flag*/
#define TIMSK_TOIE0		0		/* Overflow 0 interrupt flag*/


// Timer0 flag
#define TIFR			*((volatile u8*) 0x58)


#endif /* TIMER0_REGISTER_H_ */
