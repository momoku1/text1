#define   _CRT_SECURE_NO_WARNINGS 1
/*游戏执行时相关函数的设计*/
#include "game.h"
void Initboard(char GameBoard[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			GameBoard[i][j] = ' ';
		}
	}
}
void Printboard(char GameBoard[ROW][COL], int row, int col)//打印棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",GameBoard[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}
void Playermove(char GameBoard[ROW][COL], int row, int col)//玩家下棋
{
	int player_x = 0;
	int player_y = 0;
	printf("玩家落子：-》\n");
	
	while(1)
	{
		printf("请输入落子坐标：");
		scanf("%d%d", &player_x, &player_y);
		if (player_x > 0 && player_x <= row && player_y > 0 && player_y <= col)
		{
			if (GameBoard[player_x - 1][player_y - 1] == ' ')
			{
				GameBoard[player_x - 1][player_y - 1] = '*';
				break;
			}
			else
				printf("该位置已经被占用，请重新输入!\n");
		}
		else
			printf("坐标不合法，请重新输入!\n");
	}
	
}

void Computermove(char GameBoard[ROW][COL], int row, int col)//电脑下棋
{
	printf("电脑落子：-》\n");
	while (1)
	{
		int computer_x = rand() % row;
		int computer_y = rand() % col;
		if (GameBoard[computer_x ][computer_y ] == ' ')
		{
			GameBoard[computer_x ][computer_y ] = '#';
			break;
		}
	}

}
int Isfull(char GameBoard[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (GameBoard[i][j]== ' ')
				return 0;
		}
	}
	return 1;
}
char Iswin(char GameBoard[ROW][COL], int row, int col)//判断是否赢了
{
	int i = 0;
	//行相等
	for(i=0;i<row;i++)
	{
		if (GameBoard[i][0]== GameBoard[i][1]&& GameBoard[i][1]== GameBoard[i][2]&& GameBoard[i][1]!=' ')
		{
			return GameBoard[i][1];
		}
	}
  //列相等
	for (i = 0; i < col; i++)
	{
		if (GameBoard[0][i] == GameBoard[1][i] && GameBoard[1][i] == GameBoard[2][i] && GameBoard[1][i] != ' ')
		{
			return GameBoard[1][i];
		}
	}
	//斜边相等
	if (GameBoard[0][0] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][2] && GameBoard[1][1] != ' ')
	{
		return GameBoard[1][1];
	}
	if (GameBoard[0][2] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][0] && GameBoard[1][1] != ' ')
	{
		return GameBoard[1][1];
	}
	//平局
	if (Isfull (GameBoard, ROW, COL)== 1)
	{
		return 'D';
	}
	return 'C';
}