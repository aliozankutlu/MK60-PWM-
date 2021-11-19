/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : modulePwm.c
**     Project     : ProcessorExpert
**     Processor   : MK60FN1M0VLQ15
**     Component   : Init_FTM
**     Version     : Component 01.007, Driver 01.07, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2019-08-22, 17:37, # CodeGen: 160
**     Abstract    :
**          This file implements the FTM (FTM0) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
**     Settings    :
**          Component name                                 : modulePwm
**          Device                                         : FTM0
**          Settings                                       : 
**            Clock gate                                   : Enabled
**            Clock settings                               : 
**              Clock source                               : System clock
**              Prescaler                                  : divide by 1
**              Counter init                               : 0
**              Modulo counter                             : 499
**              Period                                     : 10.000 us
**              Deadtime                                   : 
**                Deadtime prescaler                       : divide by 1
**                Deadtime value                           : 10
**                Deadtime delay                           : 0.200 us
**              Num of timer overflows                     : 0
**            FTM mode                                     : Enabled
**            BDM mode                                     : FTM counter functional; channels outputs functional
**            Global time base                             : Disabled
**            Global time base output                      : Disabled
**            Write protection                             : Disabled
**            Combined channels                            : 
**              Channels 0 and 1                           : 
**                Complementary mode                       : Enabled
**                Fault control                            : Disabled
**                Synchronization                          : Disabled
**                Deadtime                                 : Enabled
**                Inverting                                : Disabled
**              Channels 2 and 3                           : 
**                Complementary mode                       : Enabled
**                Fault control                            : Disabled
**                Synchronization                          : Disabled
**                Deadtime                                 : Enabled
**                Inverting                                : Disabled
**              Channels 4 and 5                           : 
**                Complementary mode                       : Disabled
**                Fault control                            : Disabled
**                Synchronization                          : Disabled
**                Deadtime                                 : Disabled
**                Inverting                                : Disabled
**              Channels 6 and 7                           : 
**                Complementary mode                       : Disabled
**                Fault control                            : Disabled
**                Synchronization                          : Disabled
**                Deadtime                                 : Disabled
**                Inverting                                : Disabled
**            Synchronization                              : 
**              Synchronization mode                       : Disabled
**                Counter reinitialization                 : Disabled
**              HW trigger mode                            : Enabled
**              CNTIN synchronization                      : Enabled
**              INVCTRL synchronization                    : Disabled
**              SWOCTRL synchronization                    : Disabled
**              Software Trigger                           : Disabled
**              OUTMASK synchronization                    : Disabled
**              Minimum loading point                      : Disabled
**              Maximum loading point                      : Disabled
**            External triggers                            : 
**              Counter init trigger                       : Disabled
**              Channel 0 trigger                          : Disabled
**              Channel 1 trigger                          : Disabled
**              Channel 2 trigger                          : Disabled
**              Channel 3 trigger                          : Disabled
**              Channel 4 trigger                          : Disabled
**              Channel 5 trigger                          : Disabled
**            Fault control settings                       : 
**              Fault control mode                         : Disabled
**              Fault input filter value                   : Disabled
**              Fault input 0 filter                       : Disabled
**              Fault input 0 polarity                     : High
**              Fault input 1 filter                       : Disabled
**              Fault input 1 polarity                     : High
**              Fault input 2 filter                       : Disabled
**              Fault input 2 polarity                     : High
**              Fault input 3 filter                       : Disabled
**              Fault input 3 polarity                     : High
**          Channels                                       : 
**            Channel 0                                    : Enabled
**              Channel mode                               : Combine PWM
**                PWM polarity                             : High-true
**                Channel value register                   : 124
**                Channel output polarity                  : High
**                Initial state                            : 0
**                Output mask                              : Not masked
**              Input capture filter                       : Disabled
**              Software output control                    : Disabled
**              Pin                                        : Enabled
**                Pin                                      : ADC0_SE15/TSI0_CH14/PTC1/LLWU_P6/SPI0_PCS3/UART1_RTS_b/FTM0_CH0/FBa_AD13/NFC_DATA10/I2S0_TXD0
**                Pin signal                               : pwmOut1
**              Interrupt/DMA                              : 
**                Interrupt                                : INT_FTM0
**                Channel interrupt                        : Disabled
**                DMA request                              : Disabled
**            Channel 1                                    : Enabled
**              Channel mode                               : Combine PWM
**                PWM polarity                             : High-true
**                Channel value register                   : 374
**                Channel output polarity                  : High
**                Initial state                            : 0
**                Output mask                              : Not masked
**              Input capture filter                       : Disabled
**              Software output control                    : Disabled
**              Pin                                        : Enabled
**                Pin                                      : ADC0_SE4b/CMP1_IN0/TSI0_CH15/PTC2/SPI0_PCS2/UART1_CTS_b/FTM0_CH1/FBa_AD12/NFC_DATA9/I2S0_TX_FS
**                Pin signal                               : pwmOut3
**              Interrupt/DMA                              : 
**                Interrupt                                : INT_FTM0
**                Channel interrupt                        : Disabled
**                DMA request                              : Disabled
**            Channel 2                                    : Enabled
**              Channel mode                               : Combine PWM
**                PWM polarity                             : High-true
**                Channel value register                   : 249
**                Channel output polarity                  : High
**                Initial state                            : 0
**                Output mask                              : Not masked
**              Input capture filter                       : Disabled
**              Software output control                    : Disabled
**              Pin                                        : Enabled
**                Pin                                      : CMP1_IN1/PTC3/LLWU_P7/SPI0_PCS1/UART1_RX/FTM0_CH2/CLKOUTa/I2S0_TX_BCLK
**                Pin signal                               : pwmOut2
**              Interrupt/DMA                              : 
**                Interrupt                                : INT_FTM0
**                Channel interrupt                        : Disabled
**                DMA request                              : Disabled
**            Channel 3                                    : Enabled
**              Channel mode                               : Combine PWM
**                PWM polarity                             : High-true
**                Channel value register                   : 499
**                Channel output polarity                  : High
**                Initial state                            : 0
**                Output mask                              : Not masked
**              Input capture filter                       : Disabled
**              Software output control                    : Disabled
**              Pin                                        : Enabled
**                Pin                                      : PTC4/LLWU_P8/SPI0_PCS0/UART1_TX/FTM0_CH3/FBa_AD11/NFC_DATA8/CMP1_OUT/I2S1_TX_BCLK
**                Pin signal                               : pwmOut4
**              Interrupt/DMA                              : 
**                Interrupt                                : INT_FTM0
**                Channel interrupt                        : Disabled
**                DMA request                              : Disabled
**            Channel 4                                    : Disabled
**            Channel 5                                    : Disabled
**            Channel 6                                    : Disabled
**            Channel 7                                    : Disabled
**          Pins                                           : 
**            Fault pins                                   : 
**              Fault pin 0                                : Disabled
**              Fault pin 1                                : Disabled
**              Fault pin 2                                : Disabled
**              Fault pin 3                                : Disabled
**            External clock pin                           : Disabled
**            HW Synchronization triggers                  : 
**              Hardware Trigger 0                         : Disabled
**              Hardware Trigger 1                         : Disabled
**              Hardware Trigger 2                         : Disabled
**          Interrupts                                     : 
**            Channels / Timer overflow / Fault            : 
**              Interrupt                                  : INT_FTM0
**              Interrupt request                          : Disabled
**              Interrupt priority                         : 0 (Highest)
**              ISR Name                                   : 
**              Channels interrupt/DMA                     : See the respective Channel settings
**              Timer overflow interrupt                   : Disabled
**              Fault interrupt                            : Disabled
**          Initialization                                 : 
**            Initialize the Channels Output               : yes
**            Load enable                                  : yes
**            Channel 0 load select                        : yes
**            Channel 1 load select                        : yes
**            Channel 2 load select                        : yes
**            Channel 3 load select                        : yes
**            Channel 4 load select                        : no
**            Channel 5 load select                        : no
**            Channel 6 load select                        : no
**            Channel 7 load select                        : no
**            Call Init method                             : no
**     Contents    :
**         Init - void modulePwm_Init(void);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file modulePwm.c
** @version 01.07
** @brief
**          This file implements the FTM (FTM0) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
*/         
/*!
**  @addtogroup modulePwm_module modulePwm module documentation
**  @{
*/         

/* MODULE modulePwm. */

#include "modulePwm.h"
  /* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"


/*
** ===================================================================
**     Method      :  modulePwm_Init (component Init_FTM)
**     Description :
**         This method initializes registers of the FTM module
**         according to the Peripheral Initialization settings.
**         Call this method in user code to initialize the module. By
**         default, the method is called by PE automatically; see "Call
**         Init method" property of the component for more details.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void modulePwm_Init(void)
{
  /* SIM_SCGC6: FTM0=1 */
  SIM_SCGC6 |= SIM_SCGC6_FTM0_MASK;                                   
  (void)(FTM0_SC == 0U);               /* Dummy read of the FTM0_SC register to clear the interrupt flag */
  /* FTM0_SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,TOF=0,TOIE=0,CPWMS=0,CLKS=0,PS=0 */
  FTM0_SC = (FTM_SC_CLKS(0x00) | FTM_SC_PS(0x00)); /* Stop the counter */
    (void)(FTM0_C0SC == 0U);           /* Dummy read of the FTM0_C0SC register to clear the interrupt flag */
    (void)(FTM0_C1SC == 0U);           /* Dummy read of the FTM0_C1SC register to clear the interrupt flag */
    (void)(FTM0_C2SC == 0U);           /* Dummy read of the FTM0_C2SC register to clear the interrupt flag */
    (void)(FTM0_C3SC == 0U);           /* Dummy read of the FTM0_C3SC register to clear the interrupt flag */
  /* FTM0_MODE: WPDIS=1 */
  FTM0_MODE |= FTM_MODE_WPDIS_MASK;    /* Disable write protection */
  /* FTM0_C0SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,CHIE=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0,DMA=0 */
  FTM0_C0SC = 0x00U;                                   
  /* FTM0_C1SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,CHIE=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0,DMA=0 */
  FTM0_C1SC = 0x00U;                                   
  /* FTM0_C2SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,CHIE=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0,DMA=0 */
  FTM0_C2SC = 0x00U;                                   
  /* FTM0_C3SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,CHIE=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0,DMA=0 */
  FTM0_C3SC = 0x00U;                                   
  /* FTM0_C4SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,CHIE=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0,DMA=0 */
  FTM0_C4SC = 0x00U;                                   
  /* FTM0_C5SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,CHIE=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0,DMA=0 */
  FTM0_C5SC = 0x00U;                                   
  /* FTM0_C6SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,CHIE=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0,DMA=0 */
  FTM0_C6SC = 0x00U;                                   
  /* FTM0_C7SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,CHIE=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0,DMA=0 */
  FTM0_C7SC = 0x00U;                                   
  /* FTM0_SC: TOF=0,CPWMS=0 */
  FTM0_SC &= (uint32_t)~(uint32_t)((FTM_SC_TOF_MASK | FTM_SC_CPWMS_MASK));                                   
  /* FTM0_MODE: FTMEN=1 */
  FTM0_MODE |= FTM_MODE_FTMEN_MASK;                                   
  /* FTM0_COMBINE: FAULTEN3=0,SYNCEN3=0,DTEN3=0,COMP3=0,FAULTEN2=0,SYNCEN2=0,DTEN2=0,COMP2=0,FAULTEN1=0,SYNCEN1=0,DTEN1=1,DECAPEN1=0,COMP1=1,COMBINE1=1,FAULTEN0=0,SYNCEN0=0,DTEN0=1,DECAPEN0=0,COMP0=1,COMBINE0=1 */
  FTM0_COMBINE = (uint32_t)((FTM0_COMBINE & (uint32_t)~(uint32_t)(
                  FTM_COMBINE_FAULTEN3_MASK |
                  FTM_COMBINE_SYNCEN3_MASK |
                  FTM_COMBINE_DTEN3_MASK |
                  FTM_COMBINE_COMP3_MASK |
                  FTM_COMBINE_FAULTEN2_MASK |
                  FTM_COMBINE_SYNCEN2_MASK |
                  FTM_COMBINE_DTEN2_MASK |
                  FTM_COMBINE_COMP2_MASK |
                  FTM_COMBINE_FAULTEN1_MASK |
                  FTM_COMBINE_SYNCEN1_MASK |
                  FTM_COMBINE_DECAPEN1_MASK |
                  FTM_COMBINE_FAULTEN0_MASK |
                  FTM_COMBINE_SYNCEN0_MASK |
                  FTM_COMBINE_DECAPEN0_MASK
                 )) | (uint32_t)(
                  FTM_COMBINE_DTEN1_MASK |
                  FTM_COMBINE_COMP1_MASK |
                  FTM_COMBINE_COMBINE1_MASK |
                  FTM_COMBINE_DTEN0_MASK |
                  FTM_COMBINE_COMP0_MASK |
                  FTM_COMBINE_COMBINE0_MASK
                 ));                                  
  /* FTM0_INVCTRL: INV3EN=0,INV2EN=0,INV1EN=0,INV0EN=0 */
  FTM0_INVCTRL &= (uint32_t)~(uint32_t)(
                   FTM_INVCTRL_INV3EN_MASK |
                   FTM_INVCTRL_INV2EN_MASK |
                   FTM_INVCTRL_INV1EN_MASK |
                   FTM_INVCTRL_INV0EN_MASK
                  );                                   
  /* FTM0_C0SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,CHIE=0,ELSB=1,ELSA=0,??=0,DMA=0 */
  FTM0_C0SC = (uint32_t)((FTM0_C0SC & (uint32_t)~(uint32_t)(
               FTM_CnSC_CHF_MASK |
               FTM_CnSC_CHIE_MASK |
               FTM_CnSC_ELSA_MASK |
               FTM_CnSC_DMA_MASK |
               0xFFFFFF02U
              )) | (uint32_t)(
               FTM_CnSC_ELSB_MASK
              ));                                  
  /* FTM0_C1SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,CHIE=0,ELSB=1,ELSA=0,??=0,DMA=0 */
  FTM0_C1SC = (uint32_t)((FTM0_C1SC & (uint32_t)~(uint32_t)(
               FTM_CnSC_CHF_MASK |
               FTM_CnSC_CHIE_MASK |
               FTM_CnSC_ELSA_MASK |
               FTM_CnSC_DMA_MASK |
               0xFFFFFF02U
              )) | (uint32_t)(
               FTM_CnSC_ELSB_MASK
              ));                                  
  /* FTM0_C2SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,CHIE=0,ELSB=1,ELSA=0,??=0,DMA=0 */
  FTM0_C2SC = (uint32_t)((FTM0_C2SC & (uint32_t)~(uint32_t)(
               FTM_CnSC_CHF_MASK |
               FTM_CnSC_CHIE_MASK |
               FTM_CnSC_ELSA_MASK |
               FTM_CnSC_DMA_MASK |
               0xFFFFFF02U
              )) | (uint32_t)(
               FTM_CnSC_ELSB_MASK
              ));                                  
  /* FTM0_C3SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,CHIE=0,ELSB=1,ELSA=0,??=0,DMA=0 */
  FTM0_C3SC = (uint32_t)((FTM0_C3SC & (uint32_t)~(uint32_t)(
               FTM_CnSC_CHF_MASK |
               FTM_CnSC_CHIE_MASK |
               FTM_CnSC_ELSA_MASK |
               FTM_CnSC_DMA_MASK |
               0xFFFFFF02U
              )) | (uint32_t)(
               FTM_CnSC_ELSB_MASK
              ));                                  
  /* FTM0_C4SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0 */
  FTM0_C4SC &= (uint32_t)~(uint32_t)(
                FTM_CnSC_CHF_MASK |
                FTM_CnSC_MSB_MASK |
                FTM_CnSC_MSA_MASK |
                FTM_CnSC_ELSB_MASK |
                FTM_CnSC_ELSA_MASK |
                0xFFFFFF02U
               );                                   
  /* FTM0_C5SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0 */
  FTM0_C5SC &= (uint32_t)~(uint32_t)(
                FTM_CnSC_CHF_MASK |
                FTM_CnSC_MSB_MASK |
                FTM_CnSC_MSA_MASK |
                FTM_CnSC_ELSB_MASK |
                FTM_CnSC_ELSA_MASK |
                0xFFFFFF02U
               );                                   
  /* FTM0_C6SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0 */
  FTM0_C6SC &= (uint32_t)~(uint32_t)(
                FTM_CnSC_CHF_MASK |
                FTM_CnSC_MSB_MASK |
                FTM_CnSC_MSA_MASK |
                FTM_CnSC_ELSB_MASK |
                FTM_CnSC_ELSA_MASK |
                0xFFFFFF02U
               );                                   
  /* FTM0_C7SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0 */
  FTM0_C7SC &= (uint32_t)~(uint32_t)(
                FTM_CnSC_CHF_MASK |
                FTM_CnSC_MSB_MASK |
                FTM_CnSC_MSA_MASK |
                FTM_CnSC_ELSB_MASK |
                FTM_CnSC_ELSA_MASK |
                0xFFFFFF02U
               );                                   
  /* FTM0_C0V: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,VAL=0x7C */
  FTM0_C0V = FTM_CnV_VAL(0x7C);                                   
  /* FTM0_C1V: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,VAL=0x0176 */
  FTM0_C1V = FTM_CnV_VAL(0x0176);                                   
  /* FTM0_C2V: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,VAL=0xF9 */
  FTM0_C2V = FTM_CnV_VAL(0xF9);                                   
  /* FTM0_C3V: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,VAL=0x01F3 */
  FTM0_C3V = FTM_CnV_VAL(0x01F3);                                   
  /* FTM0_POL: POL3=0,POL2=0,POL1=0,POL0=0 */
  FTM0_POL &= (uint32_t)~(uint32_t)(
               FTM_POL_POL3_MASK |
               FTM_POL_POL2_MASK |
               FTM_POL_POL1_MASK |
               FTM_POL_POL0_MASK
              );                                   
  /* FTM0_FILTER: CH3FVAL=0,CH2FVAL=0,CH1FVAL=0,CH0FVAL=0 */
  FTM0_FILTER &= (uint32_t)~(uint32_t)(
                  FTM_FILTER_CH3FVAL(0x0F) |
                  FTM_FILTER_CH2FVAL(0x0F) |
                  FTM_FILTER_CH1FVAL(0x0F) |
                  FTM_FILTER_CH0FVAL(0x0F)
                 );                                   
  /* FTM0_OUTINIT: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CH3OI=0,CH2OI=0,CH1OI=0,CH0OI=0 */
  FTM0_OUTINIT &= (uint32_t)~(uint32_t)(
                   FTM_OUTINIT_CH3OI_MASK |
                   FTM_OUTINIT_CH2OI_MASK |
                   FTM_OUTINIT_CH1OI_MASK |
                   FTM_OUTINIT_CH0OI_MASK |
                   0xFFFFFF00U
                  );                                   
  /* FTM0_OUTMASK: CH3OM=0,CH2OM=0,CH1OM=0,CH0OM=0 */
  FTM0_OUTMASK &= (uint32_t)~(uint32_t)(
                   FTM_OUTMASK_CH3OM_MASK |
                   FTM_OUTMASK_CH2OM_MASK |
                   FTM_OUTMASK_CH1OM_MASK |
                   FTM_OUTMASK_CH0OM_MASK
                  );                                   
  /* FTM0_FLTCTRL: FFVAL=0 */
  FTM0_FLTCTRL &= (uint32_t)~(uint32_t)(FTM_FLTCTRL_FFVAL(0x0F));                                   
  /* FTM0_FLTPOL: FLT3POL=0,FLT2POL=0,FLT1POL=0,FLT0POL=0 */
  FTM0_FLTPOL &= (uint32_t)~(uint32_t)(
                  FTM_FLTPOL_FLT3POL_MASK |
                  FTM_FLTPOL_FLT2POL_MASK |
                  FTM_FLTPOL_FLT1POL_MASK |
                  FTM_FLTPOL_FLT0POL_MASK
                 );                                   
  /* FTM0_FLTCTRL: FFLTR3EN=0,FFLTR2EN=0,FFLTR1EN=0,FFLTR0EN=0,FAULT3EN=0,FAULT2EN=0,FAULT1EN=0,FAULT0EN=0 */
  FTM0_FLTCTRL &= (uint32_t)~(uint32_t)(
                   FTM_FLTCTRL_FFLTR3EN_MASK |
                   FTM_FLTCTRL_FFLTR2EN_MASK |
                   FTM_FLTCTRL_FFLTR1EN_MASK |
                   FTM_FLTCTRL_FFLTR0EN_MASK |
                   FTM_FLTCTRL_FAULT3EN_MASK |
                   FTM_FLTCTRL_FAULT2EN_MASK |
                   FTM_FLTCTRL_FAULT1EN_MASK |
                   FTM_FLTCTRL_FAULT0EN_MASK
                  );                                   
  /* FTM0_SYNC: SWSYNC=0,TRIG2=0,TRIG1=0,TRIG0=0,SYNCHOM=0,REINIT=0,CNTMAX=0,CNTMIN=0 */
  FTM0_SYNC &= (uint32_t)~(uint32_t)(
                FTM_SYNC_SWSYNC_MASK |
                FTM_SYNC_TRIG2_MASK |
                FTM_SYNC_TRIG1_MASK |
                FTM_SYNC_TRIG0_MASK |
                FTM_SYNC_SYNCHOM_MASK |
                FTM_SYNC_REINIT_MASK |
                FTM_SYNC_CNTMAX_MASK |
                FTM_SYNC_CNTMIN_MASK
               );                                   
  /* FTM0_EXTTRIG: INITTRIGEN=0,CH1TRIG=0,CH0TRIG=0,CH5TRIG=0,CH4TRIG=0,CH3TRIG=0,CH2TRIG=0 */
  FTM0_EXTTRIG &= (uint32_t)~(uint32_t)(
                   FTM_EXTTRIG_INITTRIGEN_MASK |
                   FTM_EXTTRIG_CH1TRIG_MASK |
                   FTM_EXTTRIG_CH0TRIG_MASK |
                   FTM_EXTTRIG_CH5TRIG_MASK |
                   FTM_EXTTRIG_CH4TRIG_MASK |
                   FTM_EXTTRIG_CH3TRIG_MASK |
                   FTM_EXTTRIG_CH2TRIG_MASK
                  );                                   
  /* FTM0_MOD: MOD=0x01F3 */
  FTM0_MOD = (uint32_t)((FTM0_MOD & (uint32_t)~(uint32_t)(
              FTM_MOD_MOD(0xFE0C)
             )) | (uint32_t)(
              FTM_MOD_MOD(0x01F3)
             ));                                  
  /* FTM0_CNTIN: INIT=0 */
  FTM0_CNTIN &= (uint32_t)~(uint32_t)(FTM_CNTIN_INIT(0xFFFF));                                   
  /* FTM0_DEADTIME: DTPS=0,DTVAL=0x0A */
  FTM0_DEADTIME = (uint32_t)((FTM0_DEADTIME & (uint32_t)~(uint32_t)(
                   FTM_DEADTIME_DTPS(0x03) |
                   FTM_DEADTIME_DTVAL(0x35)
                  )) | (uint32_t)(
                   FTM_DEADTIME_DTVAL(0x0A)
                  ));                                  
  /* FTM0_CNT: COUNT=0 */
  FTM0_CNT &= (uint32_t)~(uint32_t)(FTM_CNT_COUNT(0xFFFF));                                   
  /* FTM0_MODE: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,FAULTIE=0,FAULTM=0,PWMSYNC=0,INIT=1,FTMEN=1 */
  FTM0_MODE = (uint32_t)((FTM0_MODE & (uint32_t)~(uint32_t)(
               FTM_MODE_FAULTIE_MASK |
               FTM_MODE_FAULTM(0x03) |
               FTM_MODE_PWMSYNC_MASK |
               0xFFFFFF00U
              )) | (uint32_t)(
               FTM_MODE_INIT_MASK |
               FTM_MODE_FTMEN_MASK
              ));                                  
  /* FTM0_SYNCONF: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,SYNCMODE=0,??=0,SWOC=0,INVC=0,??=0,CNTINC=1,??=0,HWTRIGMODE=0 */
  FTM0_SYNCONF = (uint32_t)((FTM0_SYNCONF & (uint32_t)~(uint32_t)(
                  FTM_SYNCONF_SYNCMODE_MASK |
                  FTM_SYNCONF_SWOC_MASK |
                  FTM_SYNCONF_INVC_MASK |
                  FTM_SYNCONF_HWTRIGMODE_MASK |
                  0xFFE0E04AU
                 )) | (uint32_t)(
                  FTM_SYNCONF_CNTINC_MASK
                 ));                                  
  /* FTM0_SC: TOF=0,TOIE=0,CPWMS=0,CLKS=1,PS=0 */
  FTM0_SC = (uint32_t)((FTM0_SC & (uint32_t)~(uint32_t)(
             FTM_SC_TOF_MASK |
             FTM_SC_TOIE_MASK |
             FTM_SC_CPWMS_MASK |
             FTM_SC_CLKS(0x02) |
             FTM_SC_PS(0x07)
            )) | (uint32_t)(
             FTM_SC_CLKS(0x01)
            ));                                  
  /* FTM0_FMS: FAULTF=0,WPEN=0,FAULTF3=0,FAULTF2=0,FAULTF1=0,FAULTF0=0 */
  FTM0_FMS &= (uint32_t)~(uint32_t)(
               FTM_FMS_FAULTF_MASK |
               FTM_FMS_WPEN_MASK |
               FTM_FMS_FAULTF3_MASK |
               FTM_FMS_FAULTF2_MASK |
               FTM_FMS_FAULTF1_MASK |
               FTM_FMS_FAULTF0_MASK
              );                                   
  /* FTM0_SWOCTRL: CH3OC=0,CH2OC=0,CH1OC=0,CH0OC=0 */
  FTM0_SWOCTRL &= (uint32_t)~(uint32_t)(
                   FTM_SWOCTRL_CH3OC_MASK |
                   FTM_SWOCTRL_CH2OC_MASK |
                   FTM_SWOCTRL_CH1OC_MASK |
                   FTM_SWOCTRL_CH0OC_MASK
                  );                                   
  /* FTM0_CONF: GTBEOUT=0,GTBEEN=0,BDMMODE=3,NUMTOF=0 */
  FTM0_CONF = (uint32_t)((FTM0_CONF & (uint32_t)~(uint32_t)(
               FTM_CONF_GTBEOUT_MASK |
               FTM_CONF_GTBEEN_MASK |
               FTM_CONF_NUMTOF(0x1F)
              )) | (uint32_t)(
               FTM_CONF_BDMMODE(0x03)
              ));                                  
  /* FTM0_PWMLOAD: LDOK=1,CH7SEL=0,CH6SEL=0,CH5SEL=0,CH4SEL=0,CH3SEL=1,CH2SEL=1,CH1SEL=1,CH0SEL=1 */
  FTM0_PWMLOAD = (uint32_t)((FTM0_PWMLOAD & (uint32_t)~(uint32_t)(
                  FTM_PWMLOAD_CH7SEL_MASK |
                  FTM_PWMLOAD_CH6SEL_MASK |
                  FTM_PWMLOAD_CH5SEL_MASK |
                  FTM_PWMLOAD_CH4SEL_MASK
                 )) | (uint32_t)(
                  FTM_PWMLOAD_LDOK_MASK |
                  FTM_PWMLOAD_CH3SEL_MASK |
                  FTM_PWMLOAD_CH2SEL_MASK |
                  FTM_PWMLOAD_CH1SEL_MASK |
                  FTM_PWMLOAD_CH0SEL_MASK
                 ));                                  
}


/* END modulePwm. */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/