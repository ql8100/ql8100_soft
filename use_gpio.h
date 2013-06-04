#ifndef __USE_GPIO_H
#define __USE_GPIO_H

void gpio_init(void);
void ctrl_moto2(u8 HIGH_LOW);
void ctrl_moto1(u8 HIGH_LOW);
void ctrl_led16(u8 ON_OFF);
void ctrl_led17(u8 ON_OFF);
void ctrl_power(u8 ON_OFF);
void ctrl_touch_power(u8 ON_OFF);
void ctrl_card_power(u8 ON_OFF);

#endif
