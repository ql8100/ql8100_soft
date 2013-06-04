#include "group.h"

void gpio_init(void)
{
//GPIO输出初始化
    GPIO_Init(LED_SDI_PORT ,(GPIO_Pin_TypeDef)LED_SDI_PIN, GPIO_MODE_OUT_PP_HIGH_FAST);      //LED芯片驱动数据信号
    GPIO_Init(LED_CLK_PORT ,(GPIO_Pin_TypeDef)LED_CLK_PIN, GPIO_MODE_OUT_PP_HIGH_FAST);      //LED芯片驱动时钟信号
    GPIO_Init(LED16_PORT   ,(GPIO_Pin_TypeDef)LED16_PIN,   GPIO_MODE_OUT_PP_HIGH_FAST);      //LED16端口输出。
    GPIO_Init(CTRL_LED_PORT,(GPIO_Pin_TypeDef)CTRL_LED_PIN,GPIO_MODE_OUT_PP_HIGH_FAST);     //LED电源控制IO
    GPIO_Init(LED17_PORT	 ,(GPIO_Pin_TypeDef)LED17_PIN,GPIO_MODE_OUT_PP_HIGH_FAST);           //LED17端口输出。
    GPIO_Init(MOTO1_PORT	 ,(GPIO_Pin_TypeDef)MOTO1_PIN,GPIO_MODE_OUT_PP_HIGH_FAST);
    GPIO_Init(MOTO2_PORT	 ,(GPIO_Pin_TypeDef)MOTO2_PIN,GPIO_MODE_OUT_PP_HIGH_FAST);
    GPIO_Init(CTRL_PWR_PORT,(GPIO_Pin_TypeDef)CTRL_PWR_PIN,GPIO_MODE_OUT_PP_HIGH_FAST);
    GPIO_Init(CTRL_TOUCH_PORT,(GPIO_Pin_TypeDef)CTRL_TOUCH_PIN,GPIO_MODE_OUT_PP_HIGH_FAST);
    GPIO_Init(CTRL_PWR_CARD_PORT,(GPIO_Pin_TypeDef)CTRL_PWR_CARD_PIN,GPIO_MODE_OUT_PP_HIGH_FAST);

//GPIO输入初始化
    GPIO_Init(KIN0_PORT,(GPIO_Pin_TypeDef)KIN0_PIN,GPIO_MODE_IN_FL_IT);
}

 

void ctrl_moto2(u8 HIGH_LOW)
{
    if(HIGH_LOW == HIGH)
    {
        GPIO_WriteHigh(MOTO2_PORT,(GPIO_Pin_TypeDef)MOTO2_PIN);
    }
    else
    {
        GPIO_WriteLow(MOTO2_PORT,(GPIO_Pin_TypeDef)MOTO2_PIN);
    }
}

void ctrl_moto1(u8 HIGH_LOW)
{
    if(HIGH_LOW==HIGH)
    {

        GPIO_WriteHigh(MOTO1_PORT,(GPIO_Pin_TypeDef)MOTO1_PIN);
    }
    else
    {
        GPIO_WriteLow(MOTO1_PORT,(GPIO_Pin_TypeDef)MOTO1_PIN);
    }
}

void ctrl_led16(u8 ON_OFF)
{
    if(ON_OFF==ON)
    {
        GPIO_WriteHigh(LED16_PORT,(GPIO_Pin_TypeDef)LED16_PIN);
    }
    else
    {
        GPIO_WriteLow(LED16_PORT,(GPIO_Pin_TypeDef)LED16_PIN);
    }
}

void ctrl_led17(u8 ON_OFF)
{
    if(ON_OFF==ON)
    {
        GPIO_WriteHigh(LED17_PORT,(GPIO_Pin_TypeDef)LED17_PIN);
    }
    else
    {
        GPIO_WriteLow(LED17_PORT,(GPIO_Pin_TypeDef)LED17_PIN);
    }
}

void ctrl_power(u8 ON_OFF)
{
    if(ON_OFF==ON)
    {
        GPIO_WriteHigh (CTRL_PWR_PORT,(GPIO_Pin_TypeDef)CTRL_PWR_PIN);
    }
    else
    {
        GPIO_WriteLow (CTRL_PWR_PORT,(GPIO_Pin_TypeDef)CTRL_PWR_PIN);
    }
}

void ctrl_touch_power(u8 ON_OFF)
{
    if(ON_OFF==ON)
    {
        GPIO_WriteHigh(CTRL_TOUCH_PORT,(GPIO_Pin_TypeDef)CTRL_TOUCH_PIN);
    }
    else
    {
        GPIO_WriteLow(CTRL_TOUCH_PORT,(GPIO_Pin_TypeDef)CTRL_TOUCH_PIN);
    }
}

void ctrl_card_power(u8 ON_OFF)
{
    if(ON_OFF==ON)
    {
        GPIO_WriteHigh(CTRL_PWR_CARD_PORT,(GPIO_Pin_TypeDef)CTRL_PWR_CARD_PIN);
    }
    else
    {
        GPIO_WriteLow(CTRL_PWR_CARD_PORT,(GPIO_Pin_TypeDef)CTRL_PWR_CARD_PIN);
    }
}

void ctrl_led_power(u8 ON_OFF)
{
    if(ON_OFF==ON)
    {
        GPIO_WriteHigh(CTRL_LED_PORT,(GPIO_Pin_TypeDef)CTRL_LED_PIN);
    }
    else
    {
        GPIO_WriteLow(CTRL_LED_PORT,(GPIO_Pin_TypeDef)CTRL_LED_PIN);
    }
}


