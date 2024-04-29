/*****************************************************************************
 * University of Southern Denmark
 * Embedded Programming (EMP)
 * Fabian Petrus
 *
 * MODULENAME.: portf.h
 *
 * PROJECT....: Assignment8
 *
 * DESCRIPTION: Initializing portf
 *
 * Change Log.:
 ******************************************************************************
 * Date    Id    Change
 * DDMMYY
 * --------------------
 * 260424  MoH    Module created
 *
 *****************************************************************************/

#ifndef _PORTF_H_
#define _PORTF_H_

/***************************** Include files *******************************/

/*****************************    Defines    *******************************/

/*****************************   Constants   *******************************/

/*****************************   Variables   *******************************/

/*****************************   Functions   *******************************/

void enable_portf();
/*****************************************************************************
 *   Input    : -
 *   Output   : -
 *   Function : Enable GPIO on PORTF
 ******************************************************************************/

void init_sw1();
/*****************************************************************************
 *   Input    : -
 *   Output   : -
 *   Function : Initialize sw1 as output with pullup-resistor
 ******************************************************************************/

void init_leds();
/*****************************************************************************
 *   Input    : -
 *   Output   : -
 *   Function : Initialize RGB-LEDs
 ******************************************************************************/

/****************************** End Of Module *******************************/

#endif
