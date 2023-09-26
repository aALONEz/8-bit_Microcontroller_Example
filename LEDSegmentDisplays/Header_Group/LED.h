#include <STC89C5xRC.H>//引入寄存器头文件
#include "Delay.h"//引入延时函数头文件
#ifndef _LED_H_
#define _LED_H_


//LED对应IO口
#define LED1 P20
#define LED2 P21
#define LED3 P22
#define LED4 P23
#define LED5 P24
#define LED6 P25
#define LED7 P26
#define LED8 P27

//灯状态	0表示亮		1表示灭
#define ON 0
#define OFF 1


//LED跑马灯
void LED_flowing_water(const unsigned int xms);

#endif