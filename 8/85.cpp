#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	//ͳ��1-100����ֵ�9�ĸ�����
	/*int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("count=%d/n", count);
	return 0;*/
	//����1/1-1/2+1/3-1/4+1/5....+1/99-1/100��ֵ����ӡ�����
	//int i = 0;
	//double sum = 0.0;
	//int flag = 1;
	//for (i = 1; i <= 100; i++)
	//{
	//	sum+=flag*1.0/ i; 
	//	flag = -flag;//��һ��falg�൱�ڼ���һ����������һ���൱�ڼ���һ�����֣�Ȼ��Ӽ�����
	//}
	//printf("%lf\n",sum);
	//ʮ�����������ֵ
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		printf("max=%d\n",max);*/
		//����Ļ�����9*9�˷��ھ���
		/*int i= 0;
		for (i = 1; i <= 9; i++)
		{
			int j = 1;
			for (j = 1; j <= i; j++)
			{
				printf("%d*%d=%2d ", i, j, i * j);
			}
			printf("\n");
		}*/
	char input[20] = { 0 };
	system("shutdown -s -t -120");
	again:
	printf("��ĵ�����2�����ڹػ��������룺��������˼��ȡ���ػ�\n������>:");
	scanf_s("%s", &input);
	if (strcmp(input, "��������˼") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
