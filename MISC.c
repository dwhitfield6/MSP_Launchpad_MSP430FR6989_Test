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
/* Contains Miscellaneous Functions
 *                                                                            */
/******************************************************************************/

/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/
#include <msp430.h>

#include "MISC.h"
#include "USER.h"
#include "SYSTEM.h"

/******************************************************************************/
/* Inline Functions                                                           */
/******************************************************************************/

/******************************************************************************/
/* Functions                                                                  */
/******************************************************************************/

/******************************************************************************/
/* MSC_DelayUS
 * Input the number in microseconds to be delayed.
 *
 * The function waists loops for the entered number of cycles.
 * The actual delay can be skewed when interrupts are enabled.
 *
 * Input: microseconds
 * Output: N/A
 * Action: waits the number of microseconds.
 *                                                                            */
/******************************************************************************/
void MSC_DelayUS(long US)
{
    long i;

    for(i=0; i<US; i++)
    {
        NOP();
    }
}

/*-----------------------------------------------------------------------------/
 End of File
/-----------------------------------------------------------------------------*/