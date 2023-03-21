#define   _CRT_SECURE_NO_WARNINGS 1
#include "operator2.h"
//&取地址操作符
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int *pa = &a;//pa用来存放地址的-pa就是一个指针变量
//	*pa = 20;//-*解引用操作符   ——间接访问操作符
//	printf("%d\n", a);
//	return 0;
//}

//( 类型 )----强制类型转换
//int main()
//{
//	int a = (int)3.14;
//	return 0;
//}

//关系操作符：>= <= ==  ！=
//需要注意的是 字符串的有些操作不能单纯用关系操作符 如比较两个字符串的大小 用strcmp



//sizeof   数组
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//指针变量 32位下是4  64位是8
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}


//逻辑操作符：&& || 
//
//int main()
//{
//	int a = 2; 
//	int b = 1;
//	if (a&&b)
//	{
//		printf("hello\n");
//	}
//	return 0;
//}


////360笔试题
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a ++ &&++b && d++;
//	i = a++ ||++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//
//	return 0;
//}

//条件操作符（三目操作符）：b=a>b？a:b   
//逗号操作符：,  用逗号隔开的一串叫做逗号表达式：最低优先级
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//逗号表达式 从左到右依次计算，但是整个表达式的结果是最后一个表达式的结果
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);//结果d=10;
//	printf("%d\n", d);
//	return 0;
//}
//逗号表达式相关的例子：

//int main()
//{
//	//1.
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	//c的值？
//	//13
//	printf("%d\n", c);
//	
//	//2.
//	int d = 0;
//	if (a = b + 1, c = a / 2, d > 0)
//
//		//3.
//	a = get_val();
//	count_val(a);
//	while (a > 0)
//	{
//		a = get_val;
//		count_val(a);
//	}
//	//上述改成逗号表达式
//	while (a = get_val(), count_val(a), a > 0)
//	{
//
//	}
//
//	return 0;
//}
//



