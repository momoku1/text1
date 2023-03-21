#define   _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu()
{
	printf("**************************\n");
	printf("******  0.退出游戏  ******\n");
	printf("******  1.进入游戏  ******\n");
	printf("**************************\n");
}
void game()
{

	char GameBoard[ROW][COL] = { 0 };
	char ret=0;
	Initboard(GameBoard,ROW,COL);//初始化棋盘数据
	Printboard(GameBoard, ROW, COL);//打印棋盘
	while (1)
	{
		Playermove(GameBoard, ROW, COL);//玩家下棋
		Printboard(GameBoard, ROW, COL);//打印棋盘
		ret=Iswin(GameBoard, ROW, COL);//判断是否赢了
		if (ret != 'C')
			break;

		Computermove(GameBoard, ROW, COL);//电脑下棋
		Printboard(GameBoard, ROW, COL);//打印棋盘
		ret = Iswin(GameBoard, ROW, COL);//判断是否赢了
		if (ret != 'C')
			break;

	}
	if (ret == '*')
		printf("恭喜！！！你赢了！\n");
	else if (ret == '#')
		printf("很遗憾！！，你输了！\n");
	else
		printf("平局!\n");
}


void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();//初始化菜单
	do {
		printf("请输入你的选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("已退出游戏\n");
			break;
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
	 } while (input);
}
//主函数
int main()
{
	text();
	return 0;
}