#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("66666666666666666666666666666\n");
	printf("6666  1.玩   0.老子不玩  6666\n");
	printf("66666666666666666666666666666\n");
}
void game()
{
	//1.生成随机数
	int ret = 0;
	int guese = 0;//接收猜的数字
	//拿时间戳来设置随机数的生成起始点
	//time函数
	//time_t time(time_t*timer)
	//时间戳：当前计算器的时间-计算机的起始时间（1970.1.1.0:0:0）=(xxxx)秒
	ret=rand()%100+1;//生成1-100之间的随机数
	//printf("%d\n", ret);
	//2.猜数字
	while (1)
	{
		printf("快tm猜：>");
		scanf_s("%d", &guese);
		if (guese > ret)
		{
			printf("md大了！\n");
		}
		else if (guese < ret)
		{
			printf("没事小小的也很可爱~\n");
		}
		else
		{
			printf("byd还挺准\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("傻逼别乱搞\n");
			break;
		}
	} while(input);
}