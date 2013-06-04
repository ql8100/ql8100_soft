#ifndef __USE_I2C_H_
#define __USE_I2C_H_

#define I2C_busy() while((I2C->SR3&0x02)==1);
#define I2C_start() I2C->CR2|=0x01;
#define I2C_stop() I2C->CR2|=0x02;

#define I2C_Ack() I2C->CR2|=0x04;
#define I2C_NAck() I2C->CR2&=(~0x04);

#define I2C_addrask (I2C->SR1&0x02)
#define I2C_SBask (I2C->SR1&0x01)
#define I2C_TxEask (I2C->SR1&0x80)
#define I2C_RxNeask (I2C->SR1&0x40)
#define I2C_BTF (I2C->SR1&0x04)

#define I2C_BERR_ERR (I2C->SR2&0x01)
#define I2C_AF_ERR (I2C->SR2&0x04)

#define I2C_writebyte(x) I2C->DR=x;

void i2c_init(void);
void i2c_start(void);
void i2c_sendDAdr(u8 Add);
void i2c_sendDat(u8 data);
u8 i2c_rcvDat(void);
void i2c_writeAbit(u8 addr,u8 data);
u8 i2c_readAbit(u8 addr);

#endif

