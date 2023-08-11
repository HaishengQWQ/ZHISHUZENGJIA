#include<stdio.h>
#include<string.h>
//#include"add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	printf("HH\N");
//	main();
//		return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	//递归
//	print(num);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	/*int len = strlen(arr);
//	printf("%d\n", len);*/
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len= %d\n", len);
//	return 0;
//}
//int Facl(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i<= n; i++)
//	{
//		ret *=i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	    int n = 0;
//		int ret = 0;
//		scanf_s("%d", &n);
//		ret = Fib(n);
//		printf("%d\n", ret);
//		return 0;
//}
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	 
//	return 0;
//}
//递归问题
//汉诺塔问题
//青蛙跳台阶的问题
//n个台阶 1次可以跳一个台阶 也可以跳两个台阶 这只青蛙要跳到第n个台阶，有多少种跳法
//《剑指offer》
//67道笔试题
//int main()
//{
//	//创建一个数组 存放整型 10个
//	//int arr[10] = {1,2,3};//不完全初始化,剩下的元素默认初始化为0
//	//char arr2[5] = {'a','b'};
//	//char stt3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	printf("%d\n", strlen(arr4));
//	return 0;
//}
//1.strlen和sizeof没有什么关联
//2.strlen是求字符串长度的-只能针对字符串长度-库函数-使用得引头文件
//3.sizeof 计算变量 数组 类型的大小-单位是字节-操作符
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1);
//	printf("%d\n", sizeof(arr2);
//	printf("%d\n", strlen(arr1);
//	printf("%d\n", strlen(arr2);
//	return 0;
////}
//int main()
//{
//	//char arr[] = "abcdef";
//	///*printf("%c\n", arr[3]);*/
//	//int i = 0;
//	//for (i = 0; i < strlen(arr); i++)
//	//{
//	//	printf("%c", arr[i]);
//	//}
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i= 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]= %p\n", i,&arr[i]);
//	} 
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	char ch[5][6];
//
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]%p\n",i,j ,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序了
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//			if (flag == 1)
//			{
//				break;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}