#pragma once

//引用的头文件
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS  COL+2
#define mine_num 10
//游戏相关设函数声明
void Init_interface(char game_map[ROWS][COLS], int rows, int cols,char n);//初始化游戏界面
void SetMine(char mine[ROWS][COLS], int rows, int cols);//布置雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS],int rows, int cols);//排查雷


void print_interface(char game_map[ROWS][COLS], int rows, int cols);//打印游戏界面