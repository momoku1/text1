#define   _CRT_SECURE_NO_WARNINGS 1
//���Լ���2��ʵ��ƪ
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;//�����ϵ� i==5��
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//ʵ��2��
//ʵ�ִ��룺��1!+2!+3!...+n!; ���������
//����ǰ
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);//3
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
//���Ժ�
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//
//	scanf("%d", &n);//3
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0-9
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//�������еĽ����ʲô��
//	//����ѭ����ӡhehe
//
//}
//i��arr�Ǿֲ�����
//�ֲ������Ƿ���ջ���ϵ�
//ջ���ڴ��ʹ��ϰ���ǣ���ʹ�øߵ�ַ�ռ䣬��ʹ�õ͵�ַ�ռ�
//ջ���涨�����Ǹߵ�ַ


//ע�⣺ջ�������ݽṹջû�й�ϵ����Ҫ���
//Խ����ʳ���ᱨ��
//c������ȱ��

/*����Ĵ���
1.������������
2.bug����
3.Ч�ʸ�
4.�ɶ��Ը�
5.��ά���Ը�
6.ע������
7.�ĵ���ȫ
*/
/*
������coding����
1.ʹ��assert
2.����ʹ��const
3.�������õı�����
4.��ӱ�Ҫ��ע��
5.������������
*/
//Ԥ��������
//ͨ�����뼼�ɣ����ٴ���

//ʾ����
//ģ��ʵ�ֿ⺯��strcpy
#include <stdio.h>
#include <string.h>

//д�Ĳ���
//void my_strcpy(char *Destination,char *source)
//{
//	while (*source!='\0')
//	{
//		*Destination = *source;
//		Destination++;
//		source++;
//	}
//	*Destination = *source;
//}
//�޸İ汾1
//void my_strcpy(char *Destination,char *source)
//{
//	while (*source!='\0')
//	{
//		*Destination++ = *source++;
//	}
//	*Destination = *source;
//}
//�޸İ汾2
//void my_strcpy(char *Destination, char *source)//
//{
//	while (*Destination++ = *source++)//ע��'\0'���⣨ASCII��ֵΪ0������0����0��ֵ��Destination���������ʽ��ֵ����0������Ϊ��
//	{
//		
//	}
//}
//�޸İ汾3-���Ű汾
//strcpy����⺯������ʵ���ص���Ŀ��ռ����ʼ��ַ
//����Ϊ��׼�Ŀ⺯��д��
#include <assert.h>
char * my_strcpy(char *Destination, const char *source)//����source��Destinationд���� ��һ��const *source���ǲ��ɱ��
{
	assert(source != NULL);//����   ���ʽΪ����Գɹ� Ϊ�ٶ���ʧ�ܻ���б�����ʾ�������������
	//��ϣ��sourceΪ��ָ�룬�������ʾ�������������
	char* ret = Destination;
	while (*Destination++ = *source++)//���source���ܵ����ǿ�ָ�룬�޷������û�����������
	{
		;//hello����
	}
	return ret;//����Ŀ��ռ����ʼ��ַ
}
int main()
{
	char arr1[20] = "xxxxxxxxxxx";
	char arr2[ ] = "hello";
	//my_strcpy(arr1,arr2);//������ʼԴ��ַ���ݵĿ�ָ��
	//strcpy(arr1, arr2);
	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����   ������Ϊ��һ�������Ĳ���������ʽ����
	return 0;
}

//const���� const���α��� ---������ ���������Ǳ������ǲ����޸�
//int main()
//{
//	int num = 10;
//	int n = 1;
//	// const int *p = &num;//const�������*������ε�*p����ʾָ����ָ��������ǲ���ͨ��ָ�����ı��
//	////����ָ����������ǿ����޸ĵ�
//	// *p = 20;//���ܸı�
//	// p = &n;
//	//printf("%d\n");
//
//	 int * const p = &num;//const�������*�ұ߱����ε�p����ʾָ������ǲ��ܸı��
////����ָ����ָ��������ǿ����޸ĵ�
//	*p = 20;
//	p = &n;//���ܸı�
//	printf("%d\n");
//	return 0;
//
//}
