#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//初始指针：
//内存：
/*1.内存怎么编号的？
    2.一个这样的内存单元多大的空间？
	32位-32根地址线-物理线-通电-1/0
	电信号转换成数字信息 
	2^32个内存单元
  1个byte等于8个bit
   1个byte就是1个内存单元  一个内存单元编一个地址
*/
//int main()
//{
//	int a = 10;//a在内存中要分配空间-4个字节int是省略了unsigned的
//	//&a时取得只是第一个字节的地址
//	long int c = 0;
//	char d = 0;
//	int *pa;
//	printf("%d\n", sizeof(d));
//	printf("%p\n", &a);//%p专门打印地址的格式符
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

	/*指针的大小形同，为什么？
	    因为是用来存放地址的！
		指针需要多大的空间，
		取决于地址存储需要多大的空间*/

	return 0;

}