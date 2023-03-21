#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char str[] = "hello bit";
//	//str数组存放=hello bit\0  10个字符
//	printf("%d %d\n", sizeof(str), strlen(str));
//	//sizeof操作符求的整个数组长度包含\0     10
//	//strlen函数 找\0之前出现的字符串长度   9
//	return 0;
//}

//int main()
//{
//	char acx[] = "abcdefg";
//	char acy[] = { 'a','b','c','d','e','f','g' };
//	int max = strcmp(acx, acy);//比较的是对应字符串 字符的大小
//	printf("%d \n", max);
//	return 0;
//}
//void bubble_px(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,12,2,1,3,1 };
//	bubble_px(arr, 10);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//void init(int arr[], int n)//1
//{
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);//2
//}
//void reverse(int arr[], int n)
//{
//	for (int i = 0; i < (n / 2); i++)
//	{
//		int temp = arr[i];
//		arr[i] = arr[n-1-i];
//		arr[n-1-i] = temp;
//	}
//}
//
//int main()
//{
//	int arr[11] = { 1,2,3,4,5,6,7,8,9,10,11};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//
//	//init(arr, sz);
//	print(arr,sz);
//	return 0;
//}

//后续作业 三子棋  、扫雷




