#define   _CRT_SECURE_NO_WARNINGS 1
//游戏主体相关函数
#include "MineSweeper.h"
void Init_interface(char game_map[ROWS][COLS], int rows, int cols,char n)//初始化游戏界面
{
	int i = 0;
	int j = 0;
	for (i = 1; i < rows-1; i++)
	{
		for (j = 1; j < cols-1; j++)
		{
			game_map[i][j] = n;
			/*if (i == 0)
			{
				game_map[i][j] ='0';
			}
			else if (j == 0)
			{
				game_map[i][j] = '0'+i;
			}
			else
				game_map[i][j] = ' ';*/
		}
	}
}
void SetMine(char mine[ROWS][COLS], int row, int col)//布置雷
{

	//布置n个雷
	int count = mine_num;
	while (count)
	{
		//生成随机下标
		int  x = 0;
		int y = 0;
	     x = rand() % row+1;
		y = rand() % col+1;
		if (mine[x][y] == '0')
		{
				mine[x][y] = '1';
				count--;
		}
	}
}
static int get_mine_count(char mine[ROWS][COLS], int x, int y)//检测雷的个数   static---在这里可以保证此函数只在这个.c文件能查看
{
	int i = 0;
	int j = 0;
	int count=0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
				count++;
		}
	}
	return count;
}
//void diffuse(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = x - 1; i <= x + 1; i++)
//	{
//		for (j = y - 1; j <= y + 1; j++)
//		{
//			if(show[i][j]!=show[x][y])
//			{
//				if (show[i][j] == '*')
//				{
//					FindMine(mine, show, ROW, COL);
//				}
//			}
//			else return;
//			
//		}
//	}
//	return count;
//}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//排查雷
{
//1.输入排查的坐标
//2..检查坐标处是不是雷
//(1) 是雷-- 很遗憾炸死了-游戏结束
//(2)不是雷--统计坐标周围有几个雷--存储排查雷的信息到game_map2数组，游戏继续

//优化：如果周围都不是雷，就展开周围。

     
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- mine_num)//雷排空就退出循环
	{
		printf("请输入要排查的坐标：>");
		scanf("%d%d", &x, &y);
		//判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')

			{
				printf("\n");
				printf("很遗憾，你被炸死了\n");
				print_interface(mine, ROW, COL);
				break;
			}

			else
			{
				//不是雷的情况下，统计x,y的坐标周围有几个雷
				int count = get_mine_count(mine, x, y);

				//
				//if (count ==0)
				//{
				//	diffuse(mine,show, x, y);
				//}
				////

				show[x][y] = count+'0';//-----'0'-----48
				print_interface(show, ROW, COL);//打印游戏界面
				win++;
			}
		}
	    else
		{
		      printf("坐标不合法，请重新输入\n");
		}
	}
	if (win == row * col - mine_num)
	{
		printf("\n恭喜你排雷成功！\n");
		print_interface(mine, ROW, COL);
	}
}


void print_interface(char game_map[ROWS][COLS], int row, int col)//打印游戏界面
{
	int i = 0;
	int j = 0;
  //打印列号
	printf("--------------扫雷游戏----------------\n");
	
	for (i = 0; i <= col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", game_map[i][j]);
		}
		printf("\n");
	}
	printf("--------------扫雷游戏----------------\n");
}
