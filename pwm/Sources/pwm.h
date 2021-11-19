/*
 * pwm.h
 *
 *  Created on: Aug 22, 2019
 *      Author: aokutlu
 */

#ifndef PWM_H_
#define PWM_H_

#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

#include "modulePwm.h"
//#include "modulePIT0.h"

#define nofPwm 4U

typedef struct
{
	volatile uint32* reg;
	uint32 mask;
} pwmMask;

typedef struct
{
	volatile uint32* reg;
} pwmReg;

void pwmEnable(volatile uint32 *reg0, volatile uint32 *reg1);
void pwmDisable(volatile uint32 *reg0, volatile uint32 *reg1);
bool setPwmDeadTime(uint8 deadTime);
extern void pwmInit(void);
extern void pwmStart(void);

#endif /* PWM_H_ */
