#define   _CRT_SECURE_NO_WARNINGS 1
//����ģ��ʵ���ַ�����ؿ⺯��
//��ϰ1��ģ��strlen�⺯��
//ʹ��1.const 2.assert
#include <stdio.h>
#include <assert.h>
//��׳��
//³����
//size_t   unsigned int 
//size_t my_strlen(const char *str)//��֤*str����ı�
//{
//	assert(str != NULL);//���� ��������ַ���ǿ�ָ��
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


//��ϰ2��ģ��strcmp�⺯��
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
//�Ż��汾1-���Ű汾
//int my_strcmp(const char *src,const char* des)
//{
//	assert(src!=NULL&&des!=NULL);
//	int ret=0;
//	while ((ret=*(unsigned char *)src-*(unsigned char *)des)== 0&&*des)//ע�����˳��
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

//_cdecl//��������Լ���������˺������ò�����һЩϸ�ڡ�
//����������ࣺ
//1.�����ʹ���
//ֱ�ӿ�������ʾ��˫������������⡣��ƾ����Ϳ��Ը㶨�������˵�򵥡�
//2.�����ʹ���
//��������ʾ��Ϣ����Ҫ�ڴ������ҵ�������Ϣ�ı�ʶ����Ȼ��λ�������ڡ�һ���Ǳ�ʶ���������ڣ���ƴд����
//3.����ʱ����
//�������ԣ��𲽶�λ���⣬���ѽ����
//extern ---�����ⲿ����
