#define   _CRT_SECURE_NO_WARNINGS 1
/*自定义函数*/
//定义：函数的返回类型 函数名（参数）
//{
 //   函数体
//}
#include <stdio.h>
//int get_max(int a, int b)//传值调用
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
//	int max = get_max(a,b);//函数的调用
//	printf("max=%d\n", max);
//	return 0;
//}
/*传址调用*/
//void swap(int *x, int *y)//形参:在函数调用的时候才实例化（分配内存单元）。调用完毕后会销毁
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
//	printf("交换前：a=%d b=%d\n", a, b);
//	swap(&a, &b);//实参
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

/*整形有序数组的二分查找*/
/*二分查找：在多个元素中每一次都折半查找一次
设一个数组为n 里面的元素{1,2,3,4,5,,6,7,8,9,10};设我们需要
找到元素中的7。数组取值对应的是其下标，所以再设一个
左下标left,一个右下标right。数组的第一个下标是从0开始的，
那么右下标就是元素个数-1。设中间下标为mid=（left+right）/2。
然后每次查找之后对比中间下标和查找的数，如果中间下标大于
查找数，就把中间下标-1赋值给右下标，如果小于则+1赋值给左下标。

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
//	//找到了就返回找到的位的下标
//	//找不到返回-1
//	//数组arr传参，实际传递的不是数组本身
//	//仅仅传过去了数组的首元素地址
//	//所以函数要传递数组的的长度时，需要在外边先计算好。
//	int arr[ ] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("你是猪\n");
//	int ret =binary_search(arr,key,len);
//
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else printf("找到了返回下标：%d\n", ret);
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

/*函数的嵌套调用和链式访问*/
//函数不能嵌套定义，但能嵌套调用
//链式访问：把一个函数的返回值用作另一个函数的参数
//列举：printf("%d \n",strlen(arr));
//#include <string.h>
//int main()
//{
//	int a = 0;
//	char arr[] = "abcdefghijklmnopqrstuvwxyz";
//	printf("%d\n", strlen(arr));//链式访问
//	/*printf的返回值是打印字符数*/
//	printf("%d\n", printf("%d"), printf("%d"), 43);
//	int b=scanf("%d", &a);
//	printf("%d", b);
//	return 0;
//}
#include "funtion.h"
#include "function4_text.h"
/*函数的声明和定义*/
//int Add(int x, int y);//函数的声明 一般放在头文件中
////只是告知一下有一个函数，不能确定有没有这个函数。
#pragma comment(lib,"function_4_text.lib")  // 导入静态库
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