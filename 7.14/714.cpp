#include<string.h>
#include<stdio.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "C”Ô—‘≥Ã–Ú…Ëº∆",55 };

	strcpy_s(b1.name, "C++");
	printf("%s/n", b1.name);
	return 0;
}
