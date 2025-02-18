#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,int set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----扫雷游戏-----\n");

	for (j = 0;j <= col;j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		printf("%d ",i);
		for (j = 1;j <= col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----扫雷游戏-----\n");

}


void setMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	//横坐标的，纵坐标的范围都是1~9
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')//所以这个循环的次数有可能》10次---但是布置的雷=10
		{
			board[x][y] = '1';
			count--;
		}
	}
}


int get_mine_count(char board[ROW][COL],int x, int y)
{
	return(board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x ][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y=1] +
		board[x ][y+1]+
		board[x - 1][y+1] 
		- 8 * '0');//也可以用循环来做
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入要排查的坐标");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//判断坐标是否合法
		{
			if (show[x][y] != '*')
			{
				printf("该坐标被排查过了，不能重复排查\n");
			}
			else
			{
				//如果是雷
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					DisplayBoard(mine, ROW, COL);

				}
				else
					//假如没有踩到雷，就要扫描周围的8个坐标里有几个雷----怎么办呢
					//最笨的方法是挨个判断周围的8个坐标是不是1---这样就要写8次判断语句，这样太麻烦了
					//聪明的方法为---回忆一下，在埋雷的时候，是不是是雷的地方存的是！！！字符1（要注意不是数字1）
					//不是雷的地方存的是字符0；如果把每一个坐标的元素分别减去字符0，那么得到的一定是周围的雷的个数
				{
					win++;
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';//转化为字符3
					DisplayBoard(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("输入的坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}


