#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("66666666666666666666666666666\n");
	printf("6666  1.��   0.���Ӳ���  6666\n");
	printf("66666666666666666666666666666\n");
}
void game()
{
	//1.���������
	int ret = 0;
	int guese = 0;//���ղµ�����
	//��ʱ����������������������ʼ��
	//time����
	//time_t time(time_t*timer)
	//ʱ�������ǰ��������ʱ��-���������ʼʱ�䣨1970.1.1.0:0:0��=(xxxx)��
	ret=rand()%100+1;//����1-100֮��������
	//printf("%d\n", ret);
	//2.������
	while (1)
	{
		printf("��tm�£�>");
		scanf_s("%d", &guese);
		if (guese > ret)
		{
			printf("md���ˣ�\n");
		}
		else if (guese < ret)
		{
			printf("û��СС��Ҳ�ܿɰ�~\n");
		}
		else
		{
			printf("byd��ͦ׼\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ɵ�Ʊ��Ҹ�\n");
			break;
		}
	} while(input);
}