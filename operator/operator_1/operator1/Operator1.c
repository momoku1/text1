#define   _CRT_SECURE_NO_WARNINGS 1
//操作符
/*分类：
1.算数操作符： + - *  / %   
注意：%两边必须是整数
2.移位操作符：>>     <<     左移是左边丢弃，右边补零  
右移是:
				1.算数右移：右边丢弃，左边补原符号位   通常采用算数右移补	
				2.逻辑右移：右边丢弃，左边补0；

3.位操作符：& ,|, ^    &：都为1才为1     |：其中一个为1就为1     ^：相异为1 相同为0
注意：位操作符的操作数必须是整数
4.赋值操作符：=   以及一系列的符合赋值操作符
5.单目操作符：！（逻辑反） -    +      &   sizeof:（计算和统计所占空间(内存)大小，单位字节）  
注意：sizeof计算变量的空间时，可以省略括号。如：sizeof a   //证明sizeof是个操作符，而非函数
注意：数组除了数组名剩下部分就是类型   如：sizeof（int [10]）;
//	int a = 10;
//	short s = 5;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);

结果：2      5
  ------------     ++    -- 后置++先使用再++，前置++  先++再使用  *
  6.
大变量放到小的空间会截断  空间大小不会变   sizeof中放的表达式是不参与运算的
原因：.c文件称为源文件  .exe可执行文件  前者到后者会进行编译->链接->运行几个步骤
sizeof中的表达式是在运行阶段执行，而sizeof是在编译阶段就执行了
~（对一个数的二进制位按位取反）
*/
//整数的二进制形式有三种：1.原码，2.反码，3，补码
//原码：直接根据数值写出的二进制序列
//反码：原码的符号位不变，其他位按位取反就是反码
//补码：反码+1，就是补码   
//注意:负数在内存当中是以补码的形式存储    



//int main()
//{
//	int a = 3 / 5;//整数除法
//
//	float b = 6.0f / 5.0f;//要得到小数 需保证至少有一个是浮点数
//	int  c = 2;
//	int d = c << 1;
//	printf("%d\n", a);
//	printf("%f\n", b);
//	printf("%d \n", d);
//	return 0;
//}


//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	//当前的右移操作符使用的是算数右移   ：右边舍弃，左边补原符号位
//	printf("b=%d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int e = a | b;
//	int d = a ^ b;
//	printf("c=%d ", c);
//	printf("e=%d ", e);
//	printf("d=%d  ", d);
//	return 0;
//}

//面试题1：将a和b的值交换，不能使用第三个变量
/*方法一*/
//此方法如果a和b过大，可能会溢出  如：a和b均大于int类型所能表示的最大值的一半，那么他们的和必定溢出

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}
/*方法二：三次异或*/
//因为没有产生进位所以不会溢出
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;//定a与b异或的值为密码
//	b = a ^ b;//当密码与原来的b异或就可以翻译出原来的a
//	a = a ^ b;//当密码与原来的a异或就可以f防溢出原来的b
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//	
//}
//一个数两次异或另一个数，结果为原来的值。
//a^a=0;
//a^0=a;
//int main()
//{
//	int a = 5;
//	int b = 3;
//	a = a ^ b^b;
//	printf("a=%d ", a);
//
//}
//#include <stdlib.h>
//#define LEN 32

//void carry_bit(int two_arr[],int len,int i)
//{
//	
//	//if (i < len)
//	//{
//	//	two_arr[i] += 1;
//	//	if (two_arr[i] == 2)
//	//	{
//	//		two_arr[i] == 0;
//	//		carry_bit(two_arr, len, i++);
//	//	}
//	//}
//	//else return;
//	while (i < len)
//	{
//		two_arr[i] += 1;
//		if (two_arr[i]==2)
//		{
//			two_arr[i] = 0;
//			i = i + 1;
//		}
//		else break;
//	}
//
//}
//
//int count_one(int two_arr[], int  len,int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = len-1; i>=0; i--)
//	{
//		if (n > 0)
//		{
//			printf("%d ", two_arr[i]);
//			if (two_arr[i] == 1)
//			{
//				count++;
//			}
//		}
//		
//		else if(n < 0)
//		{
//			if (two_arr[i] ==0 )
//			{
//				two_arr[i] = 1;
//				
//			}
//			else if (two_arr[i] == 1)
//			{
//				two_arr[i] =0;
//			}
//			if (i == 0)
//			{
//				carry_bit(two_arr,LEN,i);
//		   }
//			printf("%d ", two_arr[i]);
//		 
//		}
//
//	}
//	printf("\n");
//	return count;
//}
//
//
////练习：编写代码实现:求一个整数存储在内存中的二进制中1的个数
//int main()
//{
//	int two_arr[LEN] = { 0 };
//	int n = 0;
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//	//十进制转换为二进制
//
//	change10_2(n,two_arr);
//	num=count_one(two_arr,LEN,n);
//	printf("%d\n", num);
//	return 0;
//}



//按位&1结果为1，那么对应的二进制位就是1
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int b = 0;
//	int count = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	while (i<32)
//	{
//		b = a>>i & 1;
//		if ( b== 1)
//		{
//			count++;
//		}
//		i++;
//	}
//	printf("%d \n", count);
//	return 0;
//}
//#include "operator.h"
//int main()
//{
//	int two_arr[32] = { 0 };
//	int a = 13;
//	//00000000000000000000000000001101
//	//将1置0，将0 置1
//	//异或上1即可实现
//	int i = 0;
//	while (i < 31)
//	{
//		a = a ^ (1 << i);
//		i++;
//	}
//	change10_2(a, two_arr);//十进制转二进制
//	for (int j = 31; j>=0 ; j--)
//	{
//		printf("%d ", two_arr[j]);
//	}
//	printf("\n");
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	short s = 5;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//	return 0;
//}


//int main()
//{
//	int a = 13;
//	//把a的二进制中的第五位 置成1
//	a = a | (1 << 4);
//	printf("a=%d\n",a);//29
//	//把a的二进制中的第五位  置成0
//	a = a & ~(1 << 5);
//	printf("a=%d\n", a);//13
//	//00000000000000000000000000001101
//	//00000000000000000000000000010000
//	//00000000000000000000000000011101
//	//
//	//1<<4
//	//00000000000000000000000000000001
//
//	//00000000000000000000000000011101//
//	//11111111111111111111111111101111//按位取反
//	//00000000000000000000000000010000//1左移4位
//
//	return 0;
//}

int main()
{
	int a = 10;
	printf("%p\n", &a);
	int *pa = &a;
	*pa=20://解引用 —间接访问
	return 0;
}