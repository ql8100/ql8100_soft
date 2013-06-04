#ifndef __GROUP_H
#define __GROUP_H

typedef signed char     S8;
typedef unsigned char   U8;
typedef int             S16;
typedef unsigned int    U16;
typedef long            S32;
typedef unsigned long   U32;
//typedef long long       S64;
//typedef unsigned long long U64;
typedef unsigned char   BIT;
typedef unsigned int    BOOL;

//定义值为真的值
//#ifndef TRUE
// #define TRUE         1
//#endif

//定义值为假的值
//#ifndef     FALSE
// #define FALSE        0
//#endif

#ifndef       ON
    #define ON          1
#endif

#ifndef       OFF
    #define OFF         0
#endif

#ifndef       HIGH
    #define HIGH          1
#endif

#ifndef       LOW
    #define LOW         0
#endif

#include "stm8s.h"

#include "hardware_port.h"
#include "public.h"
#include "use_gpio.h"
#include "use_uart.h"
#include "use_i2c.h"
#include "ts12_touch.h"



#endif