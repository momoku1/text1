#pragma once

//ע�ⵥ���ַ���' ',�ַ�����""
/*��Ϸ��صĺ�������*/
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Init_board(char arr[ROW][COL],int row,int col);//��ʼ������
void Print_board(char arr[ROW][COL], int row, int col);//��ӡ����
void player_walk(char arr[ROW][COL], int row, int col);//�����
void computer_walk(char arr[ROW][COL], int row, int col);//������
//��Ϸ���й��������������
/*
1.���Ӯ-----*
2.����Ӯ-----#
3.ƽ��------Q
4.����------C
*/
char Is_win(char arr[ROW][COL], int row, int col);//�ж�˭Ӯ��
