#include<stdio.h>
#define zfx 64
int main(void)
{
	const double sjzc = 2E16;
	double xz, qb;
	int sz = 1;
	printf("正方形 谷物  现在的");
	printf("几分之一\n");
	printf("       增加的  谷物");
	printf("世界总量\n");
	qb = xz = 1.0;
	printf("%4d %13.2e %12.2e %12.2e\n", sz, xz, qb, qb / sjzc);
	while (sz < zfx)
	{
		sz = sz + 1;
		xz = 2.0 * xz;
		qb = qb + xz;
		printf("%4d %13.2e %12.2e %12.2e\n", sz, xz, qb, qb / sjzc);
	}
	printf("这是全部。\n");
	return 0;
}