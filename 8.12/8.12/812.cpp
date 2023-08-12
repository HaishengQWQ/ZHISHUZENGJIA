#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("******1.��   0.���Ӳ��� ******\n");
	printf("******************************\n");
}
//��Ϸ������ʵ��
void game()
{
	char ret = 'C';
 //���� ����߳���������Ϣ
	char board[ROW][COL] = {0};
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret=Iswin(board, ROW, COL);
		if (ret !='C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��Ӯ�ˣ�\n");
	}
	else if (ret == '#')
	{
		printf("���������Զ��Ȳ���\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}
void test()
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
			game();
			break;
		case 0:
			printf("�����\n");
			break;
		default:
			printf("ѡ����󣬱��Ҹ�\n");
			break;
		}
	} while (input);
}
int main()
{
 
	test();
	return 0;
}