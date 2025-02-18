//井字棋


//text.c    负责测试游戏的逻辑
//game.c    负责游戏代码的实现
//game.h    负责游戏代码的声明（函数声明，符号定义）

//第一步，建立基本的逻辑
//首先屏幕上可以打印上一个是否需要游戏进行的菜单
//选择是否进入游戏
//如果选择进入游戏，则开始游戏
//如果选择不进行游戏则推出
//如果选择错误则再次打印菜单让他重新选择
//#include<stdio.h>
//void menu()
//{
//	printf("******************************\n");
//	printf("******************************\n");
//
//	printf("**    1.PLAY     0.EXIT     **\n");
//	printf("******************************\n");
//
//	printf("******************************\n");
//
//
//}
//int main()
//{
//	int input;
//	do
//	{
//	menu();
//	printf("请选择（0/1）：");
//	scanf_s("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("井字棋\n");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//
//		default:
//			printf("选择错误，请重新选择!\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//写一步测试一步，这样不至于最后bug堆积



//接下来想象一下
//要下一盘棋
//首先要有一个棋盘
//这个棋盘有网格，网格里面在最开始的时候是空的，既是一个空格
//那么怎么存放这些空格呢，自然而然想到了要用二维数组来存放，一个3*3的二维数组
//那么下一步为初始化棋盘
#include<stdio.h>
#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("******************************\n");
	printf("**    1.PLAY     0.EXIT     **\n");
	printf("******************************\n");
	printf("******************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		//判断输赢
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//其实在判断数组里是否有横3，竖3，斜3
		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);

		//判断输赢

	}
	if (ret == '*')
	{
		printf("玩家赢了！\n");
	}
	if (ret == '*')
	{
		printf("玩家赢了！\n");
	}
	else
		printf("平局\n");
}



int main()
{
	srand((unsigned int)time(NULL));
	int input=0;
	do
	{
		menu();
		printf("请选择（0/1）：");
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
			printf("选择错误，请重新选择!\n");
			break;
		}
	} 
	while (input);

	return 0;
}