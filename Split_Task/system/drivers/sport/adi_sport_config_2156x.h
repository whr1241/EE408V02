/******************************************************************************

Copyright (c) 2010-2018 Analog Devices.  All Rights Reserved.

This software is proprietary and confidential.  By using this software you agree
to the terms of the associated Analog Devices License Agreement.
*******************************************************************************/

/*!
* @file      adi_sport_config_2156x.h
*
* @brief     SPORT driver static configuration Header file
*
* @details
*            SPORT driver static configuration Header file
*/

/** @addtogroup SPORT_Driver SPORT Device Driver
 *  @{
 */
#ifndef __ADI_SPORT_CONGIF_2156X_H__
#define __ADI_SPORT_CONFIG_2156X_H__

#include <sys/platform.h>
#include <stdint.h>

/*! Specifies the number of active SPORT devices accordingly the memory allotted will be optimized */
#define ADI_SPORT_STATIC_INSTANCES                   2u

/*!SPORT0A Instance*/
/*!Select SPORT0A Instance */
#define ADI_SPORT0A_INSTANCE                     	0u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT0A_CTL_DTYPE                        0u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT0A_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data 
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT0A_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */ 
#define ADI_SPORT0A_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT0A_CTL_SLEN                         31u
/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT0A_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04
#define ADI_SPORT0A_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04
/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT0A_CTL_ICLK                         1u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */ 
#define ADI_SPORT0A_CTL_CKRE                         0u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT0A_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
//#define ADI_SPORT0A_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */ 
#define ADI_SPORT0A_CTL_IFS                          1u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */ 
#define ADI_SPORT0A_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync. 
* When the half SPORT is in I2S / packed / left-justified mode, 
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */ 
#define ADI_SPORT0A_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2, 
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */    
#define ADI_SPORT0A_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */ 
#define ADI_SPORT0A_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT0A_CTL_OPMODE						 0u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT0A_CTL_SPTRAN                       1u


/*! Specifies the SPORT0A_Control register Configuration*/
#define ADI_SPORT_0A_CTL   ((ADI_SPORT0A_CTL_DTYPE<<BITP_SPORT_CTL_A_DTYPE)|(ADI_SPORT0A_CTL_LSBF<<BITP_SPORT_CTL_A_LSBF)|(ADI_SPORT0A_CTL_SLEN<<BITP_SPORT_CTL_A_SLEN)|(ADI_SPORT0A_CTL_PACK<<BITP_SPORT_CTL_A_PACK)|(ADI_SPORT0A_CTL_ICLK<<BITP_SPORT_CTL_A_ICLK)|(ADI_SPORT0A_CTL_OPMODE<<BITP_SPORT_CTL_A_OPMODE)|(ADI_SPORT0A_CTL_CKRE<<BITP_SPORT_CTL_A_CKRE)/*|(ADI_SPORT0A_CTL_FSR<<BITP_SPORT_CTL_A_FSR)*/|(ADI_SPORT0A_CTL_IFS<<BITP_SPORT_CTL_A_IFS)|(ADI_SPORT0A_CTL_DIFS<<BITP_SPORT_CTL_A_DIFS)|(ADI_SPORT0A_CTL_LFS<<BITP_SPORT_CTL_A_LFS)|(ADI_SPORT0A_CTL_LAFS<<BITP_SPORT_CTL_A_LAFS)|(ADI_SPORT0A_CTL_RJUST<<BITP_SPORT_CTL_A_RJUST)|(ADI_SPORT0A_CTL_FSED<<BITP_SPORT_CTL_A_FSED)|(ADI_SPORT0A_CTL_GCLKEN<<BITP_SPORT_CTL_A_GCLKEN)|(ADI_SPORT0A_CTL_SPTRAN<<BITP_SPORT_CTL_A_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock. 
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT0A_DIV_CLKDIV                       1u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse. 
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT0A_DIV_FSDIV                        511u


/*! Specifies the SPORT0A_Divisor register Configuration*/
#define ADI_SPORT_0A_DIV  ((ADI_SPORT0A_DIV_CLKDIV<<BITP_SPORT_DIV_A_CLKDIV)|(ADI_SPORT0A_DIV_FSDIV<<BITP_SPORT_DIV_A_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT0A_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */ 
#define ADI_SPORT0A_MCTL_WSIZE 						15u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT0A_MCTL_MFD						1u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT0A_MCTL_MCPDE 						1u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT0A_MCTL_MCE 						1u


/*! Specifies the SPORT0A_Multichannel Control register Configuration*/
#define ADI_SPORT_0A_MCTL  ((ADI_SPORT0A_MCTL_MCE<<BITP_SPORT_MCTL_A_MCE)|(ADI_SPORT0A_MCTL_MCPDE<<BITP_SPORT_MCTL_A_MCPDE)|(ADI_SPORT0A_MCTL_MFD<<BITP_SPORT_MCTL_A_MFD)|(ADI_SPORT0A_MCTL_WSIZE<<BITP_SPORT_MCTL_A_WSIZE)|(ADI_SPORT0A_MCTL_WOFFSET<<BITP_SPORT_MCTL_A_WOFFSET))


/*! Specifies the SPORT0A_Multichannel Control register Configuration*/
#define ADI_SPORT_0A_CS0								0xffff
#define ADI_SPORT_0A_CS1								0x00
#define ADI_SPORT_0A_CS2								0x00
#define ADI_SPORT_0A_CS3								0x00

/**********************************************************************************************************/
		
/*!SPORT0B Instance*/
/*!Select SPORT0B Instance */
#define ADI_SPORT0B_INSTANCE                     0u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT0B_CTL_DTYPE                        0u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT0B_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT0B_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */
#define ADI_SPORT0B_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT0B_CTL_SLEN                         31u

/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT0B_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04 /*!<  bytes transfer  */
#define ADI_SPORT0B_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04 /*!<  bytes transfer  */

/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT0B_CTL_ICLK                         0u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */
#define ADI_SPORT0B_CTL_CKRE                         0u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT0B_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
#define ADI_SPORT0B_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */
#define ADI_SPORT0B_CTL_IFS                          0u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */
#define ADI_SPORT0B_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync.
* When the half SPORT is in I2S / packed / left-justified mode,
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */
#define ADI_SPORT0B_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2,
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */
#define ADI_SPORT0B_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */
#define ADI_SPORT0B_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT0B_CTL_OPMODE						 0u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT0B_CTL_SPTRAN                       0u

/*! Specifies the SPORT_0B_Control register Configuration*/
#define ADI_SPORT_0B_CTL   ((ADI_SPORT0B_CTL_DTYPE<<BITP_SPORT_CTL_B_DTYPE)|(ADI_SPORT0B_CTL_LSBF<<BITP_SPORT_CTL_B_LSBF)|(ADI_SPORT0B_CTL_SLEN<<BITP_SPORT_CTL_B_SLEN)|(ADI_SPORT0B_CTL_PACK<<BITP_SPORT_CTL_B_PACK)|(ADI_SPORT0B_CTL_ICLK<<BITP_SPORT_CTL_B_ICLK)|(ADI_SPORT0B_CTL_OPMODE<<BITP_SPORT_CTL_B_OPMODE)|(ADI_SPORT0B_CTL_CKRE<<BITP_SPORT_CTL_B_CKRE)/*|(ADI_SPORT0B_CTL_FSR<<BITP_SPORT_CTL_B_FSR)*/|(ADI_SPORT0B_CTL_IFS<<BITP_SPORT_CTL_B_IFS)|(ADI_SPORT0B_CTL_DIFS<<BITP_SPORT_CTL_B_DIFS)|(ADI_SPORT0B_CTL_LFS<<BITP_SPORT_CTL_B_LFS)|(ADI_SPORT0B_CTL_LAFS<<BITP_SPORT_CTL_B_LAFS)|(ADI_SPORT0B_CTL_RJUST<<BITP_SPORT_CTL_B_RJUST)|(ADI_SPORT0B_CTL_FSED<<BITP_SPORT_CTL_B_FSED)|(ADI_SPORT0B_CTL_GCLKEN<<BITP_SPORT_CTL_B_GCLKEN)|(ADI_SPORT0B_CTL_SPTRAN<<BITP_SPORT_CTL_B_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock.
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT0B_DIV_CLKDIV                       1u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse.
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT0B_DIV_FSDIV                        511u

/*! Specifies the SPORT0B_Divisor register Configuration*/
#define ADI_SPORT_0B_DIV  ((ADI_SPORT0B_DIV_CLKDIV<<BITP_SPORT_DIV_B_CLKDIV)|(ADI_SPORT0B_DIV_FSDIV<<BITP_SPORT_DIV_B_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT0B_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */
#define ADI_SPORT0B_MCTL_WSIZE 						15u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT0B_MCTL_MFD						1u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT0B_MCTL_MCPDE 						1u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT0B_MCTL_MCE 						1u

/*! Specifies the SPORT0B_Multichannel Control register Configuration*/
#define ADI_SPORT_0B_MCTL  ((ADI_SPORT0B_MCTL_MCE<<BITP_SPORT_MCTL_B_MCE)|(ADI_SPORT0B_MCTL_MCPDE<<BITP_SPORT_MCTL_B_MCPDE)|(ADI_SPORT0B_MCTL_MFD<<BITP_SPORT_MCTL_B_MFD)|(ADI_SPORT0B_MCTL_WSIZE<<BITP_SPORT_MCTL_B_WSIZE)|(ADI_SPORT0B_MCTL_WOFFSET<<BITP_SPORT_MCTL_B_WOFFSET))

/*! Specifies the SPORT0B_Multichannel Control register Configuration*/
#define ADI_SPORT_0B_CS0								0xffff
#define ADI_SPORT_0B_CS1								0x00
#define ADI_SPORT_0B_CS2								0x00
#define ADI_SPORT_0B_CS3								0x00





/*!SPORT1A Instance*/
/*!Select SPORT1A Instance */
#define ADI_SPORT1A_INSTANCE                     0u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT1A_CTL_DTYPE                        0u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT1A_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT1A_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */
#define ADI_SPORT1A_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT1A_CTL_SLEN                         31u

/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT1A_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04
#define ADI_SPORT1A_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04

/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT1A_CTL_ICLK                         1u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */
#define ADI_SPORT1A_CTL_CKRE                         0u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT1A_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
//#define ADI_SPORT1A_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */
#define ADI_SPORT1A_CTL_IFS                          1u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */
#define ADI_SPORT1A_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync.
* When the half SPORT is in I2S / packed / left-justified mode,
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */
#define ADI_SPORT1A_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2,
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */
#define ADI_SPORT1A_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */
#define ADI_SPORT1A_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT1A_CTL_OPMODE						 0u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT1A_CTL_SPTRAN                       1u


/*! Specifies the SPORT1A_Control register Configuration*/
#define ADI_SPORT_1A_CTL   ((ADI_SPORT1A_CTL_DTYPE<<BITP_SPORT_CTL_A_DTYPE)|(ADI_SPORT1A_CTL_LSBF<<BITP_SPORT_CTL_A_LSBF)|(ADI_SPORT1A_CTL_SLEN<<BITP_SPORT_CTL_A_SLEN)|(ADI_SPORT1A_CTL_PACK<<BITP_SPORT_CTL_A_PACK)|(ADI_SPORT1A_CTL_ICLK<<BITP_SPORT_CTL_A_ICLK)|(ADI_SPORT1A_CTL_OPMODE<<BITP_SPORT_CTL_A_OPMODE)|(ADI_SPORT1A_CTL_CKRE<<BITP_SPORT_CTL_A_CKRE)/*|(ADI_SPORT1A_CTL_FSR<<BITP_SPORT_CTL_A_FSR)*/|(ADI_SPORT1A_CTL_IFS<<BITP_SPORT_CTL_A_IFS)|(ADI_SPORT1A_CTL_DIFS<<BITP_SPORT_CTL_A_DIFS)|(ADI_SPORT1A_CTL_LFS<<BITP_SPORT_CTL_A_LFS)|(ADI_SPORT1A_CTL_LAFS<<BITP_SPORT_CTL_A_LAFS)|(ADI_SPORT1A_CTL_RJUST<<BITP_SPORT_CTL_A_RJUST)|(ADI_SPORT1A_CTL_FSED<<BITP_SPORT_CTL_A_FSED)|(ADI_SPORT1A_CTL_GCLKEN<<BITP_SPORT_CTL_A_GCLKEN)|(ADI_SPORT1A_CTL_SPTRAN<<BITP_SPORT_CTL_A_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock.
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT1A_DIV_CLKDIV                       1u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse.
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT1A_DIV_FSDIV                        511u

/*! Specifies the SPORT1A_Divisor register Configuration*/
#define ADI_SPORT_1A_DIV  ((ADI_SPORT1A_DIV_CLKDIV<<BITP_SPORT_DIV_A_CLKDIV)|(ADI_SPORT1A_DIV_FSDIV<<BITP_SPORT_DIV_A_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT1A_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */
#define ADI_SPORT1A_MCTL_WSIZE 						15u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT1A_MCTL_MFD						1u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT1A_MCTL_MCPDE 						1u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT1A_MCTL_MCE 						1u

/*! Specifies the SPORT1A_Multichannel Control register Configuration*/
#define ADI_SPORT_1A_MCTL  ((ADI_SPORT1A_MCTL_MCE<<BITP_SPORT_MCTL_A_MCE)|(ADI_SPORT1A_MCTL_MCPDE<<BITP_SPORT_MCTL_A_MCPDE)|(ADI_SPORT1A_MCTL_MFD<<BITP_SPORT_MCTL_A_MFD)|(ADI_SPORT1A_MCTL_WSIZE<<BITP_SPORT_MCTL_A_WSIZE)|(ADI_SPORT1A_MCTL_WOFFSET<<BITP_SPORT_MCTL_A_WOFFSET))

/*! Specifies the SPORT1A_Multichannel Control register Configuration*/
#define ADI_SPORT_1A_CS0								0xffff
#define ADI_SPORT_1A_CS1								0x00
#define ADI_SPORT_1A_CS2								0x00
#define ADI_SPORT_1A_CS3								0x00




/*!SPORT1B Instance*/
/*!Select SPORT1B Instance */
#define ADI_SPORT1B_INSTANCE                     0u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT1B_CTL_DTYPE                        0u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT1B_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT1B_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */
#define ADI_SPORT1B_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT1B_CTL_SLEN                         31u

/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT1B_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04 /*!<  bytes transfer  */
#define ADI_SPORT1B_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04 /*!<  bytes transfer  */

/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT1B_CTL_ICLK                         0u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */
#define ADI_SPORT1B_CTL_CKRE                         0u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT1B_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
#define ADI_SPORT1B_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */
#define ADI_SPORT1B_CTL_IFS                          0u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */
#define ADI_SPORT1B_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync.
* When the half SPORT is in I2S / packed / left-justified mode,
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */
#define ADI_SPORT1B_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2,
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */
#define ADI_SPORT1B_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */
#define ADI_SPORT1B_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT1B_CTL_OPMODE						 0u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT1B_CTL_SPTRAN                       0u

/*! Specifies the SPORT_1B_Control register Configuration*/
#define ADI_SPORT_1B_CTL   ((ADI_SPORT1B_CTL_DTYPE<<BITP_SPORT_CTL_B_DTYPE)|(ADI_SPORT1B_CTL_LSBF<<BITP_SPORT_CTL_B_LSBF)|(ADI_SPORT1B_CTL_SLEN<<BITP_SPORT_CTL_B_SLEN)|(ADI_SPORT1B_CTL_PACK<<BITP_SPORT_CTL_B_PACK)|(ADI_SPORT1B_CTL_ICLK<<BITP_SPORT_CTL_B_ICLK)|(ADI_SPORT1B_CTL_OPMODE<<BITP_SPORT_CTL_B_OPMODE)|(ADI_SPORT1B_CTL_CKRE<<BITP_SPORT_CTL_B_CKRE)/*|(ADI_SPORT1B_CTL_FSR<<BITP_SPORT_CTL_B_FSR)*/|(ADI_SPORT1B_CTL_IFS<<BITP_SPORT_CTL_B_IFS)|(ADI_SPORT1B_CTL_DIFS<<BITP_SPORT_CTL_B_DIFS)|(ADI_SPORT1B_CTL_LFS<<BITP_SPORT_CTL_B_LFS)|(ADI_SPORT1B_CTL_LAFS<<BITP_SPORT_CTL_B_LAFS)|(ADI_SPORT1B_CTL_RJUST<<BITP_SPORT_CTL_B_RJUST)|(ADI_SPORT1B_CTL_FSED<<BITP_SPORT_CTL_B_FSED)|(ADI_SPORT1B_CTL_GCLKEN<<BITP_SPORT_CTL_B_GCLKEN)|(ADI_SPORT1B_CTL_SPTRAN<<BITP_SPORT_CTL_B_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock.
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT1B_DIV_CLKDIV                       1u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse.
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT1B_DIV_FSDIV                        511u

/*! Specifies the SPORT1B_Divisor register Configuration*/
#define ADI_SPORT_1B_DIV  ((ADI_SPORT1B_DIV_CLKDIV<<BITP_SPORT_DIV_B_CLKDIV)|(ADI_SPORT1B_DIV_FSDIV<<BITP_SPORT_DIV_B_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT1B_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */
#define ADI_SPORT1B_MCTL_WSIZE 						15u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT1B_MCTL_MFD						1u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT1B_MCTL_MCPDE 						1u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT1B_MCTL_MCE 						1u

/*! Specifies the SPORT1B_Multichannel Control register Configuration*/
#define ADI_SPORT_1B_MCTL  ((ADI_SPORT1B_MCTL_MCE<<BITP_SPORT_MCTL_B_MCE)|(ADI_SPORT1B_MCTL_MCPDE<<BITP_SPORT_MCTL_B_MCPDE)|(ADI_SPORT1B_MCTL_MFD<<BITP_SPORT_MCTL_B_MFD)|(ADI_SPORT1B_MCTL_WSIZE<<BITP_SPORT_MCTL_B_WSIZE)|(ADI_SPORT1B_MCTL_WOFFSET<<BITP_SPORT_MCTL_B_WOFFSET))

/*! Specifies the SPORT1B_Multichannel Control register Configuration*/
#define ADI_SPORT_1B_CS0								0xffff
#define ADI_SPORT_1B_CS1								0x00
#define ADI_SPORT_1B_CS2								0x00
#define ADI_SPORT_1B_CS3								0x00


/*!SPORT2A Instance*/
/*!Select SPORT2A Instance */
#define ADI_SPORT2A_INSTANCE                     	 0u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT2A_CTL_DTYPE                        0u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT2A_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT2A_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */
#define ADI_SPORT2A_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT2A_CTL_SLEN                         31u

/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT2A_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04
#define ADI_SPORT2A_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04

/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT2A_CTL_ICLK                         1u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */
#define ADI_SPORT2A_CTL_CKRE                         0u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT2A_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
//#define ADI_SPORT0A_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */
#define ADI_SPORT2A_CTL_IFS                          1u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */
#define ADI_SPORT2A_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync.
* When the half SPORT is in I2S / packed / left-justified mode,
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */
#define ADI_SPORT2A_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2,
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */
#define ADI_SPORT2A_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */
#define ADI_SPORT2A_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT2A_CTL_OPMODE						 0u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT2A_CTL_SPTRAN                       1u


/*! Specifies the SPORT2A_Control register Configuration*/
#define ADI_SPORT_2A_CTL   ((ADI_SPORT2A_CTL_DTYPE<<BITP_SPORT_CTL_A_DTYPE)|(ADI_SPORT2A_CTL_LSBF<<BITP_SPORT_CTL_A_LSBF)|(ADI_SPORT2A_CTL_SLEN<<BITP_SPORT_CTL_A_SLEN)|(ADI_SPORT2A_CTL_PACK<<BITP_SPORT_CTL_A_PACK)|(ADI_SPORT2A_CTL_ICLK<<BITP_SPORT_CTL_A_ICLK)|(ADI_SPORT2A_CTL_OPMODE<<BITP_SPORT_CTL_A_OPMODE)|(ADI_SPORT2A_CTL_CKRE<<BITP_SPORT_CTL_A_CKRE)/*|(ADI_SPORT2A_CTL_FSR<<BITP_SPORT_CTL_A_FSR)*/|(ADI_SPORT2A_CTL_IFS<<BITP_SPORT_CTL_A_IFS)|(ADI_SPORT2A_CTL_DIFS<<BITP_SPORT_CTL_A_DIFS)|(ADI_SPORT2A_CTL_LFS<<BITP_SPORT_CTL_A_LFS)|(ADI_SPORT2A_CTL_LAFS<<BITP_SPORT_CTL_A_LAFS)|(ADI_SPORT2A_CTL_RJUST<<BITP_SPORT_CTL_A_RJUST)|(ADI_SPORT2A_CTL_FSED<<BITP_SPORT_CTL_A_FSED)|(ADI_SPORT2A_CTL_GCLKEN<<BITP_SPORT_CTL_A_GCLKEN)|(ADI_SPORT2A_CTL_SPTRAN<<BITP_SPORT_CTL_A_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock.
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT2A_DIV_CLKDIV                       0u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse.
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT2A_DIV_FSDIV                        511u

/*! Specifies the SPORT2A_Divisor register Configuration*/
#define ADI_SPORT_2A_DIV  ((ADI_SPORT2A_DIV_CLKDIV<<BITP_SPORT_DIV_A_CLKDIV)|(ADI_SPORT2A_DIV_FSDIV<<BITP_SPORT_DIV_A_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT2A_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */
#define ADI_SPORT2A_MCTL_WSIZE 						15u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT2A_MCTL_MFD						1u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT2A_MCTL_MCPDE 						1u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT2A_MCTL_MCE 						1u

/*! Specifies the SPORT2A_Multichannel Control register Configuration*/
#define ADI_SPORT_2A_MCTL  ((ADI_SPORT2A_MCTL_MCE<<BITP_SPORT_MCTL_A_MCE)|(ADI_SPORT2A_MCTL_MCPDE<<BITP_SPORT_MCTL_A_MCPDE)|(ADI_SPORT2A_MCTL_MFD<<BITP_SPORT_MCTL_A_MFD)|(ADI_SPORT2A_MCTL_WSIZE<<BITP_SPORT_MCTL_A_WSIZE)|(ADI_SPORT2A_MCTL_WOFFSET<<BITP_SPORT_MCTL_A_WOFFSET))



/*! Specifies the SPORT2A_Multichannel Control register Configuration*/
#define ADI_SPORT_2A_CS0								0xffff
#define ADI_SPORT_2A_CS1								0x00
#define ADI_SPORT_2A_CS2								0x00
#define ADI_SPORT_2A_CS3								0x00




/*!SPORT2B Instance*/
/*!Select SPORT2B Instance */
#define ADI_SPORT2B_INSTANCE                     0u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT2B_CTL_DTYPE                        0u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT2B_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT2B_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */
#define ADI_SPORT2B_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT2B_CTL_SLEN                         31u

/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT2B_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04 /*!<  bytes transfer  */
#define ADI_SPORT2B_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04 /*!<  bytes transfer  */

/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT2B_CTL_ICLK                         0u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */
#define ADI_SPORT2B_CTL_CKRE                         0u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT2B_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
#define ADI_SPORT2B_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */
#define ADI_SPORT2B_CTL_IFS                          0u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */
#define ADI_SPORT2B_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync.
* When the half SPORT is in I2S / packed / left-justified mode,
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */
#define ADI_SPORT2B_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2,
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */
#define ADI_SPORT2B_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */
#define ADI_SPORT2B_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT2B_CTL_OPMODE						 0u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT2B_CTL_SPTRAN                       0u

/*! Specifies the SPORT_2B_Control register Configuration*/
#define ADI_SPORT_2B_CTL   ((ADI_SPORT2B_CTL_DTYPE<<BITP_SPORT_CTL_B_DTYPE)|(ADI_SPORT2B_CTL_LSBF<<BITP_SPORT_CTL_B_LSBF)|(ADI_SPORT2B_CTL_SLEN<<BITP_SPORT_CTL_B_SLEN)|(ADI_SPORT2B_CTL_PACK<<BITP_SPORT_CTL_B_PACK)|(ADI_SPORT2B_CTL_ICLK<<BITP_SPORT_CTL_B_ICLK)|(ADI_SPORT2B_CTL_OPMODE<<BITP_SPORT_CTL_B_OPMODE)|(ADI_SPORT2B_CTL_CKRE<<BITP_SPORT_CTL_B_CKRE)/*|(ADI_SPORT2B_CTL_FSR<<BITP_SPORT_CTL_B_FSR)*/|(ADI_SPORT2B_CTL_IFS<<BITP_SPORT_CTL_B_IFS)|(ADI_SPORT2B_CTL_DIFS<<BITP_SPORT_CTL_B_DIFS)|(ADI_SPORT2B_CTL_LFS<<BITP_SPORT_CTL_B_LFS)|(ADI_SPORT2B_CTL_LAFS<<BITP_SPORT_CTL_B_LAFS)|(ADI_SPORT2B_CTL_RJUST<<BITP_SPORT_CTL_B_RJUST)|(ADI_SPORT2B_CTL_FSED<<BITP_SPORT_CTL_B_FSED)|(ADI_SPORT2B_CTL_GCLKEN<<BITP_SPORT_CTL_B_GCLKEN)|(ADI_SPORT2B_CTL_SPTRAN<<BITP_SPORT_CTL_B_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock.
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT2B_DIV_CLKDIV                       1u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse.
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT2B_DIV_FSDIV                        511u

/*! Specifies the SPORT2B_Divisor register Configuration*/
#define ADI_SPORT_2B_DIV  ((ADI_SPORT2B_DIV_CLKDIV<<BITP_SPORT_DIV_B_CLKDIV)|(ADI_SPORT2B_DIV_FSDIV<<BITP_SPORT_DIV_B_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT2B_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */
#define ADI_SPORT2B_MCTL_WSIZE 						15u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT2B_MCTL_MFD						1u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT2B_MCTL_MCPDE 						1u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT2B_MCTL_MCE 						1u

/*! Specifies the SPORT2B_Multichannel Control register Configuration*/
#define ADI_SPORT_2B_MCTL  ((ADI_SPORT2B_MCTL_MCE<<BITP_SPORT_MCTL_B_MCE)|(ADI_SPORT2B_MCTL_MCPDE<<BITP_SPORT_MCTL_B_MCPDE)|(ADI_SPORT2B_MCTL_MFD<<BITP_SPORT_MCTL_B_MFD)|(ADI_SPORT2B_MCTL_WSIZE<<BITP_SPORT_MCTL_B_WSIZE)|(ADI_SPORT2B_MCTL_WOFFSET<<BITP_SPORT_MCTL_B_WOFFSET))

/*! Specifies the SPORT2B_Multichannel Control register Configuration*/
#define ADI_SPORT_2B_CS0								0xffff
#define ADI_SPORT_2B_CS1								0x00
#define ADI_SPORT_2B_CS2								0x00
#define ADI_SPORT_2B_CS3								0x00

/*!SPORT3A Instance*/
/*!Select SPORT3A Instance */
#define ADI_SPORT3A_INSTANCE                     0u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT3A_CTL_DTYPE                        0u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT3A_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT3A_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */
#define ADI_SPORT3A_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT3A_CTL_SLEN                         31u

/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT3A_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04
#define ADI_SPORT3A_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04

/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT3A_CTL_ICLK                         0u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */
#define ADI_SPORT3A_CTL_CKRE                         0u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT3A_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
//#define ADI_SPORT3A_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */
#define ADI_SPORT3A_CTL_IFS                          0u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */
#define ADI_SPORT3A_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync.
* When the half SPORT is in I2S / packed / left-justified mode,
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */
#define ADI_SPORT3A_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2,
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */
#define ADI_SPORT3A_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */
#define ADI_SPORT3A_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT3A_CTL_OPMODE						 0u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT3A_CTL_SPTRAN                       1u


/*! Specifies the SPORT3A_Control register Configuration*/
#define ADI_SPORT_3A_CTL   ((ADI_SPORT3A_CTL_DTYPE<<BITP_SPORT_CTL_A_DTYPE)|(ADI_SPORT3A_CTL_LSBF<<BITP_SPORT_CTL_A_LSBF)|(ADI_SPORT3A_CTL_SLEN<<BITP_SPORT_CTL_A_SLEN)|(ADI_SPORT3A_CTL_PACK<<BITP_SPORT_CTL_A_PACK)|(ADI_SPORT3A_CTL_ICLK<<BITP_SPORT_CTL_A_ICLK)|(ADI_SPORT3A_CTL_OPMODE<<BITP_SPORT_CTL_A_OPMODE)|(ADI_SPORT3A_CTL_CKRE<<BITP_SPORT_CTL_A_CKRE)/*|(ADI_SPORT3A_CTL_FSR<<BITP_SPORT_CTL_A_FSR)*/|(ADI_SPORT3A_CTL_IFS<<BITP_SPORT_CTL_A_IFS)|(ADI_SPORT3A_CTL_DIFS<<BITP_SPORT_CTL_A_DIFS)|(ADI_SPORT3A_CTL_LFS<<BITP_SPORT_CTL_A_LFS)|(ADI_SPORT3A_CTL_LAFS<<BITP_SPORT_CTL_A_LAFS)|(ADI_SPORT3A_CTL_RJUST<<BITP_SPORT_CTL_A_RJUST)|(ADI_SPORT3A_CTL_FSED<<BITP_SPORT_CTL_A_FSED)|(ADI_SPORT3A_CTL_GCLKEN<<BITP_SPORT_CTL_A_GCLKEN)|(ADI_SPORT3A_CTL_SPTRAN<<BITP_SPORT_CTL_A_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock.
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT3A_DIV_CLKDIV                       1u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse.
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT3A_DIV_FSDIV                        511u

/*! Specifies the SPORT3A_Divisor register Configuration*/
#define ADI_SPORT_3A_DIV  ((ADI_SPORT3A_DIV_CLKDIV<<BITP_SPORT_DIV_A_CLKDIV)|(ADI_SPORT3A_DIV_FSDIV<<BITP_SPORT_DIV_A_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT3A_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */
#define ADI_SPORT3A_MCTL_WSIZE 						15u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT3A_MCTL_MFD						1u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT3A_MCTL_MCPDE 						1u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT3A_MCTL_MCE 						1u

/*! Specifies the SPORT3A_Multichannel Control register Configuration*/
#define ADI_SPORT_3A_MCTL  ((ADI_SPORT3A_MCTL_MCE<<BITP_SPORT_MCTL_A_MCE)|(ADI_SPORT3A_MCTL_MCPDE<<BITP_SPORT_MCTL_A_MCPDE)|(ADI_SPORT3A_MCTL_MFD<<BITP_SPORT_MCTL_A_MFD)|(ADI_SPORT3A_MCTL_WSIZE<<BITP_SPORT_MCTL_A_WSIZE)|(ADI_SPORT3A_MCTL_WOFFSET<<BITP_SPORT_MCTL_A_WOFFSET))

/*! Specifies the SPORT3A_Multichannel Control register Configuration*/
#define ADI_SPORT_3A_CS0								0xffff
#define ADI_SPORT_3A_CS1								0x00
#define ADI_SPORT_3A_CS2								0x00
#define ADI_SPORT_3A_CS3								0x00


/*!SPORT3B Instance*/
/*!Select SPORT3B Instance */
#define ADI_SPORT3B_INSTANCE                     0u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT3B_CTL_DTYPE                        0u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT3B_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT3B_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */
#define ADI_SPORT3B_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT3B_CTL_SLEN                         31u

/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT3B_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04 /*!<  bytes transfer  */
#define ADI_SPORT3B_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04 /*!<  bytes transfer  */

/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT3B_CTL_ICLK                         0u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */
#define ADI_SPORT3B_CTL_CKRE                         0u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT3B_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
#define ADI_SPORT3B_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */
#define ADI_SPORT3B_CTL_IFS                          0u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */
#define ADI_SPORT3B_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync.
* When the half SPORT is in I2S / packed / left-justified mode,
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */
#define ADI_SPORT3B_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2,
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */
#define ADI_SPORT3B_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */
#define ADI_SPORT3B_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT3B_CTL_OPMODE						 0u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT3B_CTL_SPTRAN                       0u

/*! Specifies the SPORT_3B_Control register Configuration*/
#define ADI_SPORT_3B_CTL   ((ADI_SPORT3B_CTL_DTYPE<<BITP_SPORT_CTL_B_DTYPE)|(ADI_SPORT3B_CTL_LSBF<<BITP_SPORT_CTL_B_LSBF)|(ADI_SPORT3B_CTL_SLEN<<BITP_SPORT_CTL_B_SLEN)|(ADI_SPORT3B_CTL_PACK<<BITP_SPORT_CTL_B_PACK)|(ADI_SPORT3B_CTL_ICLK<<BITP_SPORT_CTL_B_ICLK)|(ADI_SPORT3B_CTL_OPMODE<<BITP_SPORT_CTL_B_OPMODE)|(ADI_SPORT3B_CTL_CKRE<<BITP_SPORT_CTL_B_CKRE)/*|(ADI_SPORT3B_CTL_FSR<<BITP_SPORT_CTL_B_FSR)*/|(ADI_SPORT3B_CTL_IFS<<BITP_SPORT_CTL_B_IFS)|(ADI_SPORT3B_CTL_DIFS<<BITP_SPORT_CTL_B_DIFS)|(ADI_SPORT3B_CTL_LFS<<BITP_SPORT_CTL_B_LFS)|(ADI_SPORT3B_CTL_LAFS<<BITP_SPORT_CTL_B_LAFS)|(ADI_SPORT3B_CTL_RJUST<<BITP_SPORT_CTL_B_RJUST)|(ADI_SPORT3B_CTL_FSED<<BITP_SPORT_CTL_B_FSED)|(ADI_SPORT3B_CTL_GCLKEN<<BITP_SPORT_CTL_B_GCLKEN)|(ADI_SPORT3B_CTL_SPTRAN<<BITP_SPORT_CTL_B_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock.
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT3B_DIV_CLKDIV                       1u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse.
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT3B_DIV_FSDIV                        511u

/*! Specifies the SPORT3B_Divisor register Configuration*/
#define ADI_SPORT_3B_DIV  ((ADI_SPORT3B_DIV_CLKDIV<<BITP_SPORT_DIV_B_CLKDIV)|(ADI_SPORT3B_DIV_FSDIV<<BITP_SPORT_DIV_B_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT3B_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */
#define ADI_SPORT3B_MCTL_WSIZE 						15u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT3B_MCTL_MFD						1u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT3B_MCTL_MCPDE 						1u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT3B_MCTL_MCE 						1u

/*! Specifies the SPORT3B_Multichannel Control register Configuration*/
#define ADI_SPORT_3B_MCTL  ((ADI_SPORT3B_MCTL_MCE<<BITP_SPORT_MCTL_B_MCE)|(ADI_SPORT3B_MCTL_MCPDE<<BITP_SPORT_MCTL_B_MCPDE)|(ADI_SPORT3B_MCTL_MFD<<BITP_SPORT_MCTL_B_MFD)|(ADI_SPORT3B_MCTL_WSIZE<<BITP_SPORT_MCTL_B_WSIZE)|(ADI_SPORT3B_MCTL_WOFFSET<<BITP_SPORT_MCTL_B_WOFFSET))

/*! Specifies the SPORT3B_Multichannel Control register Configuration*/
#define ADI_SPORT_3B_CS0								0xffff
#define ADI_SPORT_3B_CS1								0x00
#define ADI_SPORT_3B_CS2								0x00
#define ADI_SPORT_3B_CS3								0x00


#if defined(__ADSP21569_FAMILY__) || defined(__ADSPSC589_FAMILY__)
/*!SPORT4A Instance*/
/*!Select SPORT4A Instance */
#define ADI_SPORT4A_INSTANCE                     1u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT4A_CTL_DTYPE                        1u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT4A_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT4A_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */
#define ADI_SPORT4A_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT4A_CTL_SLEN                         23u

/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT4A_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04
#define ADI_SPORT4A_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04

/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT4A_CTL_ICLK                         0u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */
#define ADI_SPORT4A_CTL_CKRE                         1u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT4A_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
//#define ADI_SPORT4A_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */
#define ADI_SPORT4A_CTL_IFS                          0u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */
#define ADI_SPORT4A_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync.
* When the half SPORT is in I2S / packed / left-justified mode,
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */
#define ADI_SPORT4A_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2,
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */
#define ADI_SPORT4A_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */
#define ADI_SPORT4A_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT4A_CTL_OPMODE						 1u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT4A_CTL_SPTRAN                       1u


/*! Specifies the SPORT4A_Control register Configuration*/
#define ADI_SPORT_4A_CTL   ((ADI_SPORT4A_CTL_DTYPE<<BITP_SPORT_CTL_A_DTYPE)|(ADI_SPORT4A_CTL_LSBF<<BITP_SPORT_CTL_A_LSBF)|(ADI_SPORT4A_CTL_SLEN<<BITP_SPORT_CTL_A_SLEN)|(ADI_SPORT4A_CTL_PACK<<BITP_SPORT_CTL_A_PACK)|(ADI_SPORT4A_CTL_ICLK<<BITP_SPORT_CTL_A_ICLK)|(ADI_SPORT4A_CTL_OPMODE<<BITP_SPORT_CTL_A_OPMODE)|(ADI_SPORT4A_CTL_CKRE<<BITP_SPORT_CTL_A_CKRE)/*|(ADI_SPORT4A_CTL_FSR<<BITP_SPORT_CTL_A_FSR)*/|(ADI_SPORT4A_CTL_IFS<<BITP_SPORT_CTL_A_IFS)|(ADI_SPORT4A_CTL_DIFS<<BITP_SPORT_CTL_A_DIFS)|(ADI_SPORT4A_CTL_LFS<<BITP_SPORT_CTL_A_LFS)|(ADI_SPORT4A_CTL_LAFS<<BITP_SPORT_CTL_A_LAFS)|(ADI_SPORT4A_CTL_RJUST<<BITP_SPORT_CTL_A_RJUST)|(ADI_SPORT4A_CTL_FSED<<BITP_SPORT_CTL_A_FSED)|(ADI_SPORT4A_CTL_GCLKEN<<BITP_SPORT_CTL_A_GCLKEN)|(ADI_SPORT4A_CTL_SPTRAN<<BITP_SPORT_CTL_A_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock.
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT4A_DIV_CLKDIV                       32u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse.
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT4A_DIV_FSDIV                        23u

/*! Specifies the SPORT4A_Divisor register Configuration*/
#define ADI_SPORT_4A_DIV  ((ADI_SPORT4A_DIV_CLKDIV<<BITP_SPORT_DIV_A_CLKDIV)|(ADI_SPORT4A_DIV_FSDIV<<BITP_SPORT_DIV_A_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT4A_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */
#define ADI_SPORT4A_MCTL_WSIZE 						0u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT4A_MCTL_MFD						0u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT4A_MCTL_MCPDE 						0u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT4A_MCTL_MCE 						0u

/*! Specifies the SPORT4A_Multichannel Control register Configuration*/
#define ADI_SPORT_4A_MCTL  ((ADI_SPORT4A_MCTL_MCE<<BITP_SPORT_MCTL_A_MCE)|(ADI_SPORT4A_MCTL_MCPDE<<BITP_SPORT_MCTL_A_MCPDE)|(ADI_SPORT4A_MCTL_MFD<<BITP_SPORT_MCTL_A_MFD)|(ADI_SPORT4A_MCTL_WSIZE<<BITP_SPORT_MCTL_A_WSIZE)|(ADI_SPORT4A_MCTL_WOFFSET<<BITP_SPORT_MCTL_A_WOFFSET))

/*! Specifies the SPORT4A_Multichannel Control register Configuration*/
#define ADI_SPORT_4A_CS0								0x00
#define ADI_SPORT_4A_CS1								0x00
#define ADI_SPORT_4A_CS2								0x00
#define ADI_SPORT_4A_CS3								0x00



/*!SPORT4B Instance*/
/*!Select SPORT4B Instance */
#define ADI_SPORT4B_INSTANCE                     1u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT4B_CTL_DTYPE                        1u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT4B_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT4B_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */
#define ADI_SPORT4B_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT4B_CTL_SLEN                         23u

/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT4B_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04 /*!<  bytes transfer  */
#define ADI_SPORT4B_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04 /*!<  bytes transfer  */

/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT4B_CTL_ICLK                         0u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */
#define ADI_SPORT4B_CTL_CKRE                         1u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT4B_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
#define ADI_SPORT4B_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */
#define ADI_SPORT4B_CTL_IFS                          0u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */
#define ADI_SPORT4B_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync.
* When the half SPORT is in I2S / packed / left-justified mode,
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */
#define ADI_SPORT4B_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2,
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */
#define ADI_SPORT4B_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */
#define ADI_SPORT4B_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT4B_CTL_OPMODE						 1u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT4B_CTL_SPTRAN                       0u

/*! Specifies the SPORT_4B_Control register Configuration*/
#define ADI_SPORT_4B_CTL   ((ADI_SPORT4B_CTL_DTYPE<<BITP_SPORT_CTL_B_DTYPE)|(ADI_SPORT4B_CTL_LSBF<<BITP_SPORT_CTL_B_LSBF)|(ADI_SPORT4B_CTL_SLEN<<BITP_SPORT_CTL_B_SLEN)|(ADI_SPORT4B_CTL_PACK<<BITP_SPORT_CTL_B_PACK)|(ADI_SPORT4B_CTL_ICLK<<BITP_SPORT_CTL_B_ICLK)|(ADI_SPORT4B_CTL_OPMODE<<BITP_SPORT_CTL_B_OPMODE)|(ADI_SPORT4B_CTL_CKRE<<BITP_SPORT_CTL_B_CKRE)/*|(ADI_SPORT4B_CTL_FSR<<BITP_SPORT_CTL_B_FSR)*/|(ADI_SPORT4B_CTL_IFS<<BITP_SPORT_CTL_B_IFS)|(ADI_SPORT4B_CTL_DIFS<<BITP_SPORT_CTL_B_DIFS)|(ADI_SPORT4B_CTL_LFS<<BITP_SPORT_CTL_B_LFS)|(ADI_SPORT4B_CTL_LAFS<<BITP_SPORT_CTL_B_LAFS)|(ADI_SPORT4B_CTL_RJUST<<BITP_SPORT_CTL_B_RJUST)|(ADI_SPORT4B_CTL_FSED<<BITP_SPORT_CTL_B_FSED)|(ADI_SPORT4B_CTL_GCLKEN<<BITP_SPORT_CTL_B_GCLKEN)|(ADI_SPORT4B_CTL_SPTRAN<<BITP_SPORT_CTL_B_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock.
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT4B_DIV_CLKDIV                       32u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse.
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT4B_DIV_FSDIV                        23u

/*! Specifies the SPORT4B_Divisor register Configuration*/
#define ADI_SPORT_4B_DIV  ((ADI_SPORT4B_DIV_CLKDIV<<BITP_SPORT_DIV_B_CLKDIV)|(ADI_SPORT4B_DIV_FSDIV<<BITP_SPORT_DIV_B_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT4B_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */
#define ADI_SPORT4B_MCTL_WSIZE 						0u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT4B_MCTL_MFD						0u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT4B_MCTL_MCPDE 						0u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT4B_MCTL_MCE 						0u

/*! Specifies the SPORT4B_Multichannel Control register Configuration*/
#define ADI_SPORT_4B_MCTL  ((ADI_SPORT4B_MCTL_MCE<<BITP_SPORT_MCTL_B_MCE)|(ADI_SPORT4B_MCTL_MCPDE<<BITP_SPORT_MCTL_B_MCPDE)|(ADI_SPORT4B_MCTL_MFD<<BITP_SPORT_MCTL_B_MFD)|(ADI_SPORT4B_MCTL_WSIZE<<BITP_SPORT_MCTL_B_WSIZE)|(ADI_SPORT4B_MCTL_WOFFSET<<BITP_SPORT_MCTL_B_WOFFSET))

/*! Specifies the SPORT4B_Multichannel Control register Configuration*/
#define ADI_SPORT_4B_CS0								0x00
#define ADI_SPORT_4B_CS1								0x00
#define ADI_SPORT_4B_CS2								0x00
#define ADI_SPORT_4B_CS3								0x00






/*!SPORT5A Instance*/
/*!Select SPORT5A Instance */
#define ADI_SPORT5A_INSTANCE                     0u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT5A_CTL_DTYPE                        0u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT5A_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT5A_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */
#define ADI_SPORT5A_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT5A_CTL_SLEN                         31u

/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT5A_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04
#define ADI_SPORT5A_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04

/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT5A_CTL_ICLK                         1u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */
#define ADI_SPORT5A_CTL_CKRE                         0u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT5A_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
//#define ADI_SPORT5A_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */
#define ADI_SPORT5A_CTL_IFS                          1u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */
#define ADI_SPORT5A_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync.
* When the half SPORT is in I2S / packed / left-justified mode,
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */
#define ADI_SPORT5A_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2,
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */
#define ADI_SPORT5A_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */
#define ADI_SPORT5A_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT5A_CTL_OPMODE						 0u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT5A_CTL_SPTRAN                       1u


/*! Specifies the SPORT5A_Control register Configuration*/
#define ADI_SPORT_5A_CTL   ((ADI_SPORT5A_CTL_DTYPE<<BITP_SPORT_CTL_A_DTYPE)|(ADI_SPORT5A_CTL_LSBF<<BITP_SPORT_CTL_A_LSBF)|(ADI_SPORT5A_CTL_SLEN<<BITP_SPORT_CTL_A_SLEN)|(ADI_SPORT5A_CTL_PACK<<BITP_SPORT_CTL_A_PACK)|(ADI_SPORT5A_CTL_ICLK<<BITP_SPORT_CTL_A_ICLK)|(ADI_SPORT5A_CTL_OPMODE<<BITP_SPORT_CTL_A_OPMODE)|(ADI_SPORT5A_CTL_CKRE<<BITP_SPORT_CTL_A_CKRE)/*|(ADI_SPORT5A_CTL_FSR<<BITP_SPORT_CTL_A_FSR)*/|(ADI_SPORT5A_CTL_IFS<<BITP_SPORT_CTL_A_IFS)|(ADI_SPORT5A_CTL_DIFS<<BITP_SPORT_CTL_A_DIFS)|(ADI_SPORT5A_CTL_LFS<<BITP_SPORT_CTL_A_LFS)|(ADI_SPORT5A_CTL_LAFS<<BITP_SPORT_CTL_A_LAFS)|(ADI_SPORT5A_CTL_RJUST<<BITP_SPORT_CTL_A_RJUST)|(ADI_SPORT5A_CTL_FSED<<BITP_SPORT_CTL_A_FSED)|(ADI_SPORT5A_CTL_GCLKEN<<BITP_SPORT_CTL_A_GCLKEN)|(ADI_SPORT5A_CTL_SPTRAN<<BITP_SPORT_CTL_A_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock.
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT5A_DIV_CLKDIV                       1u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse.
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT5A_DIV_FSDIV                        511u

/*! Specifies the SPORT5A_Divisor register Configuration*/
#define ADI_SPORT_5A_DIV  ((ADI_SPORT5A_DIV_CLKDIV<<BITP_SPORT_DIV_A_CLKDIV)|(ADI_SPORT5A_DIV_FSDIV<<BITP_SPORT_DIV_A_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT5A_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */
#define ADI_SPORT5A_MCTL_WSIZE 						15u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT5A_MCTL_MFD						1u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT5A_MCTL_MCPDE 						1u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT5A_MCTL_MCE 						1u

/*! Specifies the SPORT0A_Multichannel Control register Configuration*/
#define ADI_SPORT_5A_MCTL  ((ADI_SPORT5A_MCTL_MCE<<BITP_SPORT_MCTL_A_MCE)|(ADI_SPORT5A_MCTL_MCPDE<<BITP_SPORT_MCTL_A_MCPDE)|(ADI_SPORT5A_MCTL_MFD<<BITP_SPORT_MCTL_A_MFD)|(ADI_SPORT5A_MCTL_WSIZE<<BITP_SPORT_MCTL_A_WSIZE)|(ADI_SPORT5A_MCTL_WOFFSET<<BITP_SPORT_MCTL_A_WOFFSET))

/*! Specifies the SPORT5A_Multichannel Control register Configuration*/
#define ADI_SPORT_5A_CS0								0xffff
#define ADI_SPORT_5A_CS1								0x00
#define ADI_SPORT_5A_CS2								0x00
#define ADI_SPORT_5A_CS3								0x00






/*!SPORT5B Instance*/
/*!Select SPORT5B Instance */
#define ADI_SPORT5B_INSTANCE                     0u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT5B_CTL_DTYPE                        0u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT5B_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT5B_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */
#define ADI_SPORT5B_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT5B_CTL_SLEN                         31u

/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT5B_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04 /*!<  bytes transfer  */
#define ADI_SPORT5B_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04 /*!<  bytes transfer  */

/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT5B_CTL_ICLK                         0u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */
#define ADI_SPORT5B_CTL_CKRE                         0u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT5B_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
#define ADI_SPORT5B_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */
#define ADI_SPORT5B_CTL_IFS                          0u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */
#define ADI_SPORT5B_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync.
* When the half SPORT is in I2S / packed / left-justified mode,
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */
#define ADI_SPORT5B_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2,
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */
#define ADI_SPORT5B_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */
#define ADI_SPORT5B_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT5B_CTL_OPMODE						 0u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT5B_CTL_SPTRAN                       0u

/*! Specifies the SPORT_5B_Control register Configuration*/
#define ADI_SPORT_5B_CTL   ((ADI_SPORT5B_CTL_DTYPE<<BITP_SPORT_CTL_B_DTYPE)|(ADI_SPORT5B_CTL_LSBF<<BITP_SPORT_CTL_B_LSBF)|(ADI_SPORT5B_CTL_SLEN<<BITP_SPORT_CTL_B_SLEN)|(ADI_SPORT5B_CTL_PACK<<BITP_SPORT_CTL_B_PACK)|(ADI_SPORT5B_CTL_ICLK<<BITP_SPORT_CTL_B_ICLK)|(ADI_SPORT5B_CTL_OPMODE<<BITP_SPORT_CTL_B_OPMODE)|(ADI_SPORT5B_CTL_CKRE<<BITP_SPORT_CTL_B_CKRE)/*|(ADI_SPORT5B_CTL_FSR<<BITP_SPORT_CTL_B_FSR)*/|(ADI_SPORT5B_CTL_IFS<<BITP_SPORT_CTL_B_IFS)|(ADI_SPORT5B_CTL_DIFS<<BITP_SPORT_CTL_B_DIFS)|(ADI_SPORT5B_CTL_LFS<<BITP_SPORT_CTL_B_LFS)|(ADI_SPORT5B_CTL_LAFS<<BITP_SPORT_CTL_B_LAFS)|(ADI_SPORT5B_CTL_RJUST<<BITP_SPORT_CTL_B_RJUST)|(ADI_SPORT5B_CTL_FSED<<BITP_SPORT_CTL_B_FSED)|(ADI_SPORT5B_CTL_GCLKEN<<BITP_SPORT_CTL_B_GCLKEN)|(ADI_SPORT5B_CTL_SPTRAN<<BITP_SPORT_CTL_B_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock.
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT5B_DIV_CLKDIV                       1u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse.
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT5B_DIV_FSDIV                        511u

/*! Specifies the SPORT5B_Divisor register Configuration*/
#define ADI_SPORT_5B_DIV  ((ADI_SPORT5B_DIV_CLKDIV<<BITP_SPORT_DIV_B_CLKDIV)|(ADI_SPORT5B_DIV_FSDIV<<BITP_SPORT_DIV_B_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT5B_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */
#define ADI_SPORT5B_MCTL_WSIZE 						15u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT5B_MCTL_MFD						1u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT5B_MCTL_MCPDE 						1u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT5B_MCTL_MCE 						1u

/*! Specifies the SPORT5B_Multichannel Control register Configuration*/
#define ADI_SPORT_5B_MCTL  ((ADI_SPORT5B_MCTL_MCE<<BITP_SPORT_MCTL_B_MCE)|(ADI_SPORT5B_MCTL_MCPDE<<BITP_SPORT_MCTL_B_MCPDE)|(ADI_SPORT5B_MCTL_MFD<<BITP_SPORT_MCTL_B_MFD)|(ADI_SPORT5B_MCTL_WSIZE<<BITP_SPORT_MCTL_B_WSIZE)|(ADI_SPORT5B_MCTL_WOFFSET<<BITP_SPORT_MCTL_B_WOFFSET))

/*! Specifies the SPORT5B_Multichannel Control register Configuration*/
#define ADI_SPORT_5B_CS0								0xffff
#define ADI_SPORT_5B_CS1								0x00
#define ADI_SPORT_5B_CS2								0x00
#define ADI_SPORT_5B_CS3								0x00







/*!SPORT6A Instance*/
/*!Select SPORT6A Instance */
#define ADI_SPORT6A_INSTANCE                     0u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT6A_CTL_DTYPE                        0u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT6A_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT6A_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */
#define ADI_SPORT6A_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT6A_CTL_SLEN                         31u

/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT6A_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04
#define ADI_SPORT6A_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04

/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT6A_CTL_ICLK                         1u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */
#define ADI_SPORT6A_CTL_CKRE                         0u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT6A_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
//#define ADI_SPORT5A_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */
#define ADI_SPORT6A_CTL_IFS                          1u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */
#define ADI_SPORT6A_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync.
* When the half SPORT is in I2S / packed / left-justified mode,
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */
#define ADI_SPORT6A_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2,
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */
#define ADI_SPORT6A_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */
#define ADI_SPORT6A_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT6A_CTL_OPMODE						 0u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT6A_CTL_SPTRAN                       1u


/*! Specifies the SPORT6A_Control register Configuration*/
#define ADI_SPORT_6A_CTL   ((ADI_SPORT6A_CTL_DTYPE<<BITP_SPORT_CTL_A_DTYPE)|(ADI_SPORT6A_CTL_LSBF<<BITP_SPORT_CTL_A_LSBF)|(ADI_SPORT6A_CTL_SLEN<<BITP_SPORT_CTL_A_SLEN)|(ADI_SPORT6A_CTL_PACK<<BITP_SPORT_CTL_A_PACK)|(ADI_SPORT6A_CTL_ICLK<<BITP_SPORT_CTL_A_ICLK)|(ADI_SPORT6A_CTL_OPMODE<<BITP_SPORT_CTL_A_OPMODE)|(ADI_SPORT6A_CTL_CKRE<<BITP_SPORT_CTL_A_CKRE)/*|(ADI_SPORT6A_CTL_FSR<<BITP_SPORT_CTL_A_FSR)*/|(ADI_SPORT6A_CTL_IFS<<BITP_SPORT_CTL_A_IFS)|(ADI_SPORT6A_CTL_DIFS<<BITP_SPORT_CTL_A_DIFS)|(ADI_SPORT6A_CTL_LFS<<BITP_SPORT_CTL_A_LFS)|(ADI_SPORT6A_CTL_LAFS<<BITP_SPORT_CTL_A_LAFS)|(ADI_SPORT6A_CTL_RJUST<<BITP_SPORT_CTL_A_RJUST)|(ADI_SPORT6A_CTL_FSED<<BITP_SPORT_CTL_A_FSED)|(ADI_SPORT6A_CTL_GCLKEN<<BITP_SPORT_CTL_A_GCLKEN)|(ADI_SPORT6A_CTL_SPTRAN<<BITP_SPORT_CTL_A_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock.
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT6A_DIV_CLKDIV                       1u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse.
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT6A_DIV_FSDIV                        511u

/*! Specifies the SPORT6A_Divisor register Configuration*/
#define ADI_SPORT_6A_DIV  ((ADI_SPORT6A_DIV_CLKDIV<<BITP_SPORT_DIV_A_CLKDIV)|(ADI_SPORT6A_DIV_FSDIV<<BITP_SPORT_DIV_A_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT6A_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */
#define ADI_SPORT6A_MCTL_WSIZE 						15u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT6A_MCTL_MFD						1u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT6A_MCTL_MCPDE 						1u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT6A_MCTL_MCE 						1u

/*! Specifies the SPORT6A_Multichannel Control register Configuration*/
#define ADI_SPORT_6A_MCTL  ((ADI_SPORT6A_MCTL_MCE<<BITP_SPORT_MCTL_A_MCE)|(ADI_SPORT6A_MCTL_MCPDE<<BITP_SPORT_MCTL_A_MCPDE)|(ADI_SPORT6A_MCTL_MFD<<BITP_SPORT_MCTL_A_MFD)|(ADI_SPORT6A_MCTL_WSIZE<<BITP_SPORT_MCTL_A_WSIZE)|(ADI_SPORT6A_MCTL_WOFFSET<<BITP_SPORT_MCTL_A_WOFFSET))

/*! Specifies the SPORT6A_Multichannel Control register Configuration*/
#define ADI_SPORT_6A_CS0								0xffff
#define ADI_SPORT_6A_CS1								0x00
#define ADI_SPORT_6A_CS2								0x00
#define ADI_SPORT_6A_CS3								0x00






/*!SPORT6B Instance*/
/*!Select SPORT6B Instance */
#define ADI_SPORT6B_INSTANCE                     0u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT6B_CTL_DTYPE                        0u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT6B_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT6B_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */
#define ADI_SPORT6B_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT6B_CTL_SLEN                         31u

/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT6B_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04 /*!<  bytes transfer  */
#define ADI_SPORT6B_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04 /*!<  bytes transfer  */

/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT6B_CTL_ICLK                         0u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */
#define ADI_SPORT6B_CTL_CKRE                         0u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT6B_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
#define ADI_SPORT6B_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */
#define ADI_SPORT6B_CTL_IFS                          0u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */
#define ADI_SPORT6B_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync.
* When the half SPORT is in I2S / packed / left-justified mode,
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */
#define ADI_SPORT6B_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2,
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */
#define ADI_SPORT6B_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */
#define ADI_SPORT6B_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT6B_CTL_OPMODE						 0u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT6B_CTL_SPTRAN                       0u

/*! Specifies the SPORT_6B_Control register Configuration*/
#define ADI_SPORT_6B_CTL   ((ADI_SPORT6B_CTL_DTYPE<<BITP_SPORT_CTL_B_DTYPE)|(ADI_SPORT6B_CTL_LSBF<<BITP_SPORT_CTL_B_LSBF)|(ADI_SPORT6B_CTL_SLEN<<BITP_SPORT_CTL_B_SLEN)|(ADI_SPORT6B_CTL_PACK<<BITP_SPORT_CTL_B_PACK)|(ADI_SPORT6B_CTL_ICLK<<BITP_SPORT_CTL_B_ICLK)|(ADI_SPORT6B_CTL_OPMODE<<BITP_SPORT_CTL_B_OPMODE)|(ADI_SPORT6B_CTL_CKRE<<BITP_SPORT_CTL_B_CKRE)/*|(ADI_SPORT6B_CTL_FSR<<BITP_SPORT_CTL_B_FSR)*/|(ADI_SPORT6B_CTL_IFS<<BITP_SPORT_CTL_B_IFS)|(ADI_SPORT6B_CTL_DIFS<<BITP_SPORT_CTL_B_DIFS)|(ADI_SPORT6B_CTL_LFS<<BITP_SPORT_CTL_B_LFS)|(ADI_SPORT6B_CTL_LAFS<<BITP_SPORT_CTL_B_LAFS)|(ADI_SPORT6B_CTL_RJUST<<BITP_SPORT_CTL_B_RJUST)|(ADI_SPORT6B_CTL_FSED<<BITP_SPORT_CTL_B_FSED)|(ADI_SPORT6B_CTL_GCLKEN<<BITP_SPORT_CTL_B_GCLKEN)|(ADI_SPORT6B_CTL_SPTRAN<<BITP_SPORT_CTL_B_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock.
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT6B_DIV_CLKDIV                       1u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse.
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT6B_DIV_FSDIV                        511u

/*! Specifies the SPORT6B_Divisor register Configuration*/
#define ADI_SPORT_6B_DIV  ((ADI_SPORT6B_DIV_CLKDIV<<BITP_SPORT_DIV_B_CLKDIV)|(ADI_SPORT6B_DIV_FSDIV<<BITP_SPORT_DIV_B_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT6B_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */
#define ADI_SPORT6B_MCTL_WSIZE 						15u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT6B_MCTL_MFD						1u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT6B_MCTL_MCPDE 						1u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT6B_MCTL_MCE 						1u

/*! Specifies the SPORT6B_Multichannel Control register Configuration*/
#define ADI_SPORT_6B_MCTL  ((ADI_SPORT6B_MCTL_MCE<<BITP_SPORT_MCTL_B_MCE)|(ADI_SPORT6B_MCTL_MCPDE<<BITP_SPORT_MCTL_B_MCPDE)|(ADI_SPORT6B_MCTL_MFD<<BITP_SPORT_MCTL_B_MFD)|(ADI_SPORT6B_MCTL_WSIZE<<BITP_SPORT_MCTL_B_WSIZE)|(ADI_SPORT6B_MCTL_WOFFSET<<BITP_SPORT_MCTL_B_WOFFSET))

/*! Specifies the SPORT6B_Multichannel Control register Configuration*/
#define ADI_SPORT_6B_CS0								0xffff
#define ADI_SPORT_6B_CS1								0x00
#define ADI_SPORT_6B_CS2								0x00
#define ADI_SPORT_6B_CS3								0x00






/*!SPORT7A Instance*/
/*!Select SPORT7A Instance */
#define ADI_SPORT7A_INSTANCE                     0u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT7A_CTL_DTYPE                        0u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT7A_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT7A_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */
#define ADI_SPORT7A_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT7A_CTL_SLEN                         31u

/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT7A_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04
#define ADI_SPORT7A_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04

/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT7A_CTL_ICLK                         0u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */
#define ADI_SPORT7A_CTL_CKRE                         0u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT7A_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
//#define ADI_SPORT7A_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */
#define ADI_SPORT7A_CTL_IFS                          0u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */
#define ADI_SPORT7A_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync.
* When the half SPORT is in I2S / packed / left-justified mode,
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */
#define ADI_SPORT7A_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2,
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */
#define ADI_SPORT7A_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */
#define ADI_SPORT7A_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT7A_CTL_OPMODE						 0u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT7A_CTL_SPTRAN                       1u


/*! Specifies the SPORT7A_Control register Configuration*/
#define ADI_SPORT_7A_CTL   ((ADI_SPORT7A_CTL_DTYPE<<BITP_SPORT_CTL_A_DTYPE)|(ADI_SPORT7A_CTL_LSBF<<BITP_SPORT_CTL_A_LSBF)|(ADI_SPORT7A_CTL_SLEN<<BITP_SPORT_CTL_A_SLEN)|(ADI_SPORT7A_CTL_PACK<<BITP_SPORT_CTL_A_PACK)|(ADI_SPORT7A_CTL_ICLK<<BITP_SPORT_CTL_A_ICLK)|(ADI_SPORT7A_CTL_OPMODE<<BITP_SPORT_CTL_A_OPMODE)|(ADI_SPORT7A_CTL_CKRE<<BITP_SPORT_CTL_A_CKRE)/*|(ADI_SPORT7A_CTL_FSR<<BITP_SPORT_CTL_A_FSR)*/|(ADI_SPORT7A_CTL_IFS<<BITP_SPORT_CTL_A_IFS)|(ADI_SPORT7A_CTL_DIFS<<BITP_SPORT_CTL_A_DIFS)|(ADI_SPORT7A_CTL_LFS<<BITP_SPORT_CTL_A_LFS)|(ADI_SPORT7A_CTL_LAFS<<BITP_SPORT_CTL_A_LAFS)|(ADI_SPORT7A_CTL_RJUST<<BITP_SPORT_CTL_A_RJUST)|(ADI_SPORT7A_CTL_FSED<<BITP_SPORT_CTL_A_FSED)|(ADI_SPORT7A_CTL_GCLKEN<<BITP_SPORT_CTL_A_GCLKEN)|(ADI_SPORT7A_CTL_SPTRAN<<BITP_SPORT_CTL_A_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock.
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT7A_DIV_CLKDIV                       1u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse.
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT7A_DIV_FSDIV                        511u

/*! Specifies the SPORT7A_Divisor register Configuration*/
#define ADI_SPORT_7A_DIV  ((ADI_SPORT7A_DIV_CLKDIV<<BITP_SPORT_DIV_A_CLKDIV)|(ADI_SPORT7A_DIV_FSDIV<<BITP_SPORT_DIV_A_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT7A_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */
#define ADI_SPORT7A_MCTL_WSIZE 						15u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT7A_MCTL_MFD						1u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT7A_MCTL_MCPDE 						1u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT7A_MCTL_MCE 						1u

/*! Specifies the SPORT7A_Multichannel Control register Configuration*/
#define ADI_SPORT_7A_MCTL  ((ADI_SPORT7A_MCTL_MCE<<BITP_SPORT_MCTL_A_MCE)|(ADI_SPORT7A_MCTL_MCPDE<<BITP_SPORT_MCTL_A_MCPDE)|(ADI_SPORT7A_MCTL_MFD<<BITP_SPORT_MCTL_A_MFD)|(ADI_SPORT7A_MCTL_WSIZE<<BITP_SPORT_MCTL_A_WSIZE)|(ADI_SPORT7A_MCTL_WOFFSET<<BITP_SPORT_MCTL_A_WOFFSET))

/*! Specifies the SPORT7A_Multichannel Control register Configuration*/
#define ADI_SPORT_7A_CS0								0xffff
#define ADI_SPORT_7A_CS1								0x00
#define ADI_SPORT_7A_CS2								0x00
#define ADI_SPORT_7A_CS3								0x00


/*!SPORT7B Instance*/
/*!Select SPORT7B Instance */
#define ADI_SPORT7B_INSTANCE                     0u

/*! Selects the Data Type Formatting for Half-Sport's Data transfer. */
#define ADI_SPORT7B_CTL_DTYPE                        0u
/*! Selects whether the Half-SPORT transmits or receives data LSB first or MSB first. */
#define ADI_SPORT7B_CTL_LSBF                         0u
/*! Enables the half SPORT to perform 16- to 32-bit packing on received data
* and to perform 32- to 16-bit unpacking on transmitted data. */
#define ADI_SPORT7B_CTL_PACK                         0u
/*! Enables the Half-SPORT (if SPORT_CTL.OPMODE =1) to transfer data in right-justified operation mode. */
#define ADI_SPORT7B_CTL_RJUST                        0u
/*! Selects word length in bits for the Half-SPORT's data transfers. */
#define ADI_SPORT7B_CTL_SLEN                         31u

/*! DMA MSIZE and PSIZE will be selected/generated on the the basis of word lenght(slen).
 * 	The MSIZE and PSIZE is selected as follows:
 *     	for (wordlength <= 7 bits)    -----> MSIZE = 1 Byte , PSIZE = 1 Byte.
 *  	for (wordlength <= 15 bits)   -----> MSIZE = 2 Bytes , PSIZE = 2 Bytes.
 *  	for (wordlength <= 15 bits) and (DMA packing is enebled) -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 *  	for (wordlength <= 31 bits)   -----> MSIZE = 4 Bytes , PSIZE = 4 Bytes.
 * */
#define ADI_SPORT7B_DMA_MSIZE  				 		ENUM_DMA_CFG_MSIZE04 /*!<  bytes transfer  */
#define ADI_SPORT7B_DMA_PSIZE  				 		ENUM_DMA_CFG_PSIZE04 /*!<  bytes transfer  */

/*! Selects whether the Half-SPORT uses an internal or external clock. */
#define ADI_SPORT7B_CTL_ICLK                         0u
/*! Selects the rising or falling edge of the SPORT_CLK for the Half-SPORT to sample received data and frame sync. */
#define ADI_SPORT7B_CTL_CKRE                         0u
/*! Enables gated clock operation for the Half-SPORT */
#define ADI_SPORT7B_CTL_GCLKEN                       0u
/*! Selects whether or not the Half-SPORT requires frame sync for data transfer. */
#define ADI_SPORT7B_CTL_FSR                          0u
/*! Selects whether the Half-SPORT uses an internal frame sync or uses an external frame sync. */
#define ADI_SPORT7B_CTL_IFS                          0u
/*! Selects whether the Half-SPORT uses a data-independent or data-dependent frame sync. */
#define ADI_SPORT7B_CTL_DIFS                         0u
/*! When the Half-SPORT is in DSP standard mode and multichannel mode,
* the LFS bit selects whether the Half SPORT uses active low or active high frame sync.
* When the half SPORT is in I2S / packed / left-justified mode,
* the LFS bit acts as L_FIRST, selecting whether the half SPORT transfers data first for the left or right channel. */
#define ADI_SPORT7B_CTL_LFS                          0u
/*! When the Half-SPORT is in DSP standard mode  or in right-justified mode,
* the LAFS bit selects whether the half SPORT generates a late frame sync or generates an early frame sync signal.
* When the Half-SPORT is in I2S / left-justified mode, the LAFS bit acts as OPMODE2,
* selecting whether the Half-SPORT is in left-justified mode or I2S mode.
* When the Half-SPORT is in multichannel mode, the LAFS bit is reserved. */
#define ADI_SPORT7B_CTL_LAFS                         0u
/*! Enables the Half-SPORT to start transmitting or receiving after detecting an active edge of an external frame sync */
#define ADI_SPORT7B_CTL_FSED                         0u
/*! Selects whether the half SPORT operates in DSP standard/multichannel mode or operates in I2S/packed/left-justified mode */
#define ADI_SPORT7B_CTL_OPMODE						 0u
/*! Selects the transfer direction (receive or transmit)for the half SPORT's primary and secondary channels */
#define ADI_SPORT7B_CTL_SPTRAN                       0u

/*! Specifies the SPORT_7B_Control register Configuration*/
#define ADI_SPORT_7B_CTL   ((ADI_SPORT7B_CTL_DTYPE<<BITP_SPORT_CTL_B_DTYPE)|(ADI_SPORT7B_CTL_LSBF<<BITP_SPORT_CTL_B_LSBF)|(ADI_SPORT7B_CTL_SLEN<<BITP_SPORT_CTL_B_SLEN)|(ADI_SPORT7B_CTL_PACK<<BITP_SPORT_CTL_B_PACK)|(ADI_SPORT7B_CTL_ICLK<<BITP_SPORT_CTL_B_ICLK)|(ADI_SPORT7B_CTL_OPMODE<<BITP_SPORT_CTL_B_OPMODE)|(ADI_SPORT7B_CTL_CKRE<<BITP_SPORT_CTL_B_CKRE)/*|(ADI_SPORT7B_CTL_FSR<<BITP_SPORT_CTL_B_FSR)*/|(ADI_SPORT7B_CTL_IFS<<BITP_SPORT_CTL_B_IFS)|(ADI_SPORT7B_CTL_DIFS<<BITP_SPORT_CTL_B_DIFS)|(ADI_SPORT7B_CTL_LFS<<BITP_SPORT_CTL_B_LFS)|(ADI_SPORT7B_CTL_LAFS<<BITP_SPORT_CTL_B_LAFS)|(ADI_SPORT7B_CTL_RJUST<<BITP_SPORT_CTL_B_RJUST)|(ADI_SPORT7B_CTL_FSED<<BITP_SPORT_CTL_B_FSED)|(ADI_SPORT7B_CTL_GCLKEN<<BITP_SPORT_CTL_B_GCLKEN)|(ADI_SPORT7B_CTL_SPTRAN<<BITP_SPORT_CTL_B_SPTRAN))


/*! Select the clock divisor that the Half-SPORT uses to calculate the sport clock from the processor system clock.
* CLKDIV = ( SCLK / SPORT_ACLK) - 1 */
#define ADI_SPORT7B_DIV_CLKDIV                       1u
/*! Select the number of transmit or receive clock cycles that the Half-SPORT counts before generating a frame sync pulse.
* FSDIV = (SPORT_ACLK / SPORT_AFS) - 1 */
#define ADI_SPORT7B_DIV_FSDIV                        511u

/*! Specifies the SPORT7B_Divisor register Configuration*/
#define ADI_SPORT_7B_DIV  ((ADI_SPORT7B_DIV_CLKDIV<<BITP_SPORT_DIV_B_CLKDIV)|(ADI_SPORT7B_DIV_FSDIV<<BITP_SPORT_DIV_B_FSDIV))


/*! Selects the start location for the Half-SPORT's active window of channels within the 1024-channel range. */
#define ADI_SPORT7B_MCTL_WOFFSET 					0u
/*! Selects the window size for the Half-SPORT's active window of channels.
* WSIZE = (number of channel slots) -1 */
#define ADI_SPORT7B_MCTL_WSIZE 						15u
/*! Selects the delay (in serial clock cycles) between the Half-SPORT's multichannel frame sync pulse and channel 0 */
#define ADI_SPORT7B_MCTL_MFD						1u
/*! Enables DMA data packing for transmit and enables DMA data unpacking for the Half-SPORT's multichannel data transfers. */
#define ADI_SPORT7B_MCTL_MCPDE 						1u
/*! Enables multichannel operations for the Half-SPORT. */
#define ADI_SPORT7B_MCTL_MCE 						1u

/*! Specifies the SPORT7B_Multichannel Control register Configuration*/
#define ADI_SPORT_7B_MCTL  ((ADI_SPORT7B_MCTL_MCE<<BITP_SPORT_MCTL_B_MCE)|(ADI_SPORT7B_MCTL_MCPDE<<BITP_SPORT_MCTL_B_MCPDE)|(ADI_SPORT7B_MCTL_MFD<<BITP_SPORT_MCTL_B_MFD)|(ADI_SPORT7B_MCTL_WSIZE<<BITP_SPORT_MCTL_B_WSIZE)|(ADI_SPORT7B_MCTL_WOFFSET<<BITP_SPORT_MCTL_B_WOFFSET))

/*! Specifies the SPORT7B_Multichannel Control register Configuration*/
#define ADI_SPORT_7B_CS0								0xffff
#define ADI_SPORT_7B_CS1								0x00
#define ADI_SPORT_7B_CS2								0x00
#define ADI_SPORT_7B_CS3								0x00











#endif

#endif /*__ADI_SPORT_CONGIF_H__*/
