#define   _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////1.址传递
////2.数组作为函数的参数
////3.函数的递归
//
////地址：在定义变量，数组，函数等等，系统会给你他们分配内存区域（地址）
////把这个数据放到这个地址的编号上
////&:取地址符 可得到地址编号 如：&a 得到a的地址编号 
////指针变量：存储地址的变量
//
////1.怎么定义一个变量来存储一个地址 -》指针变量
////2.怎么获取一个变量的地址 &
////3.怎么通过指针变量访问指针变量上所保存的地址内部的数据
//
////址传递能够通过形参改变实参的值
//
////函数的递归：在一个函数中重复的调用自己本身（自身调用自身）。
//
//
//
///*值传递*/
//void fun(int x)
//{
//	printf("%d\n", x);
//}
///*址传递*/
//void fun1(int *p1)
//{
//	printf("%d\n", *p1);//*:解引用 取内容
//	*p1 = 100;
//	printf("%d \n", *p1);
//
//}
///*数组作为函数的传递参数*/
//void fun2(int buff[ ],int n)
//{
//	for (int i=0; i < n; i++)
//	{
//		printf("%d ", buff[i]);
//	}
//	printf("\n");
//}
//
///*函数的递归*/
////void fun3()
////{
////	printf("1111\n");
////	fun3();
////}
//void fun4(  )//执行完之后一定会逆向执行，此函数输出11个0
//{
//	static int i = 10;
//	if (i != 0)
//	{
//		i--;
//		fun4();
//	}
//	printf("%d\n", i);
//}
//void fun5(int n)//输出1-10 
//{
//	if (n != 0)
//	{
//		fun5(n - 1);
//		printf("%d\n", n);
//
//	}
//}
//
//void  fun6(int n)
//{
//	if (n!= 0)
//	{
//		printf("%d", n % 10);
//		fun6(n /=10);
//	}
//}
////斐波那契数列：1,1,2,3,5,8,13,......第n个元素的值等于第n-1个元素值加n-2个元素值
////第50个元素
//int fun_fb(int n)
//{
//
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return fun_fb(n-1)+fun_fb(n-2);
// }
///*猴子吃桃*/
///*简介：猴子第一天摘下若干桃子，当即就吃了一半，还不过瘾
//又多吃了一个，第二天将剩下的吃掉了一半，又多吃了一个。以
//后每天早上都吃了前一天的一半加加多吃一个。到最后第十天，
//还想吃发现就只剩下一个桃子了，请问一共摘了多少桃子*/
//
/*nt houzi_tt(int day)
{
	if (day == 10)
	{
		return 1;
	}
	return (houzi_tt(day+1)+1)*2;
}*/
//
//void shuchu_1_10(int num)
//{
//	if (num != 0)
//	{
//		printf("%d ", num);
//		num--;
//		shuchu_1_10(num);
//	}
//}
//
//
//int main()
//{
//
//	fun(10);//直接将实参数值10传递给形参x;
//	int a = 10;
//	fun1(&a);
//
//	char b = 'a';
//	float c = 1.1f;
//	int * d = &a;//定义指针变量 
//
//	int arr1[10] = { 1,43,3,34,64,73,16,43,12 };
//	int arr2[5] = { 1,2,3,4,5 };
//	int arr3[8] = { 1,2,3,4,5,6,7,8 };
//	fun2(arr1, 10);
//	fun2(arr2, 5);
//	fun2(arr3, 8);
//
//	fun4();
//	fun5(10);
//	fun6(1234);
//	printf("\n");
//	int num = 10;
//	printf ("第%d个斐波那契数列值：%d\n",num,fun_fb(num));
//	printf("猴子第一天摘了%d个桃子\n", houzi_tt(1));
//	shuchu_1_10(10);
//	return 0;
//}
//
//
//函数的递归：大事化小   
#include <stdio.h>

//void out_split(unsigned int a)
//{
//	//unsigned int b = 0;
//	//b=a% 10;
//	//if (b != 0)
//	//{
//	//	out_split(a / 10);
//	//	printf("%d ", b);
//	//}
//
//
//	//优化：
//	if (a > 9)
//	{
//		out_split(a / 10);
//	}
//	printf("%d ", a% 10);
//}
//
//int main()
//{
//	unsigned int a = 0;
//	scanf("%u", &a);
//	out_split(a);
//	return 0;
//}

//递归方式实现库函数strlen的功能
//递归的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归不在继续。
//每次递归调用之后越来越接近这个限制条件。
//#include <string.h>
//int string_length(char arr[])
//{ 
//	/*int i = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//    } 
//	return i+1;*/
//	static int i = 0;
//	if (arr[i] != '\0')
//	{
//		i++;
//		string_length(arr);
//	}
//	return i;
//}
//
//int main()
//{
//	char arr[] = "fkdsjfkfjskjafk" ;
//	int len=string_length(arr);
//	printf("字符串长度为：%d \n", len);
//	return 0;
//}
//不允许创建临时变量
//int my_strlen(char *str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(++str);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	char arr[] = "bit";
//	printf("%d %d", my_strlen(arr),++a);
//	return 0;
//}
//求n的阶乘
//可以用迭代的方式也可以用递归的方式
//int n_fac(int x)
//{
//	if (x>1)
//	{
//		return x*n_fac(x-1);
//	}
//	else return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d的阶乘为：%d", n, n_fac(n));
//	return 0;
//}


//void test(int n)
//{
//	if (n < 10000)
//	{
//		text(n + 1);//栈溢出
//	}
//}
//int main( )
//{
//
//	text(1);
//	return 0;
//}


//内存：
//1.栈区：局部变量、函数的参数     每次函数的调用都要分配内存空间
//所以当递归的次数过多，需要分配的空间大于实际空间就会产生栈溢出。
//所以：1.不能死递归，都有跳出条件，每次递归都要逼近该条件。
//2.递归层数不能太深
//2.堆区：动态内存分配，malloc/free calloc realloc
//3.静态区：静态变量、全局变量


//汉诺塔：
//int main()
//{
//	int k = 0;
//	printf("%d ",  % 3);
//	return 0;
//}

//#include <stdio.h>
//
//int count = 1;
//// 因为传送过来的是字符串不是字符，所以形式参数要用char*而不是用char
//void hannuota(int n, char* a, char* b, char* c) {  // 盘子数，盘子原来所在柱子，借助的柱子，目的地所在柱子
//	if (n == 1) {
//		printf("%d: %s -> %s \n", count, a, c);  // 当n==1的时候，直接从柱子1移动到柱子3
//		count++;
//	}
//	else {
//		hannuota(n - 1, a, c, b);      // 第一步需要把 n-1 个盘子从 柱子1 借助 柱子3 移动到 柱子2
//		printf("%d: %s -> %s \n", count, a, c); // 第二步把 柱子1 剩下的最大的那个从 柱子1 移动到 柱子3
//		count++;
//		hannuota(n - 1, b, a, c);      // 第三步把 柱子2 中的 n-1 个盘子从 柱子2 借助 柱子1 移动到 柱子3
//	}
//}
//
//int main() {
//	int n = 0;
//	printf("请输入汉诺塔的盘子数：");
//	scanf("%d", &n);
//	hannuota(n, "柱子1", "柱子2", "柱子3");
//	return 0;
//}

//int houzi_tou(int d)
//{
//	if (d == 1)
//	{
//		return 1;
//	}
//	else return (houzi_tou(d - 1) + 1) * 2;
//}
//
//
//int main()
//{
//	int day = 10;
//	int day1 = 1;
//	int n = houzi_tou(day);
//	int m = houzi_tt(day1);
//	printf("%d %d", n,m);
//	return 0;
//}
//void hanno1(int n, char *a, char *b, char*c)
//{
//	if (n == 1)
//	{
//		printf("%s--->%s\n", a, c);
//    }
//	else
//	{
//		hanno1(n - 1, a, c, b);
//		printf("%s--->%s\n", a, c);
//		hanno1(n - 1, b, a, c);
//	}
//}
//int main()
//{
//	char a[] = "柱子1";
//	char b[] ="柱子2";
//	char  c[] ="柱子3";
//	int n = 0;
//	printf("请输入盘子的数量：");
//	scanf("%d", &n);
//	hanno1(n,a,b,c);
//	return 0;
//}

/*青蛙跳台阶*/
//int num_way(int n)
//{
//	if (n <= 2)
//		return n;
//	else return num_way(n - 1) + num_way(n - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入青蛙跳台阶数：");
//	scanf("%d", &n);
//	printf("共有%d种跳法",num_way(n));
//	return 0;
//}

/*计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值，打印出结果*/


//int main()
//{
//	float num =0;

//	int i= 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		num +=flag*(1.0/ i);
//		flag = -flag;
//	}
//	printf("%f\n", num);
//	return 0;
//}
/*求最大值*/
//int main()
//{
//	int arr[10] = { 1,2,3,35,5,6,7,8,9,10 };
//	int max = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if(arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d \n",max);
//	return 0;
//}

/*九九乘法表*/
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 10;i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t",j,i,i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//二分查找
//void maopao_px(int arr[],int len)
//{
//	for (int i = 0; i < len-1; i++)
//	{
//		for (int j=0;j<len-1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//		
//	}
//}
//int binary_search(int arr[],int n, int len)
//{
//	int x = 0;
//	int y = len - 1;
//	for(int i=0; i<len; i++)
//	{
//		int mid = (x + y) / 2;
//		if (arr[mid] > n)
//		{
//			y = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			x = mid + 1;
//		}
//		else if(arr[mid]==n)
//			return mid;
//	}
//	 return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,3,43,12,43,56,33,21,42 };
//	//找出特定的元素的下标
//	int n = 0;
//	printf("请输入需要查找的元素：");
//	scanf("%d", &n);
//	int len = sizeof(arr) / sizeof(arr[0]);
//	maopao_px(arr,len);
//	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	//{
//	//	printf("%d ",arr[i]);
//	//}
//	int flag=binary_search(arr,n,len);
//	if (flag == -1)
//		printf("找不到\n");
//	else
//	printf("%d元素的下标为%d", n, flag);
//	return 0;
//}


//判断是否为素数
//int judge_prime(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//	
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//	int num=judge_prime(n);
//	if (num == 0)
//	{
//		printf("%d不是素数\n", n);
//	}
//	else printf("%d是素数\n", n);
//	return 0;
//}

//
//int my_strlen(char arr[])
//{
//	int i = 0;
//	while (arr[i] !='\0')
//	{
//		i++;
//	}
//	return i;
//}
//void re_string(char *str)
//{
//	int len = my_strlen(str);
//	char temp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) > 1)
//		re_string(str + 1);
//	*(str+len-1) = temp;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	/*int len=my_string(arr);*/
//	re_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//
/*输入一个非负整数，计算组成它的数字之和*/
//int DigitSum(int n)
//{
//	if (n>9 )
//	{
//		return DigitSum(n / 10)+n%10;
//	}
//
//	else return n;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个非负整数：");
//	scanf("%d", &n);
//	printf("计算和：%d\n",DigitSum(n));
//	return 0;
//}

//编写一个函数实现n的k次方，递归方式
//库函数 pow(x,y);x为底数（base），y为指数（exponent）;头文件 math.c
double n_kpower(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k > 0)
		return n_kpower(n, k - 1)*n;
	else
		return 1.0/n_kpower(n, -k);
}
int main()
{
	int n = 0;
	int k = 0;
	printf("请输入一个数以及所求次方数：");
	scanf("%d %d", &n,&k);

	printf("%d^%d=%lf\n",n,k,n_kpower(n,k));
	return 0;
}








