#define   _CRT_SECURE_NO_WARNINGS 1
//扫雷游戏
//游戏主体测试
#include "MineSweeper.h"
void menu()//开始菜单
{
	printf("**********************\n");
	printf("****    扫雷游戏   ****\n");
	printf("***   1.开始游戏   ****\n");
	printf("***   0.退出游戏   ****\n");
	printf("***********************\n");
}
/*游戏原理：
点击一个坐标，若是雷，则直接游戏结束
若不是雷，则在当前坐标显示周边有雷的个数。
若空白点完，依旧没有点到雷则游戏胜利。
*/
void game()//游戏执行
{
	char mine[ROWS][COLS] = {0};//布置好的雷的信息 1表示雷 0表示不是雷
    char show[ROWS][COLS] = { 0 };//排查出的雷的信息 *表示空白 #表示雷
	//初始化地图
	Init_interface(mine,ROWS,COLS,'0');//初始化雷所在地图
	Init_interface(show, ROWS, COLS,'*');//初始化排雷游戏地图

	//布置雷
	SetMine(mine, ROW, COL);
	//print_interface(mine, ROW, COL);//打印
	print_interface(show, ROW, COL);//打印
	//排查雷
 	FindMine(mine, show,ROW, COL);



}
int main()
{
	srand((unsigned int )time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("是否进入游戏，请选择 :>");
		scanf("%d", &input);
		switch(input)
		{
		    case 0:
				printf("退出游戏\n");
				break;
			case 1:
				printf("$游戏开始$\n");
				game();
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}
	} while (input);

	return 0;
}