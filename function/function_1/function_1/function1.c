#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//����������Ϊ���ܵ�����
//��������Ļ�����ʽ��
/*
����ֵ���� ���������β��б���
{
    �����壻
}


����ֵ���;��ǻ�������������
������ ������һ����ʶ�������Ϲ���Ϻ͹淶
�����Ҫ����һ��ֵ��ȥ��ô����ֵ�������ͨ��return��ֵ���س�ȥ
�������Ҫ����ô���ڷ���ֵ�����������void
*/


void Two()//�žų˷���
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <=i; j++)
		{
			printf("%d*%d=%d\t", j, i, j*i);
		}
		printf("\n");
	}
}

/*�β��б�*/
//��ʽ�ο��ı������ڵ������������ʱ��
//��Ҫ�õ�ʲô���ݣ��Ϳ������β�����ʾ

/*ʵ���б����������õ�ʱ����ʵ�δ��ݸ��βΣ����ô�ʹ�ã���Ӧλ�ý��д���*/
//�����ڲ��ı���
//�ֲ���������������һ�������ڲ��ܱ�ʹ�õı���,�����Լ�����������ͷŵ���
//ȫ�ֱ��������������涨��ı����������������������ڳ������ʱ�Żᱻ�ͷš�
//ע��ĵ㣺ȫ�ֱ����;ֲ�����ʱ���������ĵ���ʹ�����ͬ��������ʱ��ʹ�õ��������һ�����ͽ�ԭ�򣩡�

//int x1;// ���û�и�ȫ�ֱ������и�ֵ����ôϵͳ�Զ�Ĭ��Ϊ0��
//��̬��������̬����ֻ�ᱻ����һ�Σ����ᱻ�ظ����塣

//��������������˵������������˵���� ��������ʵ�Σ���
//�о٣�������void fun_x1( );   ���壺void fun_x1( ) {};
//BUG: һ���޷������������˼�Ǻ���ֻ����û���塣



int Three(int a, int b)
{

	return a+b;
}
int Four()
{
	return 0;//����һ������ ִ����һ��������������
	int x = 0;

}
int Five(int x, int y )
{
	int num = 0;

	num = x + y;
	return num;
}
int six(int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
void maopao_px(int arr[],int len)//ð������
{
	for (int i=0 ; i <len - 1; i++)
	{
		for (int j=0; j <len-1-i; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				int tem=0;
				tem = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tem;
			}

		}
	}
}

void add()
{
	int a;
}



int main()
{ 
	for (int i = 0; i < 10; i++)
	{
		int a = 10;
		a++;
		printf("%d\n", a);

	}	//�ֲ����������Լ���������ᱻ�ͷŵ����˴�a���������ڻ�������
	char arr_zf[] = "abcdefghijklmnopqrstuvwxyz";
	int arr[10] = { 2,3,4,8,34,12,43,11,91,10 };
	maopao_px(arr,10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	printf("%d\n",strlen(arr_zf));
	Two();
	printf("\n");

	int num = 0;
	num=Five(10, 10);
	printf("%d \n",num);
	
	six(10, 10);
	return 0;//�����ں����У�ִ����һ����������
}
 