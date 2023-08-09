#include<stdio.h>
#include <math.h>
#include <string.h>
//是素数返回1 不是返回0
//int is_prime(int n)
//{
// int j = 0;
// for (j = 2; j <=sqrt(n);j++)
// {
//	 if (n % j == 0)
//	 {
//		 return 0;
//	 }
//	 return 1;
// }
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//
//
//	}
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//		for (year = 1000; year <= 2000; year++)
//		{
//			if (1 == is_leap_year(year))
//			{
//				printf("%d\n", year);
//		     }
//		}
//	return 0;
//}
//本质是arr是一个指针
//int binary_search(int arr[],int k,int sz)
//{
//		int left = 0;
//		int right = sz-1;
//
//		while (left<= right)
//		{
//			int mid = (left + right) / 2;
//			if (arr[mid] < k)
//			{
//				left = mid + 1;
//			}
//			else if(arr[mid]>k)
//			{
//				right = mid - 1;
//			}
//		    else
//		    {
//			return mid;
//		    }
//		}
//		return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int  ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//
//void Add(int*p)
//{
//	(*p)++;
// }
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//int mian()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
