/*****************************************************************************
 * University of Southern Denmark
 * Embedded Programming (EMP)
 * Fabian Petrus
 *
 * MODULENAME.: leds.h
 *
 * PROJECT....: fabse_bank
 *
 * DESCRIPTION: Analog input from EMP-board pot-meter
 *
 * Change Log.:
 ******************************************************************************
 * Date    Id    Change
 * DDMMYY
 * --------------------
 * 260424  MoH    Module created
 *
 *****************************************************************************/

#ifndef _LEDS_H
#define _LEDS_H

/***************************** Include files *******************************/

/*****************************    Defines    *******************************/

/*****************************   Constants   *******************************/

/*****************************   Variables   *******************************/

/*****************************   Functions   *******************************/

void init_leds();
/*****************************************************************************
 *   Input    : -
 *   Output   : -
 *   Function : Initialize RGB-LEDs
 ******************************************************************************/

void led_task(void *pvParameters);
/*****************************************************************************
 *   Input    : -
 *   Output   : -
 *   Function : Task for LEDS
 ******************************************************************************/

/****************************** End Of Module *******************************/

#endif
