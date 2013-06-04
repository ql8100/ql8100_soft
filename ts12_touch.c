#include "group.h"


//Ð´Èë¼Ä´æÆ÷
void touchWriteRegByte(u8 bRegIndex,u8 bData)
{
  i2c_start();
	i2c_sendDAdr(TS12_ADD_VDD|TS12_WRITE);
	i2c_sendDat(bRegIndex);
	i2c_sendDat(bData);
	I2C_stop();
}

//¶ÁÈ¡¼Ä´æÆ÷ 
u8 touchReadRegByte(u8 bRegIndex)
{
	u8 dat;
	i2c_start();
	i2c_sendDAdr(TS12_ADD_VDD|TS12_WRITE);
	i2c_sendDat(bRegIndex);
	i2c_start();
	I2C_NAck();
	i2c_sendDAdr(TS12_ADD_VDD|TS12_READ);
	dat=i2c_rcvDat();
	I2C_stop();
	I2C_Ack();
	return dat;;
}

void initTs12ic(void)
{
    u8 readTouch1,readTouch2,readTouch3;	
}

u16 readTouchTs12Ic(void)
{
    u8 readTouch1,readTouch2,readTouch3;
	u16 returnReadTouch;
	return returnReadTouch;
}
