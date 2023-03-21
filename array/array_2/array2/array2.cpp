#define   _CRT_SECURE_NO_WARNINGS 1
/*一维数组*/
//数组的长度定义的时候必须是常量
//在c99语法中，支持使用变量作为数组的长度，这样的数组称为变长数组。
//#define yu 10
//int main()
//{
//	//int arr[yu];
//	//char ch[yu];
//	//int arr1[10] = { 1,2,3,4,5,6,7,8 };//完全初始化
//	//int arr2[] = { 1,2,3,4,5 };
//	//char ch1[] = { 'a','b','c','d','e' ,'\0'};
//	//char ch2[] = "abcde" ;
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//完全初始化
//	int arr1[3][4] = { 1,2,3,4,5,6 };//不完全初始化，后面补0 另字符数组后面补'\0'
//	int arr2[3][4] = { {1,2},{3,4},{5,6} };//初始化方式2
//	int arr3[][3] = {1,2,3,4,5};//初始化方式3 注意：初始化时，列和初始值必须含有具体的值。
//	
//	return 0;
//}
/*二维数组在数组中的存储*/
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = {
//    {1,2,3,4},
//	{5,6,7,8},
//	{9,10,11,12}
//	};
//	
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);//在行内部连续，在行与行之间也是连续的。
//		}
//	}
//	int *p=&arr[0][0];
//	for (int i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//注意：数组名是数组首元素的地址
//但是有2个例外：1.sizeof(数组名)---数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名---数组名表示整个数组--取出的是整个数组的地址     -------数组的地址和数组首元素的地址相同。
//#include <stdio.h>
//void bubble_sort(int arr[],int len)//形参arr本质上是指针  所以不能直接通过它在函数体内计算其数组的大小。
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
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
//	int arr[] = { 9,8,7,6,5,4,1,2,3,0 };
////顺序排序
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
