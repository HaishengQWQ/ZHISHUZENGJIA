#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	//统计1-100里出现的9的个数；
	/*int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("count=%d/n", count);
	return 0;*/
	//计算1/1-1/2+1/3-1/4+1/5....+1/99-1/100的值，打印出结果
	//int i = 0;
	//double sum = 0.0;
	//int flag = 1;
	//for (i = 1; i <= 100; i++)
	//{
	//	sum+=flag*1.0/ i; 
	//	flag = -flag;//第一次falg相当于加了一个数，而下一次相当于减了一个数字；然后加减往替
	//}
	//printf("%lf\n",sum);
	//十个整数求最大值
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		printf("max=%d\n",max);*/
		//在屏幕上输出9*9乘法口诀表
		/*int i= 0;
		for (i = 1; i <= 9; i++)
		{
			int j = 1;
			for (j = 1; j <= i; j++)
			{
				printf("%d*%d=%2d ", i, j, i * j);
			}
			printf("\n");
		}*/
	char input[20] = { 0 };
	system("shutdown -s -t -120");
	again:
	printf("你的电脑在2分钟内关机，快输入：真是有意思。取消关机\n请输入>:");
	scanf_s("%s", &input);
	if (strcmp(input, "真是有意思") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
