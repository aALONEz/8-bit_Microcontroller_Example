#include <STC89C5xRC.H>//引入头文件
#include "Delay.h"
#ifndef _LEDSD_H_
#define _LEDSD_H_



//指定数码管显示任意数字
//参数1:在哪个位置显示数码管(从左到右1-8)
//参数2:要显示的数字
void DigitalTubeDisplay_Digit(const unsigned char LEDx,Num);




#endif