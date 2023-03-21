#define  _CRT_SECURE_NO_WARNINGS
//数组的应用

#include <stdio.h>
#include <Windows.h>
#include  <conio.h>
#include <string.h>
//#define sz 10

//数组的大小必须是一个常量或者是一个字符

///*应用1：冒泡排序法*/
//void maopao_px(int arr[])                                              
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[i];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
/*选	择排序*/
/*插入排序*/
/*归并排序*/
/*快速排序*/

/*主函数*/
//int main()
//{
//	int i = 0;
//	int arr[sz] = {1,5,7,9,10,6,7,8,9,10};
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	maopao_px(arr);//调用冒泡排序函数
//	printf("排序结果:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}	
//	for (int x=0; x<10; x++ )
//	{
//		printf("\n");
//		printf("地址%d:%p\n",x,&arr[x]);
//	 } 
//	return 0;
	 
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//int MaxSize = 10;
//	//int len = 1;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("%d\n", arr[i]);
//	//}
//	int arr[10] = {0};
//	int MaxSize = 10;
//	int len = 0;
//	int x=0;
//	while (1)
//	{
//		scanf_s("%d",&x);
//		switch (x)
//		{
//		case 1:
//			if (len >= MaxSize)
//			{
//				printf("数组已经存满了，不能再放入数据到数组中\n");
//				break;
//			}
//			printf("请输入一个整数，存放在arr数组中: \n");
//			int num=0;
//			scanf_s("%d",&num);
//			arr[len] = num;
//			len++;
//			break;
//		case 2:
//			printf("---------------------------\n");
//			printf("当前已存储数据：\n");
//			for (int i = 0; i < len; i++)
//			{
//				printf("%d\t",arr[i]);
//				if (!((i +1)% 2))
//				{
//					printf("\n");
//				}
//			}
//			printf("\n------------------------\n");
//			break;
//		case 3:
//			return 0;
//			break;
//
//		}
//	}
//
//}





////二维数组定义：类型说明符 数组名[ 数组大小][ 数组大小]   行 列
////二维数组的初始化：{}
///*具体定义*/
//	int arr[2][9] = {
//                             {1,2,3,4,5,6,7,8,9},
//	                         {9,8,7,6,5,4,3,2,1};
//                          }
//	int arr1[2][9] = {1,2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2,1};
//	//赋值是一行一行的赋值
//	int arr2[2][9] = { { 1,2,3,4 }, {4,3,2,1} };
//	//没有赋值的部分系统默认为0 
//   //注意：赋值的时候是一行一行赋值的
//	int arr6[][3] = {
//		                      1,2,3,
//							  4,5,6,
//							  7,8,9,
//							  10
//	                      };
//	/*错误定义*/
//
//	int arr3[2][] ;//X
//三维数组
//int arr3[2][4][3] = {
//		{
//			{1,2,3},
//			{4,4,5},
//			{3,2,3},
//			{10}
//		},
//		{
//			{1,2,3},
//			{4,4,5},
//			{3,6,3},
//			{10}
//		}
//};
//int main()
//{
	//int arr3[2][4][3] = {
	//	{
	//		{1,2,3},
	//		{4,4,5},
	//		{3,2,3},
	//		{10}
	//	},
	//	{
	//		{1,2,3},
	//		{4,4,5},
	//		{3,6,3},
	//		{10}
	//	}
	//};
	////四维数组
	//int arr4[2][2][4][3] = {
	//		1,2,3,
	//		4,4,5,
	//		3,2,3,
	//		10,

	//	    1,2,3,
	//		4,4,5,
	//		3,6,3,
	//		10,
	//

	//		1,2,3,
	//		4,4,5,
	//		3,2,3,
	//		10,

	//		1,2,3,
	//		4,4,5,
	//		3,6,3,
	//		10
	//};
	///*int arr4[2][2][4][3] = {
	//{
	//	{
	//		{1,2,3},
	//		{4,4,5},
	//		{3,2,3},
	//		{10}
	//	},
	//	{
	//		{1,2,3},
	//		{4,4,5},
	//		{3,6,3},
	//		{10}
	//	}
	//},
	//{
	//	{
	//		{1,2,3},
	//		{4,4,5},
	//		{3,2,3},
	//		{10}
	//	},
	//	{
	//		{1,2,3},
	//		{4,4,5},
	//		{3,6,3},
	//		{10}
	//	}
	//}
	//};*/




	//int arr[3][4] = { { 1,2,3,4 },
	//						 { 3,4,5,6 },
	//						 { 5,6,7,8 } };

	//int arr1[][4] = { 1,2,3,4,3,4,5,6,5,6,7,8 };
	//printf("输出数组arr：\n");
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		printf("%d ", arr1[i][j]);

	//	}
	//	printf("\n");
	//}
	//printf("输三维数组arr3:\n");
	//for (int a = 0; a < 2; a++)
	//{
	//	for (int b = 0; b < 4; b++)
	//	{
	//		for (int c = 0; c < 3; c++)
	//		{
	//			printf("%d\t", arr3[a][b][c]);
	//		}
	//		printf("\n");
	//	}
	//	printf("\n");
	//}


	//printf("输出四维数组:\n");
	//for (int w=0;w<2;w++)
	//{
	//	for (int x = 0; x < 2; x++)
	//	{
	//		for (int y = 0; y < 4; y++)
	//		{
	//			for (int z = 0; z < 3; z++)
	//			{
	//				printf("%d\t ", arr4[w][x][y][z]);
	//			}
	//			printf("\n");
	//		}
	//		printf("\n");
	//	}
	//	printf("\n");
 //   }


	//return 0;
/*推箱子*/
//1表示墙，0表示空地，2表示人，3表示箱子，4表示目的地
//	 int arr[5][5] = {
//		1,1,1,1,1,
//		1,0,0,0,1,
//		1,0,2,4,1,
//		1,0,0,3,1,
//		1,1,1,1,1,
//     };
//	 int x = 0, y = 0;
//	 while (1)
//	 {
//		 system("cls");//清除控制台里的内容
//		 for (int i = 0; i < 5; i++)
//		 {
//			 for (int j = 0; j < 5; j++)
//			 {
//				 if (arr[i][j] == 2)
//				 {
//					 x = i;
//					 y = j;
//				 }
//			 }
//		 }
//		 for (int i = 0; i < 5; i++)
//		 { 
//			 for (int j = 0; j < 5; j++)
//			 {
//				 printf("%d\t", arr[i][j]);
//			 }
//			 printf("\n");
//		 }
//
//		 switch (_getch())//从键盘获取一个字符
//		 {
//		    case 's':
//				 if (arr[x + 1][y] == 0)
//				 {
//					 arr[x + 1][y] += 2;//把下一步空的地方+2,变成人
//					 arr[x][y] -= 2;//原位置变成空地-2
//				 }
//			 break;
//			case 'w':
//				if (arr[x - 1][y]==0)
//				{
//					arr[x - 1][y] += 2;
//					arr[x][y] -= 2;
//				}
//				break;
//			case 'a':
//				if (arr[x][y - 1] == 0)
//				{
//					arr[x][y - 1] += 2;
//					arr[x][y] -= 2;
//				}
//				break;
//			case 'd':
//				if (arr[x][y + 1] == 0)
//				{
//					arr[x][y + 1] += 2;
//					arr[x][y] -= 2;
//				}
//				break;
//		 } 
//	 }
//	
//	 
//	 return 0;
//}

/*字符数组*/
//定义：
//注意：用字符串给数组赋值，不需要花括号，但要加双引号.
//%s用以输出字符串 输出到\0就结束。
//0数据对应转义字符'\0' 
//每个字符串的结尾都要有一个\0表示字符串的结束。
int main()
{
	//int arr[10];
	//char str[10];//字符数组
	//str[0] = 'a';
	//str[1] = 'b';//赋值
	//printf("%c\n", str[1]);

	//char str1[10] = "abcdefg";
	//
	//printf("%s\n", str1);
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%c", str1[i]);
	//}
	//printf("\n");
	//char str2[10] ;
	//str2[0] = 'a';
	//str2[1] = 'b';
	//str2[2] = '\0';//表示字符串结束了

	///*printf("\n%s\n", str2);*/
	//scanf("%s",str2);//输入字符串不需要加&符号
	//printf("%s\n", str2);
	////中文也是字符  一个汉字占两个字节
 //   char str3[10]="教主";
	//char str4[ ] = "好";
	//char str5[10] = "abc";
	//printf("%s\n", str4);
	//printf("%cABC", str5[3]);//输出'\0'就是空格 所以在输入的时候，输入空格后面的数据就不会存入。

	//gets(str5);//获取字符串
	//puts(str5);//输出字符串

    //char  str6[3][10]=
//	{
//		{"张三"},
//	    {"李四"},
//	    {"王五"}
//	};
//	printf("%s", str6[0]);//
//

	//strcmp 用来比较两个字符串   头文件string.h
	//比较完之后 返回一个结果 
	//0表示相等
    // >0表示   str>str1
	//<0表示    str<str1
	//只比较不相等的第一个字符
	//char str[10] = "zaaa";
	//char str1[10] = "aaya";
	//int x = 0;
	//x=strcmp(str, str1);
	//if (x == 0)
	//{
	//	printf("相等\n");
	//}
	//else if(x<0)
	//{
	//	printf("str小于str1\n");

	//}
	//else printf("str大于str1\n");

	//strlen:求字符串的有效长度 \0不算有效长度
	//sizeof 求得是类型大小
	//char str[10] = "abc";
	//printf("%d\n", strlen(str));
	
	//strcat:字符串拼接函数 
	//注意：拼接时候不能超过定义的空间大小
	//char str[10] = "aaaa";
	//char str1[10] = "bbbb";
	//strcat(str, str1);//把str1拼接到str末尾   aaaabbbbb
	//printf("%s\n", str);

	//strcpy:字符串拷贝函数
	char str[10] = "abc";
	char str1[10] = "dcf";
	strcpy(str, str1);//把str1的值复制给str  整个重新赋值
	printf("%s",str);




	return 0;
}
