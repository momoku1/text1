#define   _CRT_SECURE_NO_WARNINGS 1
#include "oprator3.h"
//下标引用、函数调用和结构成员
/*1.[ ]下标引用操作符
     操作数：一个数组+一个索引值
	 int arr[10];
	 arr[9]=10;//下标引用操作符
	 [ ]的两个操作数是arr和9
*/
/*2.( )函数调用操作符 接受一个或者多个
操作数：第一个操作数是数组名，剩余操
作数就是传递给函数的参数。

*/
/*结构成员访问操作符
结构体
//  .
//->
*/
//struct Book
//{
//	char title[20];//书名
//	char id[20];//书号
//	float price;//价格
//};
//int main()
//{
//	int num = 10;
//	struct Book b = { "C语言","C20230215",59.9 };//定义结构体变量并进行初始化
//	struct Book *pb = &b;
//	//printf("书名：%s\n", b.title);//.操作符可以找出结构体成员   结构体变量.成员名
//	//printf("书号：%s\n", b.id);
//	//printf("定价：%.1f\n", b.price);
//
//	//printf("书名：%s\n", (*pb).title);//.操作符可以找出结构体成员   结构体变量.成员名
//	//printf("书号：%s\n",(*pb).id);
//	//printf("定价：%.1f\n", (*pb).price);
//         
//	printf("书名：%s\n", pb->title);//->操作符可以通过结构体指针指向结构体变量   指针变量->成员名
//	printf("书号：%s\n", pb->id);
//	printf("定价：%.1f\n", pb->price );
//	 
//
//	return 0;
//}

//表达式求值
//隐式类转换 c的整型算数运算总是至少以缺省整型类型的精度进行的
//为了获得这个精度，表达式中的字符和短整型操作数在使用之前被转换为普通整型，这种转换称为
//整型提升 
//列举：实例1 
//char a,b,c;
//a=b+c;//b和c的值被提升为普通整型，然后再执行加法运算。加法运算完成后，结果被截断，然后再存储到a中
//整型提升的意义：
//表达式的整型运算要在CPU的相应运算器件内执行，CPU内整型运算器（ALU）的操作数的字节长度
//一半就是int的字节长度，同时也是CUP的通用寄存器的长度。
//因此，即使两个char型的相加，在CUP执行的时实际上也要先转换为CPU内整型操作数的标准长度。
//通用CPU是难以直接实现两个8比特的字节直接相加运算（虽然机器指令中可能有这种字节）
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a + b * 7;
//
//
//	return 0;
//}
//

int main()
{
	char a = 3;
	char b = 127;//有符号  按照符号位来提升
	//char c1=-1；   整型提升时候，高位补充符号位，即1 。提升结果：111111111111111111111111

	char c = a + b;
	printf("%d\n", c);
	return 0;
}