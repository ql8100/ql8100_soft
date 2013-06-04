#ifndef __USE_UART_H
#define __USE_UART_H

#define UART_BUAD		115200

#define UART_BUFFER_SIZE  0x50           //UARTµÄbuffer
#define UART_BUFFER_TOP    &gucUartBuffer[0]
#define UART_BUFFER_EOF    &gucUartBuffer[UART_BUFFER_SIZE-1]

extern U8 gucUartBuffer[UART_BUFFER_SIZE];
extern U8 *gucUartBufferTail;

void uart_init(uint16_t uiBuad);
void uart_init_buff(void);
void uart_put_string(u32 ulLen, u8 *ucData);
void uart_isr(void);


#endif
