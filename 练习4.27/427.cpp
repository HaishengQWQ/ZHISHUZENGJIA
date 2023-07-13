#include<stdio.h>
#define ADJUST 7.31//将ADJUST 定义为7.31
int main(void)
{
	const double SCALE = 0.333;//定义变量 并赋值0.333
	double shoe, foot;//定义两个变量

	printf("鞋码男足长度\n");//输出提示
	shoe = 3.0;///定义初始值
	while (shoe < 18.5)//循环当变量到18.5为止
	{
		foot = SCALE * shoe + ADJUST;//计算英寸尺码
		printf("%10.1f %15.2f 英寸\n", shoe, foot);//输出结果
		shoe = shoe + 1.0;
	}
	printf("如果鞋子合适，就穿上它.\n");//讲屁话
	return 0;
}