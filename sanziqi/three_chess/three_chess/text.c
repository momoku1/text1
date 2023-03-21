#define   _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*****************************\n");
	printf("*****1.进入****** 0.退出*****\n");
	printf("*****************************\n");
}
void game()
{
	char ret =0;
	char arr[ROW][COL] = { 0 };
	Init_board(arr, ROW, COL);//初始化棋盘
	Print_board(arr, ROW, COL);//打印棋盘
	while (1)
	{
		player_walk(arr, ROW, COL);//玩家走	
		Print_board(arr, ROW, COL);//打印棋盘
		//判断是否赢得游戏
		ret = Is_win(arr, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		computer_walk(arr, ROW, COL);//电脑走
		Print_board(arr, ROW, COL);//打印棋盘

		ret = Is_win(arr, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");
	Print_board(arr, ROW, COL);//打印棋盘
}
void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}