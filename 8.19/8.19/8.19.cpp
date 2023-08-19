// 8.19.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//int main()
//{
	/*int a;
	char b;
	bool c;
	string d;

	int *pa;
	char *pb;
	bool *pc;
	string *pd;

	a = 1;*/
	//cout << "变量a的地址是:" << &a << endl;
	//cout << "变量b的地址是:" << &b << endl;
	//cout << "变量c的地址是:" << &c << endl;
	//cout << "变量d的地址是:" << &d << endl;

	//cout << "变量a的地址是:" << pa << endl;
	//cout << "变量b的地址是:" << pb << endl;
	//cout << "变量c的地址是:" << pc << endl;
	//cout << "变量d的地址是:" << pd << endl;
	//int a = 3;
	//int* p = &a;
	//int* p1 = &a;

	//cout << "a=" << a << endl;
	//cout << "*p-" << *p << endl;
	//cout << "*p1" << *p1 << endl;

	//*p1= 8;
	//cout << "a=" << a << endl;
	//cout << "*p=" << *p << endl;
	//cout << "*p1=" << *p1 << endl;
	
//}
//void func(int* no, string* str)
//{
//	cout << "亲爱的" << *no << "号" << *str << endl;
//	*no = 8;
//	*str = "我有一只小小鸟。";
//}
//void func1(int s, int p,int i,int*max,int*min)
//{
//	*max = s > p ? s : p;
//	*min = s < p ? s : p;
//	*max = *max > i ? *max : i;
//	*min = *min < i ? *min : i;
//
//}
//int main()
//{
//	//int bh = 3;
//	//string message = "我是一只傻傻鸟。";
//	//func(&bh, &message);
//	//cout << "亲爱的" << bh << "号" << message<< endl;
//	int a = 2, b = 4, c = 3, m, n;
//	func1(a, b, c,&m,&n);
//	cout << "m=" << m << "n=" << n << endl;
//}
//int main()
//{
//	int a = 3, b = 8;
//	//const int* p = &a;
//	//a= 13;
//	//cout << "a=" << a << ",*p" << *p << endl;
//	//p = &b;
//	//cout << "a=" << a << ",p=" << *p << endl;
//	//int* const p = &a;
//	///*p = &a;*/
//	//const int* i = &b;
//	//i = &a;
//	//cout << a << endl << *p << endl;
//
//}
//void func(string varname, void* p)
//{
//	cout << varname << "的地址是:" << p << endl;
//}
//int main()
//{
//
//	int a;
//	char b;
//	cout << &a << endl;
//	cout << &b << endl;
//
//	func("a", &a);
//	func("b",& b);
//}
//int main()
//{
//	/*int* p= new int(5);
//
//	cout << "*p=" << *p << endl;
//	*p = 8;
//	cout << "*p=" << *p << endl;
//	delete p;
//	*/
//
//}
//void func(int**pp)
//{
//	*pp = new int(3);
//	cout << "pp=" << pp << ",*pp=" << *pp << endl;
//}
//int main()
//{
//	//int ii = 8; cout << "ii=" << ii << "ii的地址是:" << &ii<< endl;
//	//int* pii = &ii; cout << "pii=" << pii << "pii的地址是:" << &pii
//	//	<< "*pii=" << *pii << endl;
//	//int** ppii = &pii;
//	//cout << "ppii=" << ppii << "ppii的地址是:" << &ppii << "*ppii=" 
//	//	<< *ppii << endl;
//	//cout << "**ppii=" << **ppii << endl;
//
//	int* p=0;
//	func(&p);
//	//{
//	//	int** pp = &p;
//	//	*pp = new int(3);
//	//	cout << "pp=" << pp << ",*pp=" << *pp << endl;
//	//}
//	cout << "p=" << p << "*p=" << *p << endl;
//}
//void func(int no, string str)
//{
//	cout << "亲爱的" << no << "号" << str << endl;
//}
//
//int main()
//{
//	/*int* p = 0;*/
//
//	//cout << "p=" << p << "*p=" << *p << endl;
//	int bh = 3;
//	string message = "我是一只傻傻鸟。";
//
//	func(bh, message);
//
//	void(*pfunc)(int, string);
//	pfunc = func;
//	pfunc(bh,message);
//	(*pfunc)(bh, message);
//}
//void zs(int a)
//{
//	cout << "a=" << a << "我要先翻三个跟头再表白。\n";
//}
//void ls(int a)
//{
//	cout << "a=" << a << "hhhhhh\n";
//}
//void show(void(*pf)(int),int b)
//{
//	cout << "前面." << endl;
//	pf(b);
//	cout << "完成." << endl;
//}
//int main()
//{
//	show(zs,3);
//	show(ls,3);
//}
//int main()
//{
//	int bh[] = {3,6,1,4,6,8,2,6,8,3,7,4,1};
//	string name[3];
//
//	for (int ii = 0; ii < sizeof(bh) / sizeof(int); ii++)
//	{
//		cout << "bh[" << ii << "]" << bh[ii] << endl;
//	}
//
//	/*memset(bh, 0, sizeof(bh));*/
//	int bh1[sizeof(bh) / sizeof(int)];
//
//	memcpy(bh1, bh, sizeof(bh));
//
//	for (int ii = 0; ii < sizeof(bh) / sizeof(int); ii++)
//	{
//		cout << "bh1[" << ii << "]=" << bh1[ii] << endl;
//	}
//}
//int main()
//{
//	int a[5] = { 3,6,5,8,9 };
//
//	cout << "a[0]的之是:" << a[0] << endl;
//	cout << "a[1]的值是:" << a[1] << endl;
//	cout << "a[2]的值是:" << a[2] << endl;
//	cout << "a[3]的值是:" << a[3] << endl;
//	cout << "a[4]的值是:" << a[4] << endl;
//
//	int* p = a;
//	cout << "(*p+0)的值是:" << *(p + 0) << endl;
//	cout << "(*p+1)的值是:" << *(p + 1) << endl;
//	cout << "(*p+2)的值是:" << *(p + 2) << endl;
//	cout << "(*p+3)的值是:" << *(p + 3) << endl;
//	cout << "(*p+4)的值是:" << *(p + 4) << endl;
//}
