#include<stdio.h>
#define ADJUST 7.31//��ADJUST ����Ϊ7.31
int main(void)
{
	const double SCALE = 0.333;//������� ����ֵ0.333
	double shoe, foot;//������������

	printf("Ь�����㳤��\n");//�����ʾ
	shoe = 3.0;///�����ʼֵ
	while (shoe < 18.5)//ѭ����������18.5Ϊֹ
	{
		foot = SCALE * shoe + ADJUST;//����Ӣ�����
		printf("%10.1f %15.2f Ӣ��\n", shoe, foot);//������
		shoe = shoe + 1.0;
	}
	printf("���Ь�Ӻ��ʣ��ʹ�����.\n");//��ƨ��
	return 0;
}