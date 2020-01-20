#ifndef SYSTICK_H_
#define SYSTICK_H_

#include <stdint.h>


void SysTick_Init(void);
void SysTick_Delay(uint16_t TimeMS);
void SysTick_Callback(void);

#endif /* SYSTICK_H_ */
