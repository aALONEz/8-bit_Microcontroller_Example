#include "LEDSD.h"



void DigitalTubeDisplay_Digit(const unsigned char LEDx,Num)
{
	//定义一个数字显示16进制数组  下标对应数字0-9
	//举例:想要显示0,那就是ABCDEF,对应引脚输出高电平,其他引脚输出0,也就是0011 1111,这里B7引脚对应的是最高位,B0对应的是最低位。
	const unsigned char DigitalTubeNum[] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
	if(LEDx > 8 && Num > 9)
	{
		return;
	}
	switch(LEDx)
	{
		case 1:
		{
			//1 1 1 选择74HC138 Y7引脚使能
			P24 = 1;
			P23 = 1;
			P22 = 1;
			break;
		}
		case 2:
		{
			//1 1 0 选择74HC138 Y6引脚使能
			P24 = 1;
			P23 = 1;
			P22 = 0;
			break;
		}
		case 3:
		{
			//1 0 1 选择74HC138 Y5引脚使能
			P24 = 1;
			P23 = 0;
			P22 = 1;
			break;
		}
		case 4:
		{
			//1 0 0 选择74HC138 Y4引脚使能
			P24 = 1;
			P23 = 0;
			P22 = 0;
			break;
		}
		case 5:
		{
			//0 1 1 选择74HC138 Y3引脚使能
			P24 = 0;
			P23 = 1;
			P22 = 1;
			break;
		}
		case 6:
		{
			//0 1 0 选择74HC138 Y2引脚使能
			P24 = 0;
			P23 = 1;
			P22 = 0;
			break;
		}
		case 7:
		{
			//0 0 1 选择74HC138 Y1引脚使能
			P24 = 0;
			P23 = 0;
			P22 = 1;
			break;
		}
		case 8:
		{
			//0 0 0 选择74HC138 Y0引脚使能
			P24 = 0;
			P23 = 0;
			P22 = 0;
			break;
		}
	}
	P0 = DigitalTubeNum[Num];//74HC245引脚对应P0组IO口,所以这里直接给P0组IO口直接赋值要显示数字的对应下标
}