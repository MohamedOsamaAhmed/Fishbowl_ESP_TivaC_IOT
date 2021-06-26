#ifndef _GPIO_H_
#define _GPIO_H_

void DCMotor_Init(void);
void DCMotor_Turn_On(void);
void DCMotor_Turn_Off(void);

void Heater_Init(void);
void Heater_Turn_On(void);
void Heater_Turn_Off(void);

void TempSensor_Init(void);

void Delay_ms(int time_ms);
void Clock_Enable(void);
#endif