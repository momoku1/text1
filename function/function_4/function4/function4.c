#define   _CRT_SECURE_NO_WARNINGS 1
/*�Զ��庯��*/
//���壺�����ķ������� ��������������
//{
 //   ������
//}
#include <stdio.h>
//int get_max(int a, int b)//��ֵ����
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else return b;
//}
//int main()
//{
//	int  a = 0;
//	int   b = 0;
//	scanf("%d%d", &a, &b);//
//	int max = get_max(a,b);//�����ĵ���
//	printf("max=%d\n", max);
//	return 0;
//}
/*��ַ����*/
//void swap(int *x, int *y)//�β�:�ں������õ�ʱ���ʵ�����������ڴ浥Ԫ����������Ϻ������
//{
//	int z = 0;
//	z =*x;
//	*x = *y;
//	*y = z;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	swap(&a, &b);//ʵ��
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}

/*������������Ķ��ֲ���*/
/*���ֲ��ң��ڶ��Ԫ����ÿһ�ζ��۰����һ��
��һ������Ϊn �����Ԫ��{1,2,3,4,5,,6,7,8,9,10};��������Ҫ
�ҵ�Ԫ���е�7������ȡֵ��Ӧ�������±꣬��������һ��
���±�left,һ�����±�right������ĵ�һ���±��Ǵ�0��ʼ�ģ�
��ô���±����Ԫ�ظ���-1�����м��±�Ϊmid=��left+right��/2��
Ȼ��ÿ�β���֮��Ա��м��±�Ͳ��ҵ���������м��±����
���������Ͱ��м��±�-1��ֵ�����±꣬���С����+1��ֵ�����±ꡣ

*/
//
//int binary_search(int arr[],int key,int len )
//{
//	int left = 0;
//	int right = len - 1;
//	while (left<=right)
//	{
//		int mid =( left + right )/ 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	//�ҵ��˾ͷ����ҵ���λ���±�
//	//�Ҳ�������-1
//	//����arr���Σ�ʵ�ʴ��ݵĲ������鱾��
//	//��������ȥ���������Ԫ�ص�ַ
//	//���Ժ���Ҫ��������ĵĳ���ʱ����Ҫ������ȼ���á�
//	int arr[ ] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("������\n");
//	int ret =binary_search(arr,key,len);
//
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else printf("�ҵ��˷����±꣺%d\n", ret);
//	return 0;
//}



//void Add(int *num)
//{
//	(*num)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d \n", num);
//
//	Add(&num);
//	printf("%d \n", num);
//
//	Add(&num);
//	printf("%d \n", num);
//	return 0;
//}
//

/*������Ƕ�׵��ú���ʽ����*/
//��������Ƕ�׶��壬����Ƕ�׵���
//��ʽ���ʣ���һ�������ķ���ֵ������һ�������Ĳ���
//�о٣�printf("%d \n",strlen(arr));
//#include <string.h>
//int main()
//{
//	int a = 0;
//	char arr[] = "abcdefghijklmnopqrstuvwxyz";
//	printf("%d\n", strlen(arr));//��ʽ����
//	/*printf�ķ���ֵ�Ǵ�ӡ�ַ���*/
//	printf("%d\n", printf("%d"), printf("%d"), 43);
//	int b=scanf("%d", &a);
//	printf("%d", b);
//	return 0;
//}
#include "funtion.h"
#include "function4_text.h"
/*�����������Ͷ���*/
//int Add(int x, int y);//���������� һ�����ͷ�ļ���
////ֻ�Ǹ�֪һ����һ������������ȷ����û�����������
#pragma comment(lib,"function_4_text.lib")  // ���뾲̬��
int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	int d = add(a, b);
	printf("%d %d\n", c,d);
	return 0;
}
int Add(int x, int y)
{
	return x + y;
}