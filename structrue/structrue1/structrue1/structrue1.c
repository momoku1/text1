#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//初识结构体
//作用：可使用其创建新的类型出来
struct Student
{
	char name[20];//成员变量
	int age;
	float score;
};
int main()
{
	struct Student s = { "张三",20,80.5 };//结构体的创建和初始化
	printf("姓名：%s 年龄：%d 成绩：%1.1f\n", s.name, s.age, s.score);//结构体变量.成员变量
	struct Student *ps = &s;
	printf("2：%s %d %1.1f\n", (*ps).name,(*ps).age,(*ps).score);

	printf("3：%s %d %1f\n", ps->name, ps->age, ps->score);//->左边是结构体指针变量，右边该指针对应的成员变量
	return 0;
}