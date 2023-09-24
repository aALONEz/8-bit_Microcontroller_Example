#include "LED.h"

/*
*参数1:指定灯的指定状态
*/
void LED_set_state(unsigned char state)
{
	P2 = state;
}

/*
*参数1:每个灯之间间隔的时间,单位ms
*函数内只是执行一次流水灯操作,请自行调用的时候添加循环
*/
void LED_flowing_water(const unsigned int xms)
{
		P2 = LED1_ON;//1111 1110
		Delay_ms(xms);
		P2 = LED2_ON;//1111 1101
		Delay_ms(xms);
		P2 = LED3_ON;//1111 1011
		Delay_ms(xms);
		P2 = LED4_ON;//1111 0111
		Delay_ms(xms);
		P2 = LED5_ON;//1110 1111
		Delay_ms(xms);
		P2 = LED6_ON;//1101 1111
		Delay_ms(xms);
		P2 = LED7_ON;//1011 1110
		Delay_ms(xms);
		P2 = LED8_ON;//0111 1111
		Delay_ms(xms);
}