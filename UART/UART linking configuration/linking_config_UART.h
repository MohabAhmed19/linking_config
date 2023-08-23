/*
 * UART.h
 *
 * Created: 8/23/2023 6:05:09 PM
 *  Author: mohab
 */ 


#ifndef linking_config_UART_H_
#define linking_config_UART_H_

 /*********************************************************/
 /* enum for Mode of the UART                            */
 /*********************************************************/
typedef enum
{
	Synchronous, Asynchronous
}en_UART_mode;

/**********************************************************/
/* enum for multi-processor communication mode of the UART     */
/**********************************************************/
typedef enum
{
	enable_multiprocessor, disable_multiprocessor
}en_multiprocessor;

/*********************************************************/
/* enum for Speed of the UART                            */
/*********************************************************/
typedef enum
{
	not_doubled, doubled
}en_double_speed;

/**********************************************************/
/* enum for character size of the transmitted data the UART*/
/**********************************************************/
typedef enum
{
	five, six, seven, eight, nine
}en_Char_size;

/**********************************************************/
/* enum for parity mode of the UART                       */
/**********************************************************/
typedef enum
{
	no_parity, even_parity, odd_parity
}en_parity_mode;

/**********************************************************/
/* enum for stop bits number in the UART                  */
/**********************************************************/
typedef enum
{
	single_bit, double_bit
}en_stop_bit;

/**********************************************************/
/* enum for baud rate of the UART                         */
/**********************************************************/
typedef enum
{
	BaudRate_2400, BaudRate_4800, BaudRate_9600, BaudRate_14400
}en_baud_rate;

/**********************************************************/
/* enum for transmit complete interrupt of the UART       */
/**********************************************************/
typedef enum
{
	enable_transmit_int, disable_transmit_int
}en_transmit_int;

/**********************************************************/
/* enum for recieve complete interrupt of the UART        */
/**********************************************************/
typedef enum
{
	enable_recieve_int, disable_recieve_int
}en_recieve_int;

/**********************************************************/
/* enum for data register empty interrupt of the UART     */
/**********************************************************/
typedef enum
{
	enable_DRE_int, disable_DRE_int
}en_DRE_int;

#define UDR *((volatile uint8_t*)0x2C)

#define UCSRA *((volatile uint8_t*)0x2B)

#define UCSRB *((volatile uint8_t*)0x2A)

#define UCSRC *((volatile uint8_t*)0x40)

#define UBRRL *((volatile uint8_t*)0x29)

#define UBRRH *((volatile uint8_t*)0x40)

typedef struct
{
	en_UART_mode		UART_mode;
	en_multiprocessor	multiprocessor_mode;
	en_double_speed		double_speed;
	en_Char_size		char_size;
	en_parity_mode		parity_mode;
	en_stop_bit			stop_bit;
	en_baud_rate		baud_rate;
	en_transmit_int		transmit_int;
	en_recieve_int		recieve_int;
	en_DRE_int			DRE_int;
}UART_CONFG;

void UART_init(UART_CONFG arg_UART);



#endif /* linking_config_UART_H_ */