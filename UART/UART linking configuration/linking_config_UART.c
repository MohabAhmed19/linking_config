/*
 * UART.c
 *
 * Created: 8/23/2023 6:06:15 PM
 *  Author: mohab
 */

 
/* including the linking_config_UART.h file */
#include "linking_config_UART.h"

/* creating an instance of the UART configuration 	*/
/* 1-Asynchronous mode 								*/
/* 2-disabling multiprocessor mode 					*/
/* 3-doubling frequency speed is not enabled 		*/
/* 4-data size =8bits 								*/
/* 5-no parity										*/
/* 6-stop bit = one bit								*/
/* 7-baudrate=9600									*/
/* 8-transmit interrupt is disabled					*/
/* 9-recieve interrupt is disabled					*/
/* 10-data register empty interrupt is disabled		*/
UART_CONFG UART1={
	Asynchronous,
	disable_multiprocessor,
	not_doubled,
	eight,
	no_parity,
	single_bit,
	BaudRate_9600,
	disable_transmit_int,
	disable_recieve_int,
	disable_DRE_int;
};