#define   _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////1.ַ����
////2.������Ϊ�����Ĳ���
////3.�����ĵݹ�
//
////��ַ���ڶ�����������飬�����ȵȣ�ϵͳ��������Ƿ����ڴ����򣨵�ַ��
////��������ݷŵ������ַ�ı����
////&:ȡ��ַ�� �ɵõ���ַ��� �磺&a �õ�a�ĵ�ַ��� 
////ָ��������洢��ַ�ı���
//
////1.��ô����һ���������洢һ����ַ -��ָ�����
////2.��ô��ȡһ�������ĵ�ַ &
////3.��ôͨ��ָ���������ָ�������������ĵ�ַ�ڲ�������
//
////ַ�����ܹ�ͨ���βθı�ʵ�ε�ֵ
//
////�����ĵݹ飺��һ���������ظ��ĵ����Լ������������������
//
//
//
///*ֵ����*/
//void fun(int x)
//{
//	printf("%d\n", x);
//}
///*ַ����*/
//void fun1(int *p1)
//{
//	printf("%d\n", *p1);//*:������ ȡ����
//	*p1 = 100;
//	printf("%d \n", *p1);
//
//}
///*������Ϊ�����Ĵ��ݲ���*/
//void fun2(int buff[ ],int n)
//{
//	for (int i=0; i < n; i++)
//	{
//		printf("%d ", buff[i]);
//	}
//	printf("\n");
//}
//
///*�����ĵݹ�*/
////void fun3()
////{
////	printf("1111\n");
////	fun3();
////}
//void fun4(  )//ִ����֮��һ��������ִ�У��˺������11��0
//{
//	static int i = 10;
//	if (i != 0)
//	{
//		i--;
//		fun4();
//	}
//	printf("%d\n", i);
//}
//void fun5(int n)//���1-10 
//{
//	if (n != 0)
//	{
//		fun5(n - 1);
//		printf("%d\n", n);
//
//	}
//}
//
//void  fun6(int n)
//{
//	if (n!= 0)
//	{
//		printf("%d", n % 10);
//		fun6(n /=10);
//	}
//}
////쳲��������У�1,1,2,3,5,8,13,......��n��Ԫ�ص�ֵ���ڵ�n-1��Ԫ��ֵ��n-2��Ԫ��ֵ
////��50��Ԫ��
//int fun_fb(int n)
//{
//
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return fun_fb(n-1)+fun_fb(n-2);
// }
///*���ӳ���*/
///*��飺���ӵ�һ��ժ���������ӣ������ͳ���һ�룬�������
//�ֶ����һ�����ڶ��콫ʣ�µĳԵ���һ�룬�ֶ����һ������
//��ÿ�����϶�����ǰһ���һ��ӼӶ��һ����������ʮ�죬
//����Է��־�ֻʣ��һ�������ˣ�����һ��ժ�˶�������*/
//
/*nt houzi_tt(int day)
{
	if (day == 10)
	{
		return 1;
	}
	return (houzi_tt(day+1)+1)*2;
}*/
//
//void shuchu_1_10(int num)
//{
//	if (num != 0)
//	{
//		printf("%d ", num);
//		num--;
//		shuchu_1_10(num);
//	}
//}
//
//
//int main()
//{
//
//	fun(10);//ֱ�ӽ�ʵ����ֵ10���ݸ��β�x;
//	int a = 10;
//	fun1(&a);
//
//	char b = 'a';
//	float c = 1.1f;
//	int * d = &a;//����ָ����� 
//
//	int arr1[10] = { 1,43,3,34,64,73,16,43,12 };
//	int arr2[5] = { 1,2,3,4,5 };
//	int arr3[8] = { 1,2,3,4,5,6,7,8 };
//	fun2(arr1, 10);
//	fun2(arr2, 5);
//	fun2(arr3, 8);
//
//	fun4();
//	fun5(10);
//	fun6(1234);
//	printf("\n");
//	int num = 10;
//	printf ("��%d��쳲���������ֵ��%d\n",num,fun_fb(num));
//	printf("���ӵ�һ��ժ��%d������\n", houzi_tt(1));
//	shuchu_1_10(10);
//	return 0;
//}
//
//
//�����ĵݹ飺���»�С   
#include <stdio.h>

//void out_split(unsigned int a)
//{
//	//unsigned int b = 0;
//	//b=a% 10;
//	//if (b != 0)
//	//{
//	//	out_split(a / 10);
//	//	printf("%d ", b);
//	//}
//
//
//	//�Ż���
//	if (a > 9)
//	{
//		out_split(a / 10);
//	}
//	printf("%d ", a% 10);
//}
//
//int main()
//{
//	unsigned int a = 0;
//	scanf("%u", &a);
//	out_split(a);
//	return 0;
//}

//�ݹ鷽ʽʵ�ֿ⺯��strlen�Ĺ���
//�ݹ��������Ҫ����
//���������������������������������ʱ�򣬵ݹ鲻�ڼ�����
//ÿ�εݹ����֮��Խ��Խ�ӽ��������������
//#include <string.h>
//int string_length(char arr[])
//{ 
//	/*int i = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//    } 
//	return i+1;*/
//	static int i = 0;
//	if (arr[i] != '\0')
//	{
//		i++;
//		string_length(arr);
//	}
//	return i;
//}
//
//int main()
//{
//	char arr[] = "fkdsjfkfjskjafk" ;
//	int len=string_length(arr);
//	printf("�ַ�������Ϊ��%d \n", len);
//	return 0;
//}
//����������ʱ����
//int my_strlen(char *str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(++str);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	char arr[] = "bit";
//	printf("%d %d", my_strlen(arr),++a);
//	return 0;
//}
//��n�Ľ׳�
//�����õ����ķ�ʽҲ�����õݹ�ķ�ʽ
//int n_fac(int x)
//{
//	if (x>1)
//	{
//		return x*n_fac(x-1);
//	}
//	else return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d�Ľ׳�Ϊ��%d", n, n_fac(n));
//	return 0;
//}


//void test(int n)
//{
//	if (n < 10000)
//	{
//		text(n + 1);//ջ���
//	}
//}
//int main( )
//{
//
//	text(1);
//	return 0;
//}


//�ڴ棺
//1.ջ�����ֲ������������Ĳ���     ÿ�κ����ĵ��ö�Ҫ�����ڴ�ռ�
//���Ե��ݹ�Ĵ������࣬��Ҫ����Ŀռ����ʵ�ʿռ�ͻ����ջ�����
//���ԣ�1.�������ݹ飬��������������ÿ�εݹ鶼Ҫ�ƽ���������
//2.�ݹ��������̫��
//2.��������̬�ڴ���䣬malloc/free calloc realloc
//3.��̬������̬������ȫ�ֱ���


//��ŵ����
//int main()
//{
//	int k = 0;
//	printf("%d ",  % 3);
//	return 0;
//}

//#include <stdio.h>
//
//int count = 1;
//// ��Ϊ���͹��������ַ��������ַ���������ʽ����Ҫ��char*��������char
//void hannuota(int n, char* a, char* b, char* c) {  // ������������ԭ���������ӣ����������ӣ�Ŀ�ĵ���������
//	if (n == 1) {
//		printf("%d: %s -> %s \n", count, a, c);  // ��n==1��ʱ��ֱ�Ӵ�����1�ƶ�������3
//		count++;
//	}
//	else {
//		hannuota(n - 1, a, c, b);      // ��һ����Ҫ�� n-1 �����Ӵ� ����1 ���� ����3 �ƶ��� ����2
//		printf("%d: %s -> %s \n", count, a, c); // �ڶ����� ����1 ʣ�µ������Ǹ��� ����1 �ƶ��� ����3
//		count++;
//		hannuota(n - 1, b, a, c);      // �������� ����2 �е� n-1 �����Ӵ� ����2 ���� ����1 �ƶ��� ����3
//	}
//}
//
//int main() {
//	int n = 0;
//	printf("�����뺺ŵ������������");
//	scanf("%d", &n);
//	hannuota(n, "����1", "����2", "����3");
//	return 0;
//}

//int houzi_tou(int d)
//{
//	if (d == 1)
//	{
//		return 1;
//	}
//	else return (houzi_tou(d - 1) + 1) * 2;
//}
//
//
//int main()
//{
//	int day = 10;
//	int day1 = 1;
//	int n = houzi_tou(day);
//	int m = houzi_tt(day1);
//	printf("%d %d", n,m);
//	return 0;
//}
//void hanno1(int n, char *a, char *b, char*c)
//{
//	if (n == 1)
//	{
//		printf("%s--->%s\n", a, c);
//    }
//	else
//	{
//		hanno1(n - 1, a, c, b);
//		printf("%s--->%s\n", a, c);
//		hanno1(n - 1, b, a, c);
//	}
//}
//int main()
//{
//	char a[] = "����1";
//	char b[] ="����2";
//	char  c[] ="����3";
//	int n = 0;
//	printf("���������ӵ�������");
//	scanf("%d", &n);
//	hanno1(n,a,b,c);
//	return 0;
//}

/*������̨��*/
//int num_way(int n)
//{
//	if (n <= 2)
//		return n;
//	else return num_way(n - 1) + num_way(n - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("������������̨������");
//	scanf("%d", &n);
//	printf("����%d������",num_way(n));
//	return 0;
//}

/*����1/1-1/2+1/3-1/4+1/5......+1/99-1/100��ֵ����ӡ�����*/


//int main()
//{
//	float num =0;

//	int i= 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		num +=flag*(1.0/ i);
//		flag = -flag;
//	}
//	printf("%f\n", num);
//	return 0;
//}
/*�����ֵ*/
//int main()
//{
//	int arr[10] = { 1,2,3,35,5,6,7,8,9,10 };
//	int max = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if(arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d \n",max);
//	return 0;
//}

/*�žų˷���*/
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 10;i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t",j,i,i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//���ֲ���
//void maopao_px(int arr[],int len)
//{
//	for (int i = 0; i < len-1; i++)
//	{
//		for (int j=0;j<len-1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//		
//	}
//}
//int binary_search(int arr[],int n, int len)
//{
//	int x = 0;
//	int y = len - 1;
//	for(int i=0; i<len; i++)
//	{
//		int mid = (x + y) / 2;
//		if (arr[mid] > n)
//		{
//			y = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			x = mid + 1;
//		}
//		else if(arr[mid]==n)
//			return mid;
//	}
//	 return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,3,43,12,43,56,33,21,42 };
//	//�ҳ��ض���Ԫ�ص��±�
//	int n = 0;
//	printf("��������Ҫ���ҵ�Ԫ�أ�");
//	scanf("%d", &n);
//	int len = sizeof(arr) / sizeof(arr[0]);
//	maopao_px(arr,len);
//	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	//{
//	//	printf("%d ",arr[i]);
//	//}
//	int flag=binary_search(arr,n,len);
//	if (flag == -1)
//		printf("�Ҳ���\n");
//	else
//	printf("%dԪ�ص��±�Ϊ%d", n, flag);
//	return 0;
//}


//�ж��Ƿ�Ϊ����
//int judge_prime(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//	
//}
//
//int main()
//{
//	int n = 0;
//	printf("������һ��������");
//	scanf("%d", &n);
//	int num=judge_prime(n);
//	if (num == 0)
//	{
//		printf("%d��������\n", n);
//	}
//	else printf("%d������\n", n);
//	return 0;
//}

//
//int my_strlen(char arr[])
//{
//	int i = 0;
//	while (arr[i] !='\0')
//	{
//		i++;
//	}
//	return i;
//}
//void re_string(char *str)
//{
//	int len = my_strlen(str);
//	char temp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) > 1)
//		re_string(str + 1);
//	*(str+len-1) = temp;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	/*int len=my_string(arr);*/
//	re_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//
/*����һ���Ǹ����������������������֮��*/
//int DigitSum(int n)
//{
//	if (n>9 )
//	{
//		return DigitSum(n / 10)+n%10;
//	}
//
//	else return n;
//}
//int main()
//{
//	int n = 0;
//	printf("������һ���Ǹ�������");
//	scanf("%d", &n);
//	printf("����ͣ�%d\n",DigitSum(n));
//	return 0;
//}

//��дһ������ʵ��n��k�η����ݹ鷽ʽ
//�⺯�� pow(x,y);xΪ������base����yΪָ����exponent��;ͷ�ļ� math.c
double n_kpower(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k > 0)
		return n_kpower(n, k - 1)*n;
	else
		return 1.0/n_kpower(n, -k);
}
int main()
{
	int n = 0;
	int k = 0;
	printf("������һ�����Լ�����η�����");
	scanf("%d %d", &n,&k);

	printf("%d^%d=%lf\n",n,k,n_kpower(n,k));
	return 0;
}








