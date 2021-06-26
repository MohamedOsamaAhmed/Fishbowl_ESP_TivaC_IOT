#include "Platform_Types.h"
#include "TempSensor.h"
#include "TM4C123GH.h"


uint8 TempSensor_GetTemperature(void)
{
    uint8  temperature;
    ADC0 -> PSSI |= 8;                  /* start a conversion sequence 3 */
    while((ADC0 -> RIS & 0x08) == 0)
        ;                               /* wait for conversion to complete */
    temperature = ((ADC0 -> SSFIFO3 * 330) / 4096);
    ADC0 -> ISC = 8;                    /* clear completion flag  */
    return  temperature;
    
}