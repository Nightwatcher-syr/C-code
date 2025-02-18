#include<stdio.h>
#include"game.h"

void menu()
{
	printf("******************\n");
	printf("****  1.Play  ****\n");
	printf("****  0.Exit  ****\n");
	printf("******************\n");
}


void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化数组的内容为指定的内容
	//mine数组在没有布置雷的时候，都是‘0’
	InitBoard(mine, ROWS, COLS, '0');
	//show数组在没有排查出雷的时候都是‘*’
	InitBoard(show, ROWS, COLS, '*');

	//DisplayBoard(mine, ROW, COL);
	// 
	//开始埋雷
	setMine(mine,ROW,COL);

	DisplayBoard(show, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);

}


int main()
{
	int input = 0;
	//设置随机数的生成起点
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}