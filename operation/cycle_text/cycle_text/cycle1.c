#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i =5)//=�Ǹ�ֵ���൱����ѭ����һֱ��i��ֵ5,5Ϊ�档���Ի������ѭ��
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

//switch���default�����Է�����������λ�ã���һ���Ƿ��ڽ�β
//switch(c)  c���������ͣ�����Ϊ������
//F11-�����
//F10-�����

//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:switch (y)
//          	{
//	          case 0:
//				  printf("first");
//				 
//			  case 1:
//				  printf("second");
//				  break;
//			  default: printf("hello");
//
//	         }
//	case 2:
//		printf("third");
//
//	}
//	return 0;
//}



//ȡ���ֵ������ǰ�� ÿ�ζ���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d %d", &a, &b, &c);
//	//����˳��
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//���
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//void As(int *x, int *y)
//{
//	if (*x < *y)
//	{
//		int tmp = *x;
//		*x = *y;
//		*y = tmp;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	As(&a,&b);
//	As(&a,&c);
//	As(&b,&c);
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int min= 0;
//	scanf("%d%d", &a, &b);//
//	min = a > b ? b : a;
//	while(1)
//	{
//		if ((a%min == 0) && (b%min== 0))
//		{
//			printf("���Լ����%d \n", min);
//			break;
//		}
//		min--;
//
//	}
//	return 0;
//}



//շת����������Լ��
/*���������� m n 
ʹt=m%n;
��t=0;ʱ
n��ֵ��Ϊ���Լ��
����n��ֵ����m
t��ֵ��ֵ��n;
����t=m%n;
ֱ��t=0;��ʱn��ֵ��Ϊ���Լ��
*/
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	scanf("%d%d", &m, &n);
//
	/*while (1)
	{
		t = m % n;
		if (t == 0)
		{
			printf("%d\n", n);
			break;
		}
		else
		{
			n = t;
		}
	}
	*/
//	int tmp1 = m;
//	int tmp2 = n;
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ����%d", n);
//	printf("��С��������%d", tmp1*tmp2 / n);
//	return 0;
//}

///*�ж��Ƿ�Ϊ����*/
////�ܱ�4���������ܱ�100������������
////�ܱ�400������������
//int main()
//{
//	int y = 0;
//	printf("��������ݣ�");
//	scanf("%d", &y);
//	if ((y % 4 == 0 && y % 100 != 0)||(y%400==0))
//	{
//		printf("%d��������\n", y);
//	}
//	else printf("%d�겻������\n", y);
//
//	return 0;
//}

/*ͳ��1000�굽2000������겢��ӡ*/
//int main()
//{
//	int y = 0;
//	int count = 0;
//
//	for (y = 1000; y <= 2000; y++)
//	{
//		if ((y % 4==0&&y%100!=0)||( y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount��%d", count);
//	return 0;
//}

/*��ӡ1-100֮������*/
//�����жϣ�ֻ�ܱ�1����������������
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <=200 ; i++)
//	{
//		int j = 0;
//		int flag = 1;
//
//		for ( j=2; j<i;j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag==1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//			printf("\n%d\n", count);
//	return 0;
//}
//�����Ż� 
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//m=a*b a��b��һ��������һ������<=��ƽ����
//	//
//	for (i = 100; i < 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j+=2)//sqrt();�����ݵĿ�ƽ�� ͷ�ļ�main.h
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d ", count);
//	return 0;
//}
/*goto���*/
//��ת   ע�⣺������ʹ��
//ĳЩ�����õ��ţ�������������Ƕ�ף���ֻ���ڱ����� �����������ܿ纯����
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}
#include <string.h>
#include <stdlib.h>
//�ػ�����ֻҪ���е�����һ�����ڹػ���������롰��������ȡ���ػ���
//windows������ʾ����shutdown -s -t 60//���� 60��ػ�          shutdown  -a//ȡ���ػ�
//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������system()-ִ��ϵͳ����
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");//stdlib.h
//    while(1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)//�����ַ����ıȽ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp:    string compare ����ֵ����1��ʾǰ>��
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}










