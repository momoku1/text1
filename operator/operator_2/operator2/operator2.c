#define   _CRT_SECURE_NO_WARNINGS 1
#include "operator2.h"
//&ȡ��ַ������
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int *pa = &a;//pa������ŵ�ַ��-pa����һ��ָ�����
//	*pa = 20;//-*�����ò�����   ������ӷ��ʲ�����
//	printf("%d\n", a);
//	return 0;
//}

//( ���� )----ǿ������ת��
//int main()
//{
//	int a = (int)3.14;
//	return 0;
//}

//��ϵ��������>= <= ==  ��=
//��Ҫע����� �ַ�������Щ�������ܵ����ù�ϵ������ ��Ƚ������ַ����Ĵ�С ��strcmp



//sizeof   ����
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//ָ����� 32λ����4  64λ��8
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}


//�߼���������&& || 
//
//int main()
//{
//	int a = 2; 
//	int b = 1;
//	if (a&&b)
//	{
//		printf("hello\n");
//	}
//	return 0;
//}


////360������
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a ++ &&++b && d++;
//	i = a++ ||++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//
//	return 0;
//}

//��������������Ŀ����������b=a>b��a:b   
//���Ų�������,  �ö��Ÿ�����һ���������ű��ʽ��������ȼ�
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//���ű��ʽ ���������μ��㣬�����������ʽ�Ľ�������һ�����ʽ�Ľ��
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);//���d=10;
//	printf("%d\n", d);
//	return 0;
//}
//���ű��ʽ��ص����ӣ�

//int main()
//{
//	//1.
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	//c��ֵ��
//	//13
//	printf("%d\n", c);
//	
//	//2.
//	int d = 0;
//	if (a = b + 1, c = a / 2, d > 0)
//
//		//3.
//	a = get_val();
//	count_val(a);
//	while (a > 0)
//	{
//		a = get_val;
//		count_val(a);
//	}
//	//�����ĳɶ��ű��ʽ
//	while (a = get_val(), count_val(a), a > 0)
//	{
//
//	}
//
//	return 0;
//}
//



