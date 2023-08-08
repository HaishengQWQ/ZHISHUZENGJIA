#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[20] = "bit";
//	char arr2[20] = "############";
//	strcpy_s(arr2, arr1);
//	printf("%s\n", arr2);
//	//strlen-string length-字符串求长度
//	//strlen-string copy-字符串拷贝
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*',5);
//	printf("%s\n", arr);
//	return 0;
//	//memset memrory->内存 set->设置
//}
//定义函数
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int  max =get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp=x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int*pa,int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int tmp = 0;*/
//	/*Swap1(a,b);*/
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//    int* pa = &a;
//	*pa = 20;
//	printf("%d\n",a);
//	return 0;
//}
