#ifndef     __PUBLIC_H
#define     __PUBLIC_H
/*
*密码相关说明： 
*              密码组成由一个32位的长整个型组成，每四个字节代表一位密码，最多共8位密码。
*/
/*
    1、模糊密码功能有以下问题，当不输入ID号时有可以任意输入的16位数字有概率碰到其它的密码。
*/
#define ID_RANGE        100;            //ID号的范围

extern unsigned long gucOnePassword;                    //一个密码所占用的空间
extern unsigned long gucAllPassword[ID_RANGE];           //预读出所有ID密码，这样可以更快的对比密码。


void software_init(void);
void hardware_init(void);
//void uart_init(uint16_t uiBuad);

#endif
