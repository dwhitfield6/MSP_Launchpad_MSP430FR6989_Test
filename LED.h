/******************************************************************************/
/* Change log                                                                 *
 *
 *
 *
 * Date         Revision    Comments
 * MM/DD/YY
 * --------     ---------   ----------------------------------------------------
 * 10/04/15     3.0_DW0a    Initial project make.
 *                                                                            */
/******************************************************************************/

/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/
#ifndef LED_H
#define	LED_H

#include <msp430.h>

#include "USER.h"
#include "SYSTEM.h"

/******************************************************************************/
/* Defines                                                                    */
/******************************************************************************/

/******************************************************************************/
/* Macro Functions                                                            */
/******************************************************************************/

/******************************************************************************/
/* Function prototypes                                                        */
/******************************************************************************/
void LED_RedToggle(void);
void LED_GreenToggle(void);
unsigned char LED_Green(unsigned char state);
unsigned char LED_Red(unsigned char state);
void LED_DisplayShow(void);

#endif	/* LED_H */
