#ifndef SYSTICK_CFG_H_
#define SYSTICK_CFG_H_

#include "SysTick.h"

#define INTERRUPT_DISABLED      0
#define INTERRUPT_ENABLED       1
#define INTERRUPT_CONTROL       INTERRUPT_DISABLED

#define INTERNAL_OSCILLATOR     0
#define SYSTEM_CLOCK            1
#define CLOCK_SOURCE            SYSTEM_CLOCK


#endif /* SYSTICK_CFG_H_ */
