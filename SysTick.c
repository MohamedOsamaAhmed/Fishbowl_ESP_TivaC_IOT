#include "TM4C123GH.h"
#include "SysTick.h"
/* Enable the SystTick Timer to run using the System Clock with Frequency 16Mhz and Count one second */
void SysTick_Init(void)
{
    SYSTICK_CTRL_REG    = 0;              /* Disable the SysTick Timer by Clear the ENABLE Bit */
    SYSTICK_RELOAD_REG  = 15999999;       /* Set the Reload value with 15999999 to count 1 Second */
    SYSTICK_CURRENT_REG = 0;              /* Clear the Current Register value */
    /* Configure the SysTick Control Register 
     * Enable the SysTick Timer (ENABLE = 1)
     * Disable SysTick Interrupt (INTEN = 0)
     * Choose the clock source to be System Clock (CLK_SRC = 1) */
    SYSTICK_CTRL_REG   |= 0x05;
}