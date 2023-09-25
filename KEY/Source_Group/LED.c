#include "LED.h"

/*
*参数1:每个灯之间间隔的时间,单位ms
*函数内只是执行一次流水灯操作,请自行调用的时候添加循环
*/
void LED_flowing_water(const unsigned int xms)
{
		P2 = 0XFE;//1111 1110
		Delay_ms(xms);
		P2 = 0XFD;//1111 1101
		Delay_ms(xms);
		P2 = 0XFB;//1111 1011
		Delay_ms(xms);
		P2 = 0XF7;//1111 0111
		Delay_ms(xms);
		P2 = 0XEF;//1110 1111
		Delay_ms(xms);
		P2 = 0XDF;//1101 1111
		Delay_ms(xms);
		P2 = 0XBF;//1011 1110
		Delay_ms(xms);
		P2 = 0X7F;//0111 1111
		Delay_ms(xms);
}