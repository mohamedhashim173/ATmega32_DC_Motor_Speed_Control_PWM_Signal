/*
 * TIMER0_interface.h
 *
 *  Created on: Nov 11, 2022
 *      Author: MSAEED99
 */

#ifndef TIMER0_INTERFACE_H_
#define TIMER0_INTERFACE_H_


// Initialize Timer 0
void TIMER0_voidTimer0Init(void);

// Set compare match value via function when using Fast PWM Mode (Change value -> Change Feeding signal power)
void Timer0_voidSetCompareMatchVal(u8 copy_uoCompMatch);

// Callback function to Timer0 ISR
void TIMER0_voidSetCallBack(void (*copy_pvUserFunc)(void));


#endif /* TIMER0_INTERFACE_H_ */
