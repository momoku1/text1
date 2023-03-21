#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//函数：理解为功能的容器
//函数定义的基本格式：
/*
返回值类型 函数名（形参列表）
{
    函数体；
}


函数值类型就是基本的数据类型
函数名 ：就是一个标识符，符合规则合和规范
如果需要返回一个值出去那么返回值类型这里，通过return把值返回出去
如果不需要，那么就在返回值类型这里就用void
*/


void Two()//九九乘法表
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <=i; j++)
		{
			printf("%d*%d=%d\t", j, i, j*i);
		}
		printf("\n");
	}
}

/*形参列表*/
//形式参考的变量，在调用这个函数的时候，
//需要用到什么数据，就可以用形参来表示

/*实参列表：函数调用的时候会把实参传递给形参，调用处使用，对应位置进行传递*/
//函数内部的变量
//局部变量：作用域在一定的域内才能被使用的变量,出了自己的作用域会释放掉。
//全局变量：函数的外面定义的变量，作用域在整个程序，在程序结束时才会被释放。
//注意的点：全局变量和局部变量时允许重名的但是使用这个同名变量的时候，使用的是最近的一个（就近原则）。

//int x1;// 如果没有给全局变量进行赋值，那么系统自动默认为0。
//静态变量：静态变量只会被定义一次，不会被重复定义。

//函数的声明：先说明函数，类型说明符 函数名（实参）：
//列举：声明：void fun_x1( );   定义：void fun_x1( ) {};
//BUG: 一个无法解析的命令，意思是函数只声明没定义。



int Three(int a, int b)
{

	return a+b;
}
int Four()
{
	return 0;//返回一个数据 执行这一句会从这句结束函数
	int x = 0;

}
int Five(int x, int y )
{
	int num = 0;

	num = x + y;
	return num;
}
int six(int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
void maopao_px(int arr[],int len)//冒泡排序
{
	for (int i=0 ; i <len - 1; i++)
	{
		for (int j=0; j <len-1-i; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				int tem=0;
				tem = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tem;
			}

		}
	}
}

void add()
{
	int a;
}



int main()
{ 
	for (int i = 0; i < 10; i++)
	{
		int a = 10;
		a++;
		printf("%d\n", a);

	}	//局部变量出了自己的作用域会被释放掉，此处a的作用域在花括号内
	char arr_zf[] = "abcdefghijklmnopqrstuvwxyz";
	int arr[10] = { 2,3,4,8,34,12,43,11,91,10 };
	maopao_px(arr,10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	printf("%d\n",strlen(arr_zf));
	Two();
	printf("\n");

	int num = 0;
	num=Five(10, 10);
	printf("%d \n",num);
	
	six(10, 10);
	return 0;//出现在函数中，执行这一句会从这句结束
}
 