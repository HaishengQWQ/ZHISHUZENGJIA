#include<stdio.h>
#define zfx 64
int main(void)
{
	const double sjzc = 2E16;
	double xz, qb;
	int sz = 1;
	printf("������ ����  ���ڵ�");
	printf("����֮һ\n");
	printf("       ���ӵ�  ����");
	printf("��������\n");
	qb = xz = 1.0;
	printf("%4d %13.2e %12.2e %12.2e\n", sz, xz, qb, qb / sjzc);
	while (sz < zfx)
	{
		sz = sz + 1;
		xz = 2.0 * xz;
		qb = qb + xz;
		printf("%4d %13.2e %12.2e %12.2e\n", sz, xz, qb, qb / sjzc);
	}
	printf("����ȫ����\n");
	return 0;
}