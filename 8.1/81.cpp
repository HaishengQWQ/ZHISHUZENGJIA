#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int k = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int z = 0;//左下标
	int y = sz - 1;//右下标
	while (z <=y) 
	{
		int zj = (z + y) / 2;//中间元素下标
			if (arr[zj] > k)
		{
				y = zj - 1;
		}
			else if (arr[zj]<k)
			{
				z = zj + 1;
			}
			else
			{
				printf("找到了，下标是：%d/n", zj);
				break;
			}
	}
	if (z > y)
	{
		printf("找不到/n");
	}
	return 0;
}