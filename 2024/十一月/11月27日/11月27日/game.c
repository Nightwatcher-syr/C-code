#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{

	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		//打印数据
		//printf("%c |%c |")
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i < row;i++)
	{
		int j = 0;
		for (j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0;j < col;j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}


}

void PlayerMove(char board[ROW][COL], int row, int col)
{

	int x = 0;
	int y = 0;
	printf("玩家下棋\n");
	while (1)
	{
		printf("请输入坐标");
		scanf_s("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')//-1
			{
				board[x - 1][y - 1] = '*';//这里不能写成=
				break;
			}
			else
			{
				printf("坐标被占用，不能下棋，请选择其他位置\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}

	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}

	}
}

int IsFull(char board[ROW][COL], int row, int col)//满了返回1，不满返回0
{
	int i = 0;
	int j= 0;

	for (i = 0;i < row;i++)
	{
		for (j = 0;i < col;j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
}
char IsWin(char board[ROW][COL], int row, int col)
{
	//行
	int i = 0;
	for (i = 0;i < row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//是什么就返回什么
		}
	}
	//列
	int j = 0;
	for (j = 0;j < col;j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];//是什么就返回什么
		}
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];//是什么就返回什么
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];//是什么就返回什么
	}
	//走到这里没有返回说明没有人赢，就要判断是不是平局
	if (IsFull(board,row,col))
	{
		return 'Q';
	}
	return 'C';//游戏继续
}