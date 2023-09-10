#include <iostream>
#include <iomanip>
using namespace std;

//int main()
//{
//	int a[5] = { 3,6,5,8,9 };
//	for (int ii = 0; ii < 5; ii++)
//	{
//		cout << "a[" << ii << "]]的值是：" << a[ii] << endl;
//	}
//
//	cout << &a[2] << endl;
//	cout << (&a[2])[1] << endl;
//	cout << (&a[2])[2] << endl;
//	int* p = a;
//	for (int ii = 0; ii < 5; ii++)
//	{
//		cout << "*(p+" << ii << ")的值是:" << *(p + ii) << endl;
//		cout << "p[" << ii << "]的值是:" << p[ii] << endl;
//	}
//}
//	//char a[20];
//
//	//int* p = (int*)a;
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	p[i] = i + 300;
//	//}
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	cout << "*(p+" << i << ")的值是:" << *(p + i) << endl;
//	//}
//	/*int* arr=new int[8];
//
//	for (int i = 0; i < 8; i++)
//	{
//		arr[i] = 100 + i;
//		cout << "aa[" << i << "]" << *(arr + i) << endl;
//	}
//	delete[]arr;*/
//	//int* a = new(std::nothrow)int[1000000000001];
//
//	//if (a == nullptr)
//	//{
//	//	cout << "失败" << endl;
//	//}
//	//else
//	//{
//	//	a[100000000] = 8;
//	//		delete[]a;
//	//}
//}
//void func(int no, string srt)
//{
//	cout << "亲爱的" << no << "号;" << srt << endl;
//}
//int main()
//{
//	int bh = 3;
//	string message = "真是有意思";
//	func(bh, message);
//	void(*px)(int, string);
//	px = func;
//	px(bh, message);
//}
//int compasc(const void* p1, const void* p2)
//{
//	//if (*((int*)p1) < *((int*)p2))return -1;
//	//if (*((int*)p1) == *((int*)p2))return 0;
//	//if (*((int*)p1) > *((int*)p2))return 1;
//	return*((int*)p1) - *((int*)p2);
//}
//
//int main()
//{
//	int a[8] = { 4,2,7,5,8,6,1,3 };
//	qsort(a, sizeof(a) / sizeof(int),sizeof(int),compasc);
//	
//	for (int i = 0; i < 8; i++)
//	{
//		cout << "a[" << i << "]=" << a[i]<<endl;
//	}
//	
//}
//int search(int arr[], int len, int key)
//{
//	int low = 0, high = len - 1, mid;
//	while (low<=high)
//	{
//		mid=(low + high) / 2;
//		if (arr[mid = key])return mid;
//		else if (arr[mid] > key)high = mid - 1;
//		else low = mid + 1;
//	}
//	return -1;
//}
//int main()
//{
//	int a[10] = { 7,9,12,16,21,25,30,35,41,48 };
//
//	if (search(a, 10, 30) >= 0)cout << "在数组中查找30成功。\n";
//	else cout << "失败\n";
//}
//int main()
//{
//	char name[11];
//	/*strcpy(name, "hello");*/
//	strncpy(name, "hello", 8);
//	memset(name, 0, sizeof(name));
//	cout << "name=" << name << endl;
//}
//int main()
//{
//	int bh[2][3];
//	bh[0][0] = 11; bh[0][1] = 12; bh[0][2] = 13;
//	bh[1][0] = 21; bh[1][1] = 22; bh[1][2] = 23;
//	for (int i = 0; i <= 2; i++)
//	{
//		for (int j = 0; j <= 3; j++)
//		{
//			cout << "bh[" << i << "]" << "[" << j << "]" << bh[i][j] << endl;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int y = 0;
//	cin >> i;
//	cin >> y;
//	int u = i + y;
//	cout << u << endl;
//	return 0;
//}
//int main()
//{
//	cout << "Hello,World!" << endl;
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	cin >> a >> b >> c;
//	cout << setw(8) << a << " " << setw(8) << b << " " << setw(8) << c << endl;
//	return 0;
//}
//int main()
//{
//	string p;
//	cin >> p;
//	for (int i = 0;i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << p ;
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//    string i= "  *\n"
//          " ***\n"
//        "*****\n";
//    cout << i;
//}
//int main()
//{
//	int a = 8;
//	/*int b[a];*/
//
//}
//void func(int p[][3],int len)
//{
//	for (int i=0; i < len; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << "p[" << i << "][" << j << "]=" << p[i][j] << " " ;
//
//			
//	    }
//		cout << endl;
//    }
//}
//int main()
//{
//	//int a[10];
//	//cout << "数组a第0个元素的地址:" << a << endl;
//	//cout << "数组a的地址:" << &a << endl;
//
//	//cout << "数组a第0个元素的地址+1:" << a + 1 << endl;
//	//cout << "数组a的地址+1:" << &a + 1 << endl;
//	int bh[2][3] = { {11,12,13},{21,22,23} };
//	/*int(*p)[3] = bh;*/
//	func(bh,2);
//}
//void func(int(*p)[2][3])
//{
//	int u = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			for (int z = 0; z < 3; z++)
//			{
//				p[i][j][z] = u++;
//
//				cout << p[i][j][z] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl << endl;
//	}
//}
//int main()
//{
//	int bh[4][2][3] = { };
//	
//	memset(bh, 0, size(bh));
//	func(bh);
//	return 0;
//}
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main() {
//	char ch;
//	cin >> ch;
//	cout << "  " << ch << endl << " " << ch << ch << ch << endl << ch << ch << ch << ch << ch;
//}
//using namespace std;
//double x, a, y, b;
//int main() {
//	cin >> x >> a >> y >> b;
//	cout << fixed << setprecision(2) << (x * a - y * b) / (a - b) << endl;
//	return 0;
//}
//
//int main()
//{
//    long long a, b, c = 0;
//    scanf("%lld%lld", &a, &b);
//    c = a + b;
////    printf("%lld", c);
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    long long a, b, c = 0;
//    cin >> a >> d;
//    c = a + b;
//    cout << c << endl;
//    return 0;
//}
//int main()
//{
//	long long a, b, c;
//	cin >> a >> b >> c;
//	cout << (a + b) / c;
//	return 0;
//
//int main()
//{
//	double a,b;
//	cin >> a >> b;
//	cout << fixed << setprecision(9) << a / b;//fixed消除科学计数法，setprecision控制小数位数
//	return 0;
//}
//int main()
//{
//	double a, b;
//	cin >> a >> b;
//	cout << fixed << setprecision(3) << a / b << "%";
//	return 0;
//}
//int main()
//{
//	double F;
//	cin >> F;
//	cout << fixed << setprecision(5) << 5 * (F - 32) / 9;
//}
//int main()
//{
//	double r1, r2;
//	cin >> r1 >> r2;
//	cout << fixed << setprecision(2) << 1 / (1 / r1 + 1 / r2);
//}
//int main()
//{
//	double r,p1=3.14159;
//	cin>>r;
//	cout << fixed << setprecision(4) << 2 * r << r * p1* 2 << p1* (2 * r / 2) * (2 * r / 2);
//	return 0;
//}
//int main()
//{
//	double r, p1 = 3.14159, d, c, s;
//	cin >> r;
//	d = 2 * r;
//	c = p1 * r * 2;
//	s = p1 * r * r;
//	cout << fixed << setprecision(4) << d<<" " << c <<" " << s;
//	return 0;
//}
//int main()
//{
//	int x;
//	cin >> x;
//	cout << (bool)x;
//}
//int main()
//{
//	int a, b, c, d, e;
//	int cd = 0;
//	cin >> a >> b >> c >> d >> e;
//	cd += a - a / 3 * 3;
//	b += a / 3;
//	e += a / 3;
//	a /= 3;
//
//	cd += b - b/ 3 * 3;
//	a += b / 3;
//	c += b / 3;
//	b /= 3;
//
//	cd += c - c / 3 * 3;
//	b += c / 3;
//	d += c / 3;
//	c /= 3;
//
//	cd += d - d / 3 * 3;
//	c += d / 3;
//	e += d / 3;
//	d /= 3;
//
//	cd += e - e / 3 * 3;
//	d += e / 3;
//	a += e / 3;
//	e /= 3;
//
//	cout << a << " " << b << " " << c << " " << d << " " << e << " " <<endl;
//	cout << cd << endl;
//	return 0;
//}
//int main()
//{
//	float a;
//	cin >> a;
//	cout << fixed << setprecision(3) << a << endl;
//}
//int main()
//{
//	double a;
//	cin >> a;
//	cout << fixed << setprecision(12) << a << endl;
//}
//int main()
//{
//	char a;
//	int b;
//	float c;
//	double d;
//	cin >> a >> b >> c >> d;
//	cout << a << " " << b << " " << fixed << setprecision(6) << c << " " << d << endl;
//}
//int main()
//{
//	double a=0;
//	cin >> a;
//	printf("%f\n%.5f\n%e\n%g\n", a, a, a, a);
//}
//int main()
//{
//	cout << "  *" << endl << " ***" << endl << "*****" << endl << " ***" <<endl<< "  *";
//}
//int main()
//{
//	double a=0, b=0,r=0;
//	int k = 0;
//	cin >>a >>b;
//	k = a / b;
//	r = a - k * b;
//	cout << r<< endl;
//}
//int main()
//{
//	int r = 0;
//	cin >> r;
//	double x = 3.14,v=0;
//	v = (4.0/3)* (x*(r * r * r));
//	cout << v << fixed << setprecision(6)<<endl;
//}