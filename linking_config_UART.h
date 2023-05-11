/*
 * UART.h
 *
 * Created: 5/10/2023 6:05:09 PM
 *  Author: mohab
 */ 


#ifndef UART_H_
#define UART_H_

/*********************************************************/
/* enum for Speed of the UART                            */
/*********************************************************/
typedef enum double_speed
{
	not_doubled, doubled
}double_speed;

/**********************************************************/
/* enum for character size of the transmitted data the UART*/
/**********************************************************/
typedef enum char_size
{
	five, six, seven, eight, nine
}Char_size;

/**********************************************************/
/* enum for parity mode of the UART                       */
/**********************************************************/
typedef enum parity_mode
{
	disabled, even, odd
}parity_mode;

/**********************************************************/
/* enum for stop bits number in the UART                  */
/**********************************************************/
typedef enum stop_bit
{
	single_bit, double_bit
}stop_bit;

/**********************************************************/
/* enum for baud rate of the UART                         */
/**********************************************************/
typedef enum baud_rate
{
	two_thousand, four_thousand, nine_thousand
}baud_rate;




#define UDR *((volatile uint8_t*)0x2C)

#define UCSRA *((volatile uint8_t*)0x2B)

#define UCSRB *((volatile uint8_t*)0x2A)

#define UCSRC *((volatile uint8_t*)0x40)

#define UBRRL *((volatile uint8_t*)0x29)

#define UBRRH *((volatile uint8_t*)0x40)


void UART_init(double_speed dbl, Char_size character, parity_mode parity, stop_bit stop, baud_rate baud);

void UART_recieve(void);

void UART_transmit(void);


#endif /* UART_H_ */