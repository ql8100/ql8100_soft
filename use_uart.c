#include "group.h"

U8 gucUartBuffer[UART_BUFFER_SIZE];
U8 *gucUartBufferTail;

void uart_init(uint16_t uiBuad)
{
    UART2_DeInit();
    UART2_Init((uint32_t)uiBuad,UART2_WORDLENGTH_8D,UART2_STOPBITS_1,UART2_PARITY_NO,\
							UART2_SYNCMODE_CLOCK_DISABLE,UART2_MODE_TXRX_ENABLE);
	UART2_ITConfig(UART2_IT_RXNE_OR,ENABLE);
}

void uart_init_buff(void)
{
    u8 i;
    for(i=0;i<UART_BUFFER_SIZE;i++)
    {
        gucUartBuffer[i]=0x00;
    }
}

void uart_put_string(u32 ulLen, u8 *ucData)
{
    while(ulLen)
    {
        UART2_SendData8(*ucData);
        ucData++;
        ulLen--;
    }
}

void uart_isr(void)
{
    if(UART2_GetITStatus(UART2_IT_RXNE)!=RESET)
    {
        UART2_ClearFlag(UART2_IT_RXNE);
        *gucUartBufferTail = UART2_ReceiveData8();
        gucUartBufferTail++;
        if((gucUartBufferTail) == (UART_BUFFER_EOF))
        {
            gucUartBufferTail = UART_BUFFER_TOP;
        }
    }
}
