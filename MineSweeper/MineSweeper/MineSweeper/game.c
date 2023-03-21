#define   _CRT_SECURE_NO_WARNINGS 1
//��Ϸ������غ���
#include "MineSweeper.h"
void Init_interface(char game_map[ROWS][COLS], int rows, int cols,char n)//��ʼ����Ϸ����
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
void SetMine(char mine[ROWS][COLS], int row, int col)//������
{

	//����n����
	int count = mine_num;
	while (count)
	{
		//��������±�
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
static int get_mine_count(char mine[ROWS][COLS], int x, int y)//����׵ĸ���   static---��������Ա�֤�˺���ֻ�����.c�ļ��ܲ鿴
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

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//�Ų���
{
//1.�����Ų������
//2..������괦�ǲ�����
//(1) ����-- ���ź�ը����-��Ϸ����
//(2)������--ͳ��������Χ�м�����--�洢�Ų��׵���Ϣ��game_map2���飬��Ϸ����

//�Ż��������Χ�������ף���չ����Χ��

     
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- mine_num)//���ſվ��˳�ѭ��
	{
		printf("������Ҫ�Ų�����꣺>");
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')

			{
				printf("\n");
				printf("���ź����㱻ը����\n");
				print_interface(mine, ROW, COL);
				break;
			}

			else
			{
				//�����׵�����£�ͳ��x,y��������Χ�м�����
				int count = get_mine_count(mine, x, y);

				//
				//if (count ==0)
				//{
				//	diffuse(mine,show, x, y);
				//}
				////

				show[x][y] = count+'0';//-----'0'-----48
				print_interface(show, ROW, COL);//��ӡ��Ϸ����
				win++;
			}
		}
	    else
		{
		      printf("���겻�Ϸ�������������\n");
		}
	}
	if (win == row * col - mine_num)
	{
		printf("\n��ϲ�����׳ɹ���\n");
		print_interface(mine, ROW, COL);
	}
}


void print_interface(char game_map[ROWS][COLS], int row, int col)//��ӡ��Ϸ����
{
	int i = 0;
	int j = 0;
  //��ӡ�к�
	printf("--------------ɨ����Ϸ----------------\n");
	
	for (i = 0; i <= col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", game_map[i][j]);
		}
		printf("\n");
	}
	printf("--------------ɨ����Ϸ----------------\n");
}
