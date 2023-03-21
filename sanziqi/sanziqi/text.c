#define   _CRT_SECURE_NO_WARNINGS 1
//测试三子棋游戏(井字棋)

#include "game.h"//引用自己的头文件用" "
void menu()
{
	printf("****************************\n");
	printf("***** 1.play    0.exit *****\n");
	printf("****************************\n");
}
//游戏的整个实现
void game()
{
	char ret = 0;
	//创建数组-存放走出的棋盘信息
	char board[ROW][COL] = {0};//全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove( board , ROW , COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret=Iswin(board,ROW,COL);

		if (ret != 'C')
		{
			break;
		}

		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	   //判断电脑是否赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}

}
/*
    |    |
---|---|---
    |    |
---|---|---
    |    |
*/
void text()
{
	int input = 0;
	srand((unsigned int )time(NULL));//time()；函数返回的是time_t的数据类型，所以需强制转换为unsigned int。
	do
	{
		menu();
		printf("请选择：》");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");		
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择：\n");
			break;
		}
	} while (input);
}
int main()//程序入口
  {
	text();
	return 0;
}