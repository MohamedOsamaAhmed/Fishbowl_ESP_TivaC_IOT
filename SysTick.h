#ifndef _SYSTICK_H_
#define _SYSTICK_H_

#define SYSTICK_FLAG (SYSTICK_CTRL_REG & (1<<16))
void SysTick_Init(void);

#endif