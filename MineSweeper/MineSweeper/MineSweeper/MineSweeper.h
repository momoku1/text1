#pragma once

//���õ�ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS  COL+2
#define mine_num 10
//��Ϸ����躯������
void Init_interface(char game_map[ROWS][COLS], int rows, int cols,char n);//��ʼ����Ϸ����
void SetMine(char mine[ROWS][COLS], int rows, int cols);//������
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS],int rows, int cols);//�Ų���


void print_interface(char game_map[ROWS][COLS], int rows, int cols);//��ӡ��Ϸ����