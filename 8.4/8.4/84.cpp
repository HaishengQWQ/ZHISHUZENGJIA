#include <stdio.h>
#include <math.h>
int main()
{
	//求最大公约数；辗转相除法
	/*int m = 24;
	int n = 18;
	int r = 0;
	scanf_s("%d%d", &m, &n);
	while (m % n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("%d/n", n);
	return 0;*/
	//打印1000-2000的闰年
	/*int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year ++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) ||(year%400==0))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("count=%d", count);
	return 0;*/
	int i= 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
		}

	}
	return 0;
}