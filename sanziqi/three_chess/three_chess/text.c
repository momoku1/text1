#define   _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*****************************\n");
	printf("*****1.����****** 0.�˳�*****\n");
	printf("*****************************\n");
}
void game()
{
	char ret =0;
	char arr[ROW][COL] = { 0 };
	Init_board(arr, ROW, COL);//��ʼ������
	Print_board(arr, ROW, COL);//��ӡ����
	while (1)
	{
		player_walk(arr, ROW, COL);//�����	
		Print_board(arr, ROW, COL);//��ӡ����
		//�ж��Ƿ�Ӯ����Ϸ
		ret = Is_win(arr, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		computer_walk(arr, ROW, COL);//������
		Print_board(arr, ROW, COL);//��ӡ����

		ret = Is_win(arr, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
	Print_board(arr, ROW, COL);//��ӡ����
}
void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}