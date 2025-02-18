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
	printf("----ɨ����Ϸ-----\n");

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
	printf("----ɨ����Ϸ-----\n");

}


void setMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	//������ģ�������ķ�Χ����1~9
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')//�������ѭ���Ĵ����п��ܡ�10��---���ǲ��õ���=10
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
		- 8 * '0');//Ҳ������ѭ������
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("������Ҫ�Ų������");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//�ж������Ƿ�Ϸ�
		{
			if (show[x][y] != '*')
			{
				printf("�����걻�Ų���ˣ������ظ��Ų�\n");
			}
			else
			{
				//�������
				if (mine[x][y] == '1')
				{
					printf("���ź����㱻ը����\n");
					DisplayBoard(mine, ROW, COL);

				}
				else
					//����û�вȵ��ף���Ҫɨ����Χ��8���������м�����----��ô����
					//��ķ����ǰ����ж���Χ��8�������ǲ���1---������Ҫд8���ж���䣬����̫�鷳��
					//�����ķ���Ϊ---����һ�£������׵�ʱ���ǲ������׵ĵط�����ǣ������ַ�1��Ҫע�ⲻ������1��
					//�����׵ĵط�������ַ�0�������ÿһ�������Ԫ�طֱ��ȥ�ַ�0����ô�õ���һ������Χ���׵ĸ���
				{
					win++;
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';//ת��Ϊ�ַ�3
					DisplayBoard(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("���������Ƿ�������������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}
}


