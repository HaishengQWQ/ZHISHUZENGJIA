#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("******1.玩   0.老子不玩 ******\n");
	printf("******************************\n");
}
//游戏的整个实现
void game()
{
	char ret = 'C';
 //数组 存放走出的棋盘信息
	char board[ROW][COL] = {0};
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret=Iswin(board, ROW, COL);
		if (ret !='C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("你赢了！\n");
	}
	else if (ret == '#')
	{
		printf("垃圾，电脑都比不过\n");
	}
	else
	{
		printf("平了\n");
	}

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
			scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("不玩滚\n");
			break;
		default:
			printf("选择错误，别乱搞\n");
			break;
		}
	} while (input);
}
int main()
{
 
	test();
	return 0;
}