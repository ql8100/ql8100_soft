#include "group.h"

void hardware_init(void)
{
    gpio_init();        //��ʼ��GPIO
    uart_init(UART_BUAD);        //
    initTs12ic();       //��ʼ��touchоƬ

}

void software_init(void)
{
    uart_init_buff();
}

