#pragma once

//注意单个字符用' ',字符串用""
/*游戏相关的函数声明*/
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Init_board(char arr[ROW][COL],int row,int col);//初始化棋盘
void Print_board(char arr[ROW][COL], int row, int col);//打印棋盘
void player_walk(char arr[ROW][COL], int row, int col);//玩家走
void computer_walk(char arr[ROW][COL], int row, int col);//电脑走
//游戏进行过程中有四种情况
/*
1.玩家赢-----*
2.电脑赢-----#
3.平局------Q
4.继续------C
*/
char Is_win(char arr[ROW][COL], int row, int col);//判断谁赢了
