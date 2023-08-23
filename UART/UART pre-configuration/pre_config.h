

#include "interface.h"

#ifndef pre_config_H_
#define pre_config_H_

/*********************************/
/* macro for UART mode			 */
/* options are: Synchronous_UART */
/*				Asynchronous_UART*/
/*********************************/
#define UART_mode Synchronous_UART

/**************************************/
/* macro for multiprocessor mode 	  */
/* options are: enable_multiprocessor */
/*				disable_multiprocessor*/
/**************************************/
#define multiprocessor_mode disable_multiprocessor

/*********************************/
/* macro for double speed mode 	 */
/* options are: not_doubled_speed*/
/*				doubled_speed	 */
/*********************************/
#define double_speed_mode not_doubled_speed

/***************************/
/* macros for data size    */
/* options are: char_size_5*/
/*				char_size_6*/
/*				char_size_7*/
/*				char_size_8*/
/*				char_size_9*/
/***************************/
#define char_size char_size_8

/***************************/
/* macro for parity mode   */
/* options are: no_parity  */
/*				even_parity*/
/*				odd_parity */
/***************************/
#define prity_mode no_parity

/********************************/
/* macro for number of stop bits*/
/* options are: single_stop_bit	*/
/*				double_stop_bit	*/
/********************************/
#define stop_bits single_stop_bit

/******************************/
/* macro for baud rate        */
/* options are: BaudRate_2400 */
/*				BaudRate_4800 */
/*				BaudRate_9600 */
/*				BaudRate_14400*/
/******************************/
#define baudrate BaudRate_9600

/****************************************/
/* macro for transmit interrupt enabling*/
/* options are: enable_transmit_int		*/
/*				disable_transmit_int	*/
/****************************************/
#define transmit_int_mode disable_transmit_int

/***************************************/
/* macro for recieve interrupt enabling*/
/* options are: enable_recieve_int	   */
/*				disable_recieve_int	   */
/***************************************/
#define recieve_int_mode disable_recieve_int

/***************************************/
/*macro fr data register empty enabling*/
/* options are: enable_DRE_int	  	   */
/*				disable_DRE_int	       */
/***************************************/
#define DRE_interrupt_mode disable_DRE_int


#endif /* pre_config_h_ */