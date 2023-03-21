#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i =5)//=是赋值，相当于在循环中一直给i赋值5,5为真。所以会产生死循环
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

//switch语句default语句可以放在其中任意位置，不一定是放在结尾
//switch(c)  c必须是整型，不能为浮点型
//F11-逐语句
//F10-逐过程

//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:switch (y)
//          	{
//	          case 0:
//				  printf("first");
//				 
//			  case 1:
//				  printf("second");
//				  break;
//			  default: printf("hello");
//
//	         }
//	case 2:
//		printf("third");
//
//	}
//	return 0;
//}



//取最大值放在最前面 每次都是
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d %d", &a, &b, &c);
//	//调整顺序
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//输出
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//void As(int *x, int *y)
//{
//	if (*x < *y)
//	{
//		int tmp = *x;
//		*x = *y;
//		*y = tmp;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	As(&a,&b);
//	As(&a,&c);
//	As(&b,&c);
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int min= 0;
//	scanf("%d%d", &a, &b);//
//	min = a > b ? b : a;
//	while(1)
//	{
//		if ((a%min == 0) && (b%min== 0))
//		{
//			printf("最大公约数：%d \n", min);
//			break;
//		}
//		min--;
//
//	}
//	return 0;
//}



//辗转相除法求最大公约数
/*假设两个数 m n 
使t=m%n;
当t=0;时
n的值就为最大公约数
否则将n的值赋给m
t的值赋值给n;
继续t=m%n;
直到t=0;此时n的值即为最大公约数
*/
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	scanf("%d%d", &m, &n);
//
	/*while (1)
	{
		t = m % n;
		if (t == 0)
		{
			printf("%d\n", n);
			break;
		}
		else
		{
			n = t;
		}
	}
	*/
//	int tmp1 = m;
//	int tmp2 = n;
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数：%d", n);
//	printf("最小公倍数：%d", tmp1*tmp2 / n);
//	return 0;
//}

///*判断是否为闰年*/
////能被4整除，不能被100整除的是闰年
////能被400整除的是闰年
//int main()
//{
//	int y = 0;
//	printf("请输入年份：");
//	scanf("%d", &y);
//	if ((y % 4 == 0 && y % 100 != 0)||(y%400==0))
//	{
//		printf("%d年是闰年\n", y);
//	}
//	else printf("%d年不是闰年\n", y);
//
//	return 0;
//}

/*统计1000年到2000年的闰年并打印*/
//int main()
//{
//	int y = 0;
//	int count = 0;
//
//	for (y = 1000; y <= 2000; y++)
//	{
//		if ((y % 4==0&&y%100!=0)||( y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount：%d", count);
//	return 0;
//}

/*打印1-100之间素数*/
//素数判断：只能被1和他本身整除的数
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <=200 ; i++)
//	{
//		int j = 0;
//		int flag = 1;
//
//		for ( j=2; j<i;j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag==1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//			printf("\n%d\n", count);
//	return 0;
//}
//代码优化 
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//m=a*b a和b中一定至少有一个数字<=开平方的
//	//
//	for (i = 100; i < 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j+=2)//sqrt();求数据的开平方 头文件main.h
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d ", count);
//	return 0;
//}
/*goto语句*/
//跳转   注意：尽量不使用
//某些场合用的着：用以跳出多重嵌套，但只能在本函数 内跳出，不能跨函数。
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}
#include <string.h>
#include <stdlib.h>
//关机程序，只要运行电脑在一分钟内关机，如果输入“我是猪，就取消关机”
//windows命令提示符：shutdown -s -t 60//设置 60后关机          shutdown  -a//取消关机
//int main()
//{
//	//关机
//	//C语言提供了一个函数：system()-执行系统函数
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");//stdlib.h
//    while(1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)//两个字符串的比较是不能使用==的，应该使用strcmp:    string compare 返回值大于1表示前>后
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}










