#include "LED.h"//引入LED头文件
#include "KEY.h"//引入KEY独立按键头文件

void main()
{
	unsigned char KEY_num = 0;//定义一个变量确定KEY按下的次数，按下KEY1就让这个数加1，按下KEY2就让这个数减1
	P2 = 0XFE;//让LED灯组默认上电LED1亮
	while(1)
	{
		if(KEY1 == 0)//先判断按键1是否按下
		{
			Delay_ms(15);//延时15ms消除抖动
			while(KEY1 == 0);//如果KEY1一直被按下就,一直循环,知道松开不再循环
			Delay_ms(15);//延时15ms消除抖动
			if(KEY_num >= 7)
			{
				KEY_num = -1;//当KEY_num >= 7的时候把KEY_num赋值成-1,然后下面先让KEY_num加1变成0,1<<0位就是0000 0001,取反也就是1111 1110
			}
			P2 = ~(1 << (++KEY_num));//让1左移KEY_num加1 位,然后取反赋值给P2.举例:1 << 2 (0000 0100)。取反（1111 10111）
		}
		if(KEY2 == 0)//先判断按键2是否按下
		{
			Delay_ms(15);//延时15ms消除抖动
			while(KEY2 == 0);//如果KEY2一直被按下就,一直循环,知道松开不再循环
			Delay_ms(15);//延时15ms消除抖动
			if(KEY_num <= 0)
			{
				KEY_num = 8;//当KEY_num <= 0的时候把KEY_num赋值成7,然后下面先让KEY_num减1变成7,1<<7位就是1000 0000,取反也就是0111 1111
			}
			P2 = ~(1 << (--KEY_num));//让1左移KEY_num减1 位,然后取反赋值给P2.举例:1 << 2 (0000 0100)。取反（1111 10111）
		}
		
	}
}