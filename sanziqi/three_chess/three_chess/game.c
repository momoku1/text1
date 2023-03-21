#define   _CRT_SECURE_NO_WARNINGS 1
/*三子棋游戏相关*/
#include "game.h"
void Init_board(char arr[ROW ][COL ],int row,int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
/*打印棋盘*/
void Print_board(char arr[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ",arr[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		  if (i < row - 1)
		    {
			       for(int j=0;j<col;j++)
				   {
					   printf("---");
					   if(j<col-1)
							printf("|");
				   }
				   printf("\n");
		    }
	}
}
void player_walk(char arr[ROW][COL], int row, int col)
{
	int flag = 1;
	while(flag)
	{ 
		printf("玩家走：>\n");
		printf("请输入坐标：>");
		int x = 0;
		int y = 0;
		scanf("%d%d", &x, &y);
		if (x>= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				flag = 0;
			}
			else
				printf("该位置已被占用,请重新输入\n");
		}
		else
			printf("坐标无效，请重新输入\n");
	}
}


void computer_walk(char arr[ROW][COL], int row, int col)
{
	printf("电脑走：>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}
}
//判断棋盘是否满了
int Isfull(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
			{
				return  0;
			}
		}
	}
	return 1;
}
char Is_win(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]&&arr[i][1]!=' ')
		{
			return arr[i][1];
		}
	}
	for ( i = 0; i < col; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i]&&arr[1][i]!=' ')
		{
			return arr[1][i];
		}
	}
	if (arr[0][0] == arr[1][1] &&arr[1][1]== arr[2][2] &&arr[1][1]!=' ')
	{
		return arr[1][1];
	}
	if (arr[0][2] == arr[1][1]&&arr[1][1] == arr[2][0]&&arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	//判断棋盘是否满了
	if (1==Isfull(arr, ROW, COL) )
	{
		return 'Q';//满了
	}
	else 
		return 'C';//没满
}
