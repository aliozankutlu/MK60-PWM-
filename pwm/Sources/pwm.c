/*
 * pwm.c
 *
 *  Created on: Aug 22, 2019
 *      Author: aokutlu
 */

#include "pwm.h"

pwmMask pwmMasks[nofPwm] = {
		{&FTM0_OUTMASK, FTM_OUTMASK_CH0OM_MASK},
		{&FTM0_OUTMASK, FTM_OUTMASK_CH1OM_MASK},
		{&FTM0_OUTMASK, FTM_OUTMASK_CH2OM_MASK},
		{&FTM0_OUTMASK, FTM_OUTMASK_CH3OM_MASK}
};

pwmReg pwmRegs[nofPwm] = {
		{&FTM0_SC},
		{&FTM0_SC},
		{&FTM0_SC},
		{&FTM0_SC},
};

/*-----------------------------------------------------------------------------*/
/* Function	: setPwmDeadTime													   	   */
/*-----------------------------------------------------------------------------*/
bool setPwmDeadTime(uint8 deadTime)
{
	bool status=FALSE;
	if(deadTime < 64)
	{
		FTM0_DEADTIME = (uint32_t)((FTM0_DEADTIME & (uint32_t)~(uint32_t)(
				FTM_DEADTIME_DTPS(0x03) |
				FTM_DEADTIME_DTVAL(0x35)
		)) | (uint32_t)(
				FTM_DEADTIME_DTVAL(deadTime)
		));
		status=TRUE;
	}
	return status;
}

/*-----------------------------------------------------------------------------*/
/* Function	: pwmEnable													   	   */
/*-----------------------------------------------------------------------------*/
void pwmEnable(volatile uint32 *reg0, volatile uint32 *reg1)
{
	if(*reg1 != 0XFF){
		*reg0 = (*reg0 & ~(FTM_SC_CLKS(0x02))) | (FTM_SC_CLKS(0x01));
	}
}
/*-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*/
/* Function	: pwmDisable													   */
/*-----------------------------------------------------------------------------*/
void pwmDisable(volatile uint32 *reg0, volatile uint32 *reg1)
{
	if(*reg1 == 0XFF){
		*reg0 = (*reg0 & ~(FTM_SC_CLKS(0x02)));
	}
}
/*-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*/
/* Function	: pwmInit													       */
/*-----------------------------------------------------------------------------*/
void pwmInit(void)
{
	uint8 i;
	modulePwm_Init();
	setPwmDeadTime(15);
	for(i=0;i<4;i++)
	{
		*pwmMasks[i].reg |= pwmMasks[i].mask;	
	}
	pwmDisable(pwmRegs[0].reg,pwmMasks[0].reg);
}

/*-----------------------------------------------------------------------------*/
/* Function	: pwmStart													       */
/*-----------------------------------------------------------------------------*/
void pwmStart(void)
{
	*pwmMasks[0].reg &= ~pwmMasks[0].mask;	
	*pwmMasks[1].reg &= ~pwmMasks[1].mask;
	*pwmMasks[2].reg &= ~pwmMasks[2].mask;	
	*pwmMasks[3].reg &= ~pwmMasks[3].mask;
	
	pwmEnable(pwmRegs[0].reg,pwmMasks[0].reg);
}


