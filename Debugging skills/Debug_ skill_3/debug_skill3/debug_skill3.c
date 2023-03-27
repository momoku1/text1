#define   _CRT_SECURE_NO_WARNINGS 1
//调试模拟实现字符串相关库函数
//练习1：模仿strlen库函数
//使用1.const 2.assert
#include <stdio.h>
#include <assert.h>
//健壮性
//鲁棒性
//size_t   unsigned int 
//size_t my_strlen(const char *str)//保证*str不会改变
//{
//	assert(str != NULL);//断言 传过来地址不是空指针
//	size_t count=0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "abcdefghijklmnopqrstuvwxyz";
//	printf("%d\n", my_strlen(ch));
//	return 0;
//}


//练习2：模仿strcmp库函数
#include <stdio.h>
#include <assert.h>
#include <string.h>
//int my_strcmp(const char *str1,const char* str2)
//{
//	assert(str1!=NULL&&str2!=NULL);
//	while (*str1 != '\0'|| *str2!= '\0')
//	{
//		if (*str1 > *str2)
//		{
//			return 1;
//		}
//		else if (*str1 < *str2)
//		{
//			return -1;
//		}
//		str1++;
//		str2++;
//	}
//	return 0;
//}
//优化版本1-最优版本
//int my_strcmp(const char *src,const char* des)
//{
//	assert(src!=NULL&&des!=NULL);
//	int ret=0;
//	while ((ret=*(unsigned char *)src-*(unsigned char *)des)== 0&&*des)//注意计算顺序
//	{
//		++src;
//		++des;
//	}
//	return ((-ret) < 0) - (ret < 0);//
//}
//int main()
//{
//	char ch1[ ] = "abcdefgh";
//	char ch2[ ] = "abcdefg";
//	printf("%d %d\n",my_strcmp(ch1, ch2),strcmp(ch1,ch2));
//	return 0;
//}

//_cdecl//函数调用约定，决定了函数调用参数的一些细节。
//常见错误分类：
//1.编译型错误
//直接看错误提示（双击），解决问题。或凭经验就可以搞定，相对来说简单。
//2.链接型错误
//看错误提示信息，主要在代码中找到错误信息的标识符，然后定位问题所在。一般是标识符名不存在，或拼写错误。
//3.运行时错误
//借助调试，逐步定位问题，最难解决。
//extern ---声明外部函数
