/*
 * TIMER0_config.h
 *
 *  Created on: Nov 11, 2022
 *      Author: MSAEED99
 */

#ifndef TIMER0_CONFIG_H_
#define TIMER0_CONFIG_H_


/********** Wave Generation Mode Select **********/
/* Wave Generation Mode Select
 * 1. NORMAL
 * 2. PWM_PHASE_CORRECT
 * 3. CTC
 * 4. FAST_PWM
 */
#define WAVE_FORM_GENERATION_MODE		FAST_PWM

// Clear on compare match value (used only with CTC mode)
#define COMP_MATCH_VAL_CTC_MODE			250


/********** Compare Match Output Pin Mode *********/
/* Compare Output Mode, non-PWM Mode (Normal Mode or CTC Mode)
 * 1. NORMAL_PORT_OPERATION_OC0_PINB3_DISCONNECTED
 * 2. TOGGLE_OC0_PINB3_ON_COMPARE_MATCH
 * 3. CLEAR_OC0_PINB3_ON_COMPARE_MATCH
 * 4. SET_OC0_PINB3_ON_COMPARE_MATCH
 */
#define COMPARE_OUTPUT_MODE_NON_PWM_MODE			NORMAL_PORT_OPERATION_OC0_PINB3_DISCONNECTED


/* Compare Output Mode, Fast PWM Mode
 * 1. NORMAL_PORT_OPERATION_OC0_PINB3_DISCONNECTED
 * 2. RESERVED
 * 3. CLEAR_OC0_PINB3_ON_COMPARE_MATCH_SET_OC0_PINB3_AT_TOP
 * 4. SET_OC0_PINB3_ON_COMPARE_MATCH_CLEAR_OC0_PINB3_AT_TOP
 */
#define COMPARE_OUTPUT_MODE_FAST_PWM_MODE			CLEAR_OC0_PINB3_ON_COMPARE_MATCH_SET_OC0_PINB3_AT_TOP


/* Compare Output Mode, Phase Correct PWM Mode
 * 1. NORMAL_PORT_OPERATION_OC0_PINB3_DISCONNECTED
 * 2. RESERVED
 * 3. Clear_OC0_PINB3_on_compare_match_when_up_counting_Set_OC0_PINB3_on_compare_match_when_downcounting
 * 4. Set_OC0_PINB3_on_compare_match_when_up_counting_Clear_OC0_PINB3_on_compare_match_when_downcounting
*/
#define COMPARE_OUTPUT_MODE_PHASE_CORRECT_PWM_MODE	NORMAL_PORT_OPERATION_OC0_PINB3_DISCONNECTED


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
#define PRE_SCALER_SELECT			PRE_SCALER_64

#endif /* TIMER0_CONFIG_H_ */

