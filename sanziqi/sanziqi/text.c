#define   _CRT_SECURE_NO_WARNINGS 1
//������������Ϸ(������)

#include "game.h"//�����Լ���ͷ�ļ���" "
void menu()
{
	printf("****************************\n");
	printf("***** 1.play    0.exit *****\n");
	printf("****************************\n");
}
//��Ϸ������ʵ��
void game()
{
	char ret = 0;
	//��������-����߳���������Ϣ
	char board[ROW][COL] = {0};//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		PlayerMove( board , ROW , COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=Iswin(board,ROW,COL);

		if (ret != 'C')
		{
			break;
		}

		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	   //�жϵ����Ƿ�Ӯ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
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
	srand((unsigned int )time(NULL));//time()���������ص���time_t���������ͣ�������ǿ��ת��Ϊunsigned int��
	do
	{
		menu();
		printf("��ѡ�񣺡�");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");		
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
int main()//�������
  {
	text();
	return 0;
}