/*��Ϸ��غ�������*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void Initboard(char GameBoard[ROW][COL], int row, int col);
void Printboard(char GameBoard[ROW][COL], int row, int col);//��ӡ����
void Playermove(char GameBoard[ROW][COL], int row, int col);//�������
void Computermove(char GameBoard[ROW][COL], int row, int col);//��������
char Iswin(char GameBoard[ROW][COL], int row, int col);//�ж��Ƿ�Ӯ��
/*
1.���Ӯ--------'*'
2.����Ӯ--------'#'
3.ƽ��-----------'D'   dogfall
4.����-----------'C'    continue
*/
