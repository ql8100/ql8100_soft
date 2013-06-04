#include "group.h"

void hardware_init(void)
{
    gpio_init();        //初始化GPIO
    uart_init(UART_BUAD);        //
    initTs12ic();       //初始化touch芯片

}

void software_init(void)
{
    uart_init_buff();
}

