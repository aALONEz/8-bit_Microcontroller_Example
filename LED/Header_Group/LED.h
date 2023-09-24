#include <STC89C5xRC.H>//引入寄存器头文件
#include "Delay.h"//引入延时函数头文件
#ifndef _LED_H_
#define _LED_H_


//对应LED亮灭状态定义
	//亮
#define LED1_ON 0XFE	//1111 1110
#define LED2_ON 0XFD	//1111 1101
#define LED3_ON 0XFB	//1111 1011
#define LED4_ON 0XF7	//1111 0111
#define LED5_ON 0XEF	//1110 1111
#define LED6_ON 0XDF	//1101 1111
#define LED7_ON 0XBF	//1011 1111
#define LED8_ON 0X7F	//0111 1111
#define LED_ALL_ON 0	//0000 0000
	//灭
#define LED1_OFF 0X1	//0000 0001
#define LED2_OFF 0X2	//0000 0010
#define LED3_OFF 0X4	//0000 0100
#define LED4_OFF 0X8	//0000 1000
#define LED5_OFF 0X10	//0001 0000
#define LED6_OFF 0X20	//0010 0000
#define LED7_OFF 0X40	//0100 0000
#define LED8_OFF 0X80	//1000 0000
#define LED_ALL_OFF 0XFF	//1111 1111

//指定LED点亮或关闭
void LED_set_state(unsigned char state);

//LED跑马灯
void LED_flowing_water(const unsigned int xms);

#endif