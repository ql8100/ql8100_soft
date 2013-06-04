#include "group.h"
void i2c_init(void)
{
		I2C->FREQR=0x0f;    //����Ƶ�ʼĴ���
		I2C->CCRH=0x00;     //����ʼ�ռĴ�����λ
		I2C->CCRL=0x50;     //����ʼ�ռĴ�����λ
		I2C->TRISER=0x11;   //�������SCL����ʱ��
		I2C->CR1|=0x01;     //ʹ��I2Cģ��
		I2C_Ack();         //����ƥ��Ӧ��
		I2C->CR2|=0x08;     //���ý���Ӧ��
}


void i2c_start(void)
{
	I2C_busy();
	I2C_start();
	while(I2C_SBask==0);
}
/*-------------���͵�ַ---------------*/
void i2c_sendDAdr(u8 Add)
{
	I2C_writebyte(Add);	
	while(I2C_addrask==0);
	I2C_busy();
}

/*----------------��������&��������------------------*/
void i2c_sendDat(u8 data)
{
	I2C_writebyte(data);
	I2C_busy();
	while(I2C_TxEask==0);
}

u8 i2c_rcvDat(void)
{
	u8 i;
	while(I2C_RxNeask==0);
    while(1)
    {
        if(I2C_BTF==0x04)
        {
            i=I2C->DR;
        }
        else 
        {
            continue ;
        }
        if(I2C_BTF==0)
        {
            break;
        }
        else
        {
            continue ;;
        }
    }
    return i;
/*	abc:
	if(I2C_BTF==0x04)
	{i=I2C_DR;}
	else goto abc;
	if(I2C_BTF==0){}
	else goto abc;*/
	
}
/*
u8 i2c_readAbit(u8 addr)
{
	u8 i;
	I2C_Start();
	I2C_SendDAdr(0x41);
	i=I2C_RcvDat();
	I2C_stop();
	return i;
}

void I2C_WriteAbit(u8 addr,u8 data)
{
	I2C_Start();
	I2C_SendDAdr(addr);
	I2C_SendDat(data);
	I2C_stop();
}*/
