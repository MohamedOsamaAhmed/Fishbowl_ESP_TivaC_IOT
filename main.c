#include "Platform_Types.h"
#include "TM4C123GH.h"
#include "UART.h"
#include "GPIO.h"
#include "TempSensor.h"
#include "SysTick.h"
#include "config.h"

/* Function to initialize all needed peripherals*/
void Init(void)
{
	Clock_Enable();
	DCMotor_Init();
	Heater_Init();
	UART5_Init();
	TempSensor_Init();
	SysTick_Init();
}
int main(void)
{

	Init();

	uint8 data;			   /* To store data comming from ESP in it*/
	uint8 min_temp = 10;   /* to store min temperature in it*/
	uint8 max_temp = 35;   /* to store max temperature in it*/
	uint8 temperature = 0; /* to store current temperature in it*/
	uint8 is_temp_init = 0;
	while (1)
	{
		while (UART5_Receive(&data))
		{
			switch (data)
			{
			case ID_MIN_TEMP:
				/* store minimum temperature value*/
				UART5_Receive(&min_temp);
				break;
			case ID_MAX_TEMP:
				/* store minimum temperature value*/
				UART5_Receive(&max_temp);
				is_temp_init = 1;
				break;
			case ACK_FALSE:
				continue;
			default:
				break;
			}

			/* this is periodic every 1 second */
			if (SYSTICK_FLAG && is_temp_init == 1)
			{
				/* Get temperature from the sensor */
				temperature = TempSensor_GetTemperature();
				UART5_Transmit(ID_CURRENT_TEMP); /* Request to sned current temperature value */
				UART5_Transmit(temperature);	 /* Send Current temperature to the website*/

				if (temperature >= min_temp && temperature <= max_temp)
				{
					Heater_Turn_On();  /* Turn on heater on the breadboard*/
					DCMotor_Turn_On(); /* Turn on DCMotor on the breadboard*/

					/* Send Thier Status to the website */
					UART5_Transmit(ID_MOTOR);  /* Request to sned current DCMotor status */
					UART5_Transmit(STATUS_ON); /* sned current DCMotor status */
					Delay_ms(1);

					UART5_Transmit(ID_COIL);   /* Request to sned current Heater status */
					UART5_Transmit(STATUS_ON); /* sned current Heater status */
					Delay_ms(1);

					UART5_Transmit(ID_SENSOR); /* Request to sned current temperature sensor status */
					UART5_Transmit(STATUS_ON); /* sned current temperature sensor status */
					Delay_ms(1);			   /* wait till sending process is done  */


				}
				else if (temperature < min_temp || temperature > max_temp)
				{

					Heater_Turn_Off();			/* Turn off heater on the breadboard*/
					DCMotor_Turn_Off();			/* Turn off DCMotor on the breadboard*/
												/* Send Thier Status to the website */
					UART5_Transmit(ID_MOTOR);	/* Request to sned current DCMotor status */
					UART5_Transmit(STATUS_OFF); /* sned current DCMotor status */
					Delay_ms(1);

					UART5_Transmit(ID_COIL);	/* Request to sned current Heater status */
					UART5_Transmit(STATUS_OFF); /* sned current Heater status */
					Delay_ms(1);

					UART5_Transmit(ID_SENSOR); /* Request to sned current temperature sensor status */
					UART5_Transmit(STATUS_ON); /* sned current temperature sensor status */
					Delay_ms(1);			   /* wait till sending process is done  */

				}
			}
		}
	}
}
