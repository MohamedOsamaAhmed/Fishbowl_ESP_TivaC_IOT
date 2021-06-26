#include "Platform_Types.h"
#include "TM4C123GH.h"
#include "GPIO.h"

#define DCMotor_Pin  1
#define Heater_Pin   2

void Clock_Enable(void)
{
    SYSCTL -> RCGC2 |= 0x00000010;              /* Enable clock for PORTE and allow time for clock to start*/  
    SYSCTL -> RCGCADC  |= 1;                    /* enable clock to ADC0 */
    SYSCTL->RCGCUART |= 0x20;                   /* enable clock to UART5 */
    Delay_ms(1);                               /* to waste 3 clock cycles till clock will be ready to work */
}

void DCMotor_Init(void)
{

    GPIOE -> AMSEL &= ~(1<<DCMotor_Pin);        /* Disable Analog on PE1 */
    GPIOE -> PCTL  &= 0xFFFFFF0F;               /* Clear PMCx bits for PE1 to use it as GPIO pin */
    GPIOE -> DIR   |= (1<<DCMotor_Pin);         /* Configure PE1 as output pin */
    GPIOE -> AFSEL &= ~(1<<DCMotor_Pin);        /* Disable alternative function on PE1 */
    GPIOE -> DEN   |= (1<<DCMotor_Pin);         /* Enable Digital I/O on PE1 */
    GPIOE -> DATA  &= ~(1<<DCMotor_Pin);        /* Clear bit 1 in Data regsiter to turn off Motor */
}
void DCMotor_Turn_On(void)
{
    GPIOE -> DATA  |= (1<<DCMotor_Pin);         /* Set bit 1 in Data regsiter to turn on Motor */
}
void DCMotor_Turn_Off(void)
{
    GPIOE -> DATA  &= ~(1<<DCMotor_Pin);        /* Clear bit 1 in Data regsiter to turn off Motor */
}
/* Enable PE0 (Motor Pin) */
void Heater_Init(void)
{  
    
    GPIOE -> AMSEL &= ~(1<<Heater_Pin);         /* Disable Analog on PE2 */
    GPIOE -> PCTL  &= 0xFFFFF0FF;               /* Clear PMCx bits for PE2 to use it as GPIO pin */
    GPIOE -> DIR   |= (1<<Heater_Pin);          /* Configure PE2 as output pin */
    GPIOE -> AFSEL &= ~(1<<Heater_Pin);         /* Disable alternative function on PE2 */
    GPIOE -> DEN   |= (1<<Heater_Pin);          /* Enable Digital I/O on PE2 */
    GPIOE -> DATA  &= ~(1<<Heater_Pin);         /* Clear bit 2 in Data regsiter to turn off Motor */
}

void Heater_Turn_On(void)
{
    GPIOE -> DATA  |= (1<<Heater_Pin);          /* Set bit 2 in Data regsiter to turn on Heater */
}
void Heater_Turn_Off(void)
{
    GPIOE -> DATA  &= ~(1<<Heater_Pin);         /* Clear bit 2 in Data regsiter to turn off Heater */
}

void TempSensor_Init(void)
{

 
    /* initialize PE3 for AIN0 input */
    GPIOE -> AFSEL |= 8;                /* enable alternate function */
    GPIOE -> DEN   &= ~8;               /* disable digital function */
    GPIOE -> AMSEL |= 8;                /* enable analog function */
 
    /* initialize ADC0 */
    ADC0 -> ACTSS   &= ~8;              /* disable SS3 during configuration */
    ADC0 -> EMUX    &= ~0xF000;         /* software trigger conversion */
    ADC0 -> SSMUX3  = 0;                /* get input from channel 0 */
    ADC0 -> SSCTL3  |= 6;               /* take one sample at a time, set flag at 1st sample */
    ADC0 -> ACTSS   |= 8;               /* enable ADC0 sequencer 3 */
 
}


void Delay_ms(int time_ms)
{
    uint32 i, j;
    for(i = 0 ; i < time_ms; i++)
        for(j = 0; j < 3180; j++)
            {}  /* excute NOP for 1ms */
}