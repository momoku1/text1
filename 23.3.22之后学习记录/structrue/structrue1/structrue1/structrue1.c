#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ʶ�ṹ��
//���ã���ʹ���䴴���µ����ͳ���
struct Student
{
	char name[20];//��Ա����
	int age;
	float score;
};
int main()
{
	struct Student s = { "����",20,80.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("������%s ���䣺%d �ɼ���%1.1f\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
	struct Student *ps = &s;
	printf("2��%s %d %1.1f\n", (*ps).name,(*ps).age,(*ps).score);

	printf("3��%s %d %1f\n", ps->name, ps->age, ps->score);//->����ǽṹ��ָ��������ұ߸�ָ���Ӧ�ĳ�Ա����
	return 0;
}