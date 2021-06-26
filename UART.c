#include "TM4C123GH.h"
#include "UART.h"
#include "Platform_Types.h"

void UART5_Init(void)
{
    
    /* UART5 initialization */
    UART5->CTL = 0;         /* UART5 module disbable */
    UART5->IBRD = 104;      /* for 9600 baud rate, integer = 104 */
    UART5->FBRD = 11;       /* for 9600 baud rate, fractional = 11*/
    UART5->CC = 0;          /* select system clock */
    UART5->LCRH |= 0x60;     /* data lenght 8-bit, not parity bit, no FIFO */
    UART5->CTL |= 0x301;     /* Enable UART5 module, Rx and Tx */

    /* UART5 TX5 and RX5 use PE4 and PE5. Configure them digital and enable alternate function */
    GPIOE->DEN |= 0x30;      /* set PE4 and PE5 as digital */
    GPIOE->AFSEL |= 0x30;    /* Use PE4,PE5 alternate function */
    GPIOE->AMSEL |= 0;       /* Turn off analg function*/
    GPIOE->PCTL |= 0x00110000;     /* configure PE4 and PE5 for UART */
}



uint8 UART5_Receive(uint8* data)  
{
    
	while((UART5->FR & (1<<4)) != 0); /* wait until Rx buffer is not full */
    *data = (uint8) UART5 ->DR;  	/* before giving it another byte */
    return  TRUE; 
}

void UART5_Transmit(uint8 data)  
{
    while((UART5->FR & (1<<5)) != 0);    /* wait until Tx buffer not full */
    UART5 -> DR = data;                  /* before giving it another byte */
}


 


