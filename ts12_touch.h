#ifndef __TS12_TOUCH_H
#define __TS12_TOUCH_H

#define TS12_ADD_VDD       0xF0
//#define TS12_ADD_GND       0xD0

#define TS12_WRITE     0x01
#define TS12_READ      0x00

#define TS12_SEN1        0x02
#define TS12_SEN2        0x03
#define TS12_SEN3        0x04
#define TS12_SEN4        0x05
#define TS12_SEN5        0x06
#define TS12_SEN6        0x07

#define TS12_CTRL1       0x08
#define TS12_CTRL2       0x09

#define TS12_REF1        0x0A
#define TS12_REF2        0x0B

#define TS12_CH_HOLD1    0x0C
#define TS12_CH_HOLD2    0x0D
#define TS12_CAL_HOLD1   0x0E
#define TS12_CAL_HOLD2   0x0F

#define TS12_OUT1        0x10
#define TS12_OUT2        0x11
#define TS12_OUT3        0x12

void touchWriteRegByte(u8 bRegIndex,u8 bData);
u8 touchReadRegByte(u8 bRegIndex);
void initTs12ic(void);
u16 readTouchTs12Ic(void);

#endif
