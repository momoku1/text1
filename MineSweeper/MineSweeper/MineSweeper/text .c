#define   _CRT_SECURE_NO_WARNINGS 1
//ɨ����Ϸ
//��Ϸ�������
#include "MineSweeper.h"
void menu()//��ʼ�˵�
{
	printf("**********************\n");
	printf("****    ɨ����Ϸ   ****\n");
	printf("***   1.��ʼ��Ϸ   ****\n");
	printf("***   0.�˳���Ϸ   ****\n");
	printf("***********************\n");
}
/*��Ϸԭ��
���һ�����꣬�����ף���ֱ����Ϸ����
�������ף����ڵ�ǰ������ʾ�ܱ����׵ĸ�����
���հ׵��꣬����û�е㵽������Ϸʤ����
*/
void game()//��Ϸִ��
{
	char mine[ROWS][COLS] = {0};//���úõ��׵���Ϣ 1��ʾ�� 0��ʾ������
    char show[ROWS][COLS] = { 0 };//�Ų�����׵���Ϣ *��ʾ�հ� #��ʾ��
	//��ʼ����ͼ
	Init_interface(mine,ROWS,COLS,'0');//��ʼ�������ڵ�ͼ
	Init_interface(show, ROWS, COLS,'*');//��ʼ��������Ϸ��ͼ

	//������
	SetMine(mine, ROW, COL);
	//print_interface(mine, ROW, COL);//��ӡ
	print_interface(show, ROW, COL);//��ӡ
	//�Ų���
 	FindMine(mine, show,ROW, COL);



}
int main()
{
	srand((unsigned int )time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("�Ƿ������Ϸ����ѡ�� :>");
		scanf("%d", &input);
		switch(input)
		{
		    case 0:
				printf("�˳���Ϸ\n");
				break;
			case 1:
				printf("$��Ϸ��ʼ$\n");
				game();
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	} while (input);

	return 0;
}