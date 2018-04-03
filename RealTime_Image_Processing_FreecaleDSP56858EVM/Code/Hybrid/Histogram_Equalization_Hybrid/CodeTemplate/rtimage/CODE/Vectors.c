/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : Vectors.C
**     Project   : rtimage
**     Processor : 56858
**     Version   : Component 01.023, Driver 02.08, CPU db: 2.87.105
**     Compiler  : Metrowerks DSP C Compiler
**     Date/Time : 3/22/2018, 2:30 AM
**     Abstract  :
**
**     Settings  :
**
**
**     Copyright : 1997 - 2009 Freescale Semiconductor, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/

#include "Cpu.h"
#include "serial.h"
#include "Events.h"

/*lint -save -e40 -e718 -e746 -e745 -e939 -e937 -e957 -e505 -e522 -e533 Disable MISRA rule (20,75,71,53,83) checking. */

extern void _EntryPoint(void);         /* Startup routine */

volatile asm void _vect(void);
#pragma define_section interrupt_vectors "interrupt_vectors.text"  RX
#pragma section interrupt_vectors begin
volatile asm void _vect(void) {
  JMP  _EntryPoint                     /* Interrupt no. 0 (Used)   - ivINT_Reset */
  JMP  _EntryPoint                     /* Interrupt no. 1 (Used)   - ivINT_COPReset  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 2 (Unused) - ivINT_Illegal_Instruction  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 3 (Unused) - ivINT_SW3  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 4 (Unused) - ivINT_HWStackOverflow  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 5 (Unused) - ivINT_MisalignedLongWordAccess  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 6 (Unused) - ivINT_OnCE_StepCounter  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 7 (Unused) - ivINT_OnCE_BU0  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 8 (Unused) - ivReserved3  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 9 (Unused) - ivINT_OnCE_TraceBuffer  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 10 (Unused) - ivINT_OnCE_TxREmpty  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 11 (Unused) - ivINT_OnCE_RxRFull  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 12 (Unused) - ivReserved4  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 13 (Unused) - ivReserved5  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 14 (Unused) - ivINT_SW2  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 15 (Unused) - ivINT_SW1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 16 (Unused) - ivINT_SW0  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 17 (Unused) - ivINT_IRQA  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 18 (Unused) - ivINT_IRQB  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 19 (Unused) - ivReserved6  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 20 (Unused) - ivINT_PLL  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 21 (Unused) - ivReserved7  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 22 (Unused) - ivINT_DMA_DONE_0  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 23 (Unused) - ivINT_DMA_DONE_1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 24 (Unused) - ivINT_DMA_DONE_2  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 25 (Unused) - ivINT_DMA_DONE_3  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 26 (Unused) - ivINT_DMA_DONE_4  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 27 (Unused) - ivINT_DMA_DONE_5  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 28 (Unused) - ivINT_ESSI0_RxWE  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 29 (Unused) - ivINT_ESSI0_Rx  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 30 (Unused) - ivINT_ESSI0_RxLS  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 31 (Unused) - ivINT_ESSI0_TxWE  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 32 (Unused) - ivINT_ESSI0_Tx  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 33 (Unused) - ivINT_ESSI0_TxLS  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 34 (Unused) - ivINT_ESSI1_RxWE  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 35 (Unused) - ivINT_ESSI1_Rx  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 36 (Unused) - ivINT_ESSI1_RxLS  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 37 (Unused) - ivINT_ESSI1_TxWE  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 38 (Unused) - ivINT_ESSI1_Tx  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 39 (Unused) - ivINT_ESSI1_TxLS  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 40 (Unused) - ivINT_SPI_RxFull  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 41 (Unused) - ivINT_SPI_TxEmpty  */
  JSR  serial_InterruptTx              /* Interrupt no. 42 (Used)   - ivINT_SCI0_TxEmpty  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 43 (Unused) - ivINT_SCI0_TxIdle  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 44 (Unused) - ivINT_SCI0_RxIdle  */
  JSR  serial_InterruptError           /* Interrupt no. 45 (Used)   - ivINT_SCI0_RxError  */
  JSR  serial_InterruptRx              /* Interrupt no. 46 (Used)   - ivINT_SCI0_RxFull  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 47 (Unused) - ivINT_HI8_HRxD  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 48 (Unused) - ivINT_HI8_HTxD  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 49 (Unused) - ivINT_HI8_HCMD  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 50 (Unused) - ivINT_TOD_Alarm  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 51 (Unused) - ivINT_TOD_OneSec  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 52 (Unused) - ivINT_TMR0_CMP  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 53 (Unused) - ivINT_TMR0_OVF  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 54 (Unused) - ivINT_TMR0_INP  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 55 (Unused) - ivINT_TMR1_CMP  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 56 (Unused) - ivINT_TMR1_OVF  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 57 (Unused) - ivINT_TMR1_INP  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 58 (Unused) - ivINT_TMR2_CMP  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 59 (Unused) - ivINT_TMR2_OVF  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 60 (Unused) - ivINT_TMR2_INP  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 61 (Unused) - ivINT_TMR3_CMP  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 62 (Unused) - ivINT_TMR3_OVF  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 63 (Unused) - ivINT_TMR3_INP  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 64 (Unused) - ivINT_SWLP  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 65 (Unused) - ivINT_SCI1_TxEmpty  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 66 (Unused) - ivINT_SCI1_TxIdle  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 67 (Unused) - ivINT_SCI1_RxIdle  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 68 (Unused) - ivINT_SCI1_RxError  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 69 (Unused) - ivINT_SCI1_RxFull  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 70 (Unused) - ivINT_HI8_HCMD_1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 71 (Unused) - ivINT_HI8_HCMD_2  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 72 (Unused) - ivINT_HI8_HCMD_3  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 73 (Unused) - ivINT_HI8_HCMD_4  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 74 (Unused) - ivINT_HI8_HCMD_5  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 75 (Unused) - ivINT_HI8_HCMD_6  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 76 (Unused) - ivINT_HI8_HCMD_7  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 77 (Unused) - ivINT_HI8_HCMD_8  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 78 (Unused) - ivINT_HI8_HCMD_9  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 79 (Unused) - ivINT_HI8_HCMD_10  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 80 (Unused) - ivINT_HI8_HCMD_12  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 81 (Unused) - ivINT_HI8_HCMD_11  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 82 (Unused) - ivINT_HI8_HCMD_13  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 83 (Unused) - ivINT_HI8_HCMD_14  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 84 (Unused) - ivINT_HI8_HCMD_15  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 85 (Unused) - ivINT_HI8_HCMD_16  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 86 (Unused) - ivINT_HI8_HCMD_17  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 87 (Unused) - ivINT_HI8_HCMD_18  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 88 (Unused) - ivINT_HI8_HCMD_19  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 89 (Unused) - ivINT_HI8_HCMD_20  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 90 (Unused) - ivINT_HI8_HCMD_21  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 91 (Unused) - ivINT_HI8_HCMD_22  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 92 (Unused) - ivINT_HI8_HCMD_23  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 93 (Unused) - ivINT_HI8_HCMD_24  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 94 (Unused) - ivINT_HI8_HCMD_25  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 95 (Unused) - ivINT_HI8_HCMD_26  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 96 (Unused) - ivINT_HI8_HCMD_27  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 97 (Unused) - ivINT_HI8_HCMD_28  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 98 (Unused) - ivINT_HI8_HCMD_29  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 99 (Unused) - ivINT_HI8_HCMD_30  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 100 (Unused) - ivINT_HI8_HCMD_31  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 101 (Unused) - ivINT_HI8_HCMD_32  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 102 (Unused) - ivINT_HI8_HCMD_33  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 103 (Unused) - ivINT_HI8_HCMD_34  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 104 (Unused) - ivINT_HI8_HCMD_35  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 105 (Unused) - ivINT_HI8_HCMD_36  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 106 (Unused) - ivINT_HI8_HCMD_63  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 107 (Unused) - ivINT_HI8_HCMD_65  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 108 (Unused) - ivINT_HI8_HCMD_64  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 109 (Unused) - ivINT_HI8_HCMD_37  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 110 (Unused) - ivINT_HI8_HCMD_38  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 111 (Unused) - ivINT_HI8_HCMD_39  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 112 (Unused) - ivINT_HI8_HCMD_40  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 113 (Unused) - ivINT_HI8_HCMD_41  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 114 (Unused) - ivINT_HI8_HCMD_68  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 115 (Unused) - ivINT_HI8_HCMD_42  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 116 (Unused) - ivINT_HI8_HCMD_43  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 117 (Unused) - ivINT_HI8_HCMD_44  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 118 (Unused) - ivINT_HI8_HCMD_45  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 119 (Unused) - ivINT_HI8_HCMD_46  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 120 (Unused) - ivINT_HI8_HCMD_47  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 121 (Unused) - ivINT_HI8_HCMD_48  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 122 (Unused) - ivINT_HI8_HCMD_49  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 123 (Unused) - ivINT_HI8_HCMD_50  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 124 (Unused) - ivINT_HI8_HCMD_51  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 125 (Unused) - ivINT_HI8_HCMD_52  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 126 (Unused) - ivINT_HI8_HCMD_53  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 127 (Unused) - ivINT_HI8_HCMD_54  */
}
#pragma section interrupt_vectors end

/*lint -restore */

/* Disable MISRA rules for interurupt routines */
/*lint -esym(765,Cpu_Interrupt) Disable MISRA rule (23) checking for symbols (Cpu_Interrupt). */
/*lint -esym(765,serial_InterruptTx) Disable MISRA rule (23) checking for symbols (serial_InterruptTx). */
/*lint -esym(765,serial_InterruptError) Disable MISRA rule (23) checking for symbols (serial_InterruptError). */
/*lint -esym(765,serial_InterruptRx) Disable MISRA rule (23) checking for symbols (serial_InterruptRx). */

/*
** ###################################################################
**
**     This file was created by Processor Expert 3.00 [04.35]
**     for the Freescale 56800 series of microcontrollers.
**
** ###################################################################
*/
