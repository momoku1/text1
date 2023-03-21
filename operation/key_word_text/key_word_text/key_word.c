#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr[] = "abc";
//	printf("%d\n", strlen(arr));//输出随机值
//	return 0;
//}


//c99标准中引用一个概念：变长数组
//支持数组创建的时候，用变量指定大小的，但是这个数组不能初始化。
//int main()
//{
//	int n = 10;
//	int arr[n] = {0};//数组定义的时候大小必须为常量值，而n为变量
//	return 0;
//}

//int Max(int a,int b)
//{
//	if (a > b)
//		return a;
//	else 
//		return b;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//关键字不能自己定义 也不能用作变量名

//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a=2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", sum(a));
//	}
//	return 0;
//}
//#define ROW 6
//#define COL 12

//int main()
//{
//	//int arr[ROW][COL] = {0};
//	for (int i = 0; i < 6; i++)
//	{
//		if (i < 2)
//		{
//			printf("     **     \n");
//		}
//		else if ( i>=2&&i<4)
//		{
//			printf("************\n");
//		}
//		else
//			printf("    * *    \n");
//	}
//	return 0;
//}




int main()
{
	int x=0;
	while (1)
	{
		printf("请输入你想计算的数：");
		scanf("%d", &x);
		if (x % 5 == 0)
		{
			printf("YES\n");
		}
		else printf("NO\n");
		
	}
	return 0;
}