


#ifndef interface_H_
#define interface_H_

#define F_CPU 8000000	/*defining CPU frequency*/

/* macros for UART mode*/
#define Synchronous_UART	0
#define Asynchronous_UART	1

/* macros for multiprocessor mode*/
#define enable_multiprocessor	0
#define disable_multiprocessor	1

/* macros for double speed mode*/
#define not_doubled_speed	0
#define doubled_speed		1

/* macros for data size*/
#define char_size_5		0
#define char_size_6		1
#define char_size_7		2
#define char_size_8		3
#define char_size_9		4

/* macros for parity mode*/
#define no_parity		0
#define even_parity		1
#define odd_parity		2

/* macros for number of stop bits*/
#define single_stop_bit		0
#define double_stop_bit		1

/* macros for baud rate*/
#define BaudRate_2400	0
#define BaudRate_4800	1
#define BaudRate_9600	2
#define BaudRate_14400	3

/* macros for transmit interrupt enabling*/
#define enable_transmit_int		0
#define disable_transmit_int	1

/* macros for recieve interrupt enabling*/
#define enable_recieve_int		0
#define disable_recieve_int		1	

/* macros fr data register empty enabling*/
#define enable_DRE_int		0
#define disable_DRE_int		1


#endif /* interface_H_ */