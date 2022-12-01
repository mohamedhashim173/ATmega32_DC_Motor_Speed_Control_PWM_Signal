/*
 * TIMER0_private.h
 *
 *  Created on: Nov 11, 2022
 *      Author: MSAEED99
 */

#ifndef TIMER0_PRIVATE_H_
#define TIMER0_PRIVATE_H_



/********** Wave Generation Mode Select **********/
/* Wave Generation Mode Select
 * 1. NORMAL
 * 2. PWM_PHASE_CORRECT
 * 3. CTC
 * 4. FAST_PWM
 */
#define NORMAL				0
#define PWM_PHASE_CORRECT	1
#define CTC					2
#define FAST_PWM			3





/********** Compare Match Output Pin Mode *********/
/* Compare Output Mode, non-PWM Mode (Normal Mode or CTC Mode)
 * 1. NORMAL_PORT_OPERATION_OC0_PINB3_DISCONNECTED
 * 2. TOGGLE_OC0_PINB3_ON_COMPARE_MATCH
 * 3. CLEAR_OC0_PINB3_ON_COMPARE_MATCH
 * 4. SET_OC0_PINB3_ON_COMPARE_MATCH
 */
#define NORMAL_PORT_OPERATION_OC0_PINB3_DISCONNECTED			4
#define TOGGLE_OC0_PINB3_ON_COMPARE_MATCH						5
#define CLEAR_OC0_PINB3_ON_COMPARE_MATCH						6
#define SET_OC0_PINB3_ON_COMPARE_MATCH							7



/* Compare Output Mode, Fast PWM Mode
 * 1. NORMAL_PORT_OPERATION_OC0_PINB3_DISCONNECTED
 * 2. RESERVED
 * 3. CLEAR_OC0_PINB3_ON_COMPARE_MATCH_SET_OC0_PINB3_AT_TOP
 * 4. SET_OC0_PINB3_ON_COMPARE_MATCH_CLEAR_OC0_PINB3_AT_TOP
 */
#define RESERVED													8
#define CLEAR_OC0_PINB3_ON_COMPARE_MATCH_SET_OC0_PINB3_AT_TOP		9
#define SET_OC0_PINB3_ON_COMPARE_MATCH_CLEAR_OC0_PINB3_AT_TOP		10



/* Compare Output Mode, Phase Correct PWM Mode
 * 1. NORMAL_PORT_OPERATION_OC0_PINB3_DISCONNECTED
 * 2. RESERVED
 * 3. Clear_OC0_PINB3_on_compare_match_when_up_counting_Set_OC0_PINB3_on_compare_match_when_downcounting
 * 4. Set_OC0_PINB3_on_compare_match_when_up_counting_Clear_OC0_PINB3_on_compare_match_when_downcounting
 */
#define Clear_OC0_PINB3_on_compare_match_when_up_counting_Set_OC0_PINB3_on_compare_match_when_downcounting		11
#define Set_OC0_PINB3_on_compare_match_when_up_counting_Clear_OC0_PINB3_on_compare_match_when_downcounting		12





/************ Pre-scaler Clock Select ************/
/* Pre-scaler Clock Select
 * 1. NO_CLOCK_SOURCE
 * 2. NO_PRE_SCALING
 * 3. PRE_SCALER_8
 * 4. PRE_SCALER_64
 * 5. PRE_SCALER_256
 * 6. PRE_SCALER_1024
 * 7. EXTERNAL_CLOCK_SOURCE_ON_T0_PIN_ON_FALLING_EDGE
 * 8. EXTERNAL_CLOCK_SOURCE_ON_T0_PIN_ON_RISING_EDGE
 */
#define NO_CLOCK_SOURCE										13
#define NO_PRE_SCALING										14
#define PRE_SCALER_8										15
#define PRE_SCALER_64										16
#define PRE_SCALER_256										17
#define PRE_SCALER_1024										18
#define EXTERNAL_CLOCK_SOURCE_ON_T0_PIN_ON_FALLING_EDGE		19
#define EXTERNAL_CLOCK_SOURCE_ON_T0_PIN_ON_RISING_EDGE		20





#endif /* TIMER0_PRIVATE_H_ */
