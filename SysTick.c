#include <stdint.h>
#include "SysTick.h"
#include "SysTick_Cfg.h"
#include "M4MemMap.h"

static uint8_t Flag = 0;


void SysTick_Init(void)
{
    /* Enabling or disabling the use of interrupts */
    STCTRL_REG |= INTERRUPT_CONTROL << 1;
    /* Using the system clock source or the internal oscillator */
    STCTRL_REG |= CLOCK_SOURCE << 2;
}

void SysTick_Delay(uint16_t TimeMS)
{
    if(Flag == 0)
    {
        /* Initializing the start value of the timer */
        /* 4 MHz for Internal Oscillator and 16 MHz for System Clock */
        STRELOAD_REG = ((TimeMS - 1) * (4000 + (12000 * CLOCK_SOURCE)));
        /* Enabling the timer to start counting down */
        STCTRL_REG |= 0x01;
        Flag = 1;
    }
    else
    {
    }
    /* Checking the COUNT flag whether it underflows or no */
    if((STCTRL_REG & 0x010000) != 0)
    {
        SysTick_Callback();
    }
    else
    {
    }
}
