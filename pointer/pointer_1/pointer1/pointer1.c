#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ʼָ�룺
//�ڴ棺
/*1.�ڴ���ô��ŵģ�
    2.һ���������ڴ浥Ԫ���Ŀռ䣿
	32λ-32����ַ��-������-ͨ��-1/0
	���ź�ת����������Ϣ 
	2^32���ڴ浥Ԫ
  1��byte����8��bit
   1��byte����1���ڴ浥Ԫ  һ���ڴ浥Ԫ��һ����ַ
*/
//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ�-4���ֽ�int��ʡ����unsigned��
//	//&aʱȡ��ֻ�ǵ�һ���ֽڵĵ�ַ
//	long int c = 0;
//	char d = 0;
//	int *pa;
//	printf("%d\n", sizeof(d));
//	printf("%p\n", &a);//%pר�Ŵ�ӡ��ַ�ĸ�ʽ��
//	pa = &a;
//	printf("%d",*pa);
//	return 0;
//}
int main()
{
	printf("%d\n", sizeof(char *));
	printf("%d\n", sizeof(short *));
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(long *));
	printf("%d\n", sizeof(long long *));
	printf("%d\n", sizeof(float *));
	printf("%d\n", sizeof(double *));

	/*ָ��Ĵ�С��ͬ��Ϊʲô��
	    ��Ϊ��������ŵ�ַ�ģ�
		ָ����Ҫ���Ŀռ䣬
		ȡ���ڵ�ַ�洢��Ҫ���Ŀռ�*/

	return 0;

}