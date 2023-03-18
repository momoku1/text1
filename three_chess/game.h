/*游戏相关函数声明*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void Initboard(char GameBoard[ROW][COL], int row, int col);
void Printboard(char GameBoard[ROW][COL], int row, int col);//打印棋盘
void Playermove(char GameBoard[ROW][COL], int row, int col);//玩家下棋
void Computermove(char GameBoard[ROW][COL], int row, int col);//电脑下棋
char Iswin(char GameBoard[ROW][COL], int row, int col);//判断是否赢了
/*
1.玩家赢--------'*'
2.电脑赢--------'#'
3.平局-----------'D'   dogfall
4.继续-----------'C'    continue
*/
