#include "LEDSD.h"//引入数码管头文件

void main()
{
	
	while(1)
	{
		//调用数码管显示函数
		DigitalTubeDisplay_Digit(1,1);
		DigitalTubeDisplay_Digit(2,2);
		DigitalTubeDisplay_Digit(3,3);
	}
}