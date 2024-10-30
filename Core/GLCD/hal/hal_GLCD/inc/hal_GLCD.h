/******************************************************************************
 * Module: GLCD
 *
 * File Name: hal_GLCD.h
 *
 * Description: Header file for the GLCD
 *
 * Author: Rahma Abdelhamid
 *
 * Created on: Nov 19, 2023
 *******************************************************************************/

#ifndef GLCD_HAL_HAL_GLCD_INC_HAL_GLCD_H_
#define GLCD_HAL_HAL_GLCD_INC_HAL_GLCD_H_


/*******************************************************************************
*                               includes                             *
*******************************************************************************/

#include "stdint.h"

/*******************************************************************************
*                                Definitions                                  *
*******************************************************************************/

#define SCREEN_WIDTH		128
#define SCREEN_HEIGHT	    64

/* Commands */
#define ST7565R_DISPLAY_ON                0b10101111
#define ST7565R_DISPLAY_OFF               0b10101110
#define ST7565R_PAGE_1_ADDRESS_SET        0b10110000
#define ST7565R_PAGE_2_ADDRESS_SET        0b10110001
#define ST7565R_COLUMN_ADDRESS_SET_LOWER  0x00
#define ST7565R_COLUMN_ADDRESS_SET_UPPER  0x10
#define ST7565R_DISPLAY_NORMAL            0b10100100
#define ST7565R_DISPLAY_ALL_ON            0b10100101
#define ST7565R_NORMAL                    0b10100000
#define ST7565R_REVERSE                   0b10100001
#define ST7565R_RESET                     0b11100010
#define ST7565R_SET_START_LINE            (1<<6)

#define DISPLAY_SET_Y                     0x40
#define DISPLAY_SET_X                     0xB8
#define DISPLAY_START_LINE                0xC0
#define DISPLAY_ON_CMD		              0x3E
#define ON	                              0x01
#define OFF             	              0x00
#define DISPLAY_STATUS_BUSY               0x80


/*******************************************************************************
 *                             Function Declaration                             *
 *******************************************************************************/

void HAL_GLCD_InitalizePorts(void);
void HAL_GLCD_Init(void);
void HAL_GLCD_writeData(uint8_t ui8dataToWrite);
void HAL_GLCD_writeCommand(uint8_t ui8commandToWrite);
void HAL_GLCD_ClearScreen(void);
void HAL_GLCD_ClearLine(void);
void HAL_GLCD_goTo(uint8_t ui8Xaxis, uint8_t ui8Yaxis);
void HAL_GLCD_writeChar(int8_t i8charToWrite);
void HAL_GLCD_writeString(uint8_t *pui8stringToWrite);
void HAL_GLCD_setYaddress(uint8_t ui8Yaxis);
void HAL_GLCD_setXaddress(uint8_t ui8Xaxis);
void HAL_GLCD_setColumnUpper(uint8_t ui8Addr);
void HAL_GLCD_setColumnLower(uint8_t ui8Addr);
void HAL_GLCD_setStartLine(uint8_t ui8Addr);
uint8_t* INT_To_String(uint32_t ui32value);
uint8_t HAL_GLCD_readByteFromROMMemory(int8_t * ptr);


#endif /* GLCD_HAL_HAL_GLCD_INC_HAL_GLCD_H_ */
