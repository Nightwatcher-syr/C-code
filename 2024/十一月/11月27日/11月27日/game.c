#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{

	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		//��ӡ����
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
	printf("�������\n");
	while (1)
	{
		printf("����������");
		scanf_s("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')//-1
			{
				board[x - 1][y - 1] = '*';//���ﲻ��д��=
				break;
			}
			else
			{
				printf("���걻ռ�ã��������壬��ѡ������λ��\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}

	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
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

int IsFull(char board[ROW][COL], int row, int col)//���˷���1����������0
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
	//��
	int i = 0;
	for (i = 0;i < row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//��ʲô�ͷ���ʲô
		}
	}
	//��
	int j = 0;
	for (j = 0;j < col;j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];//��ʲô�ͷ���ʲô
		}
	}
	//�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];//��ʲô�ͷ���ʲô
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];//��ʲô�ͷ���ʲô
	}
	//�ߵ�����û�з���˵��û����Ӯ����Ҫ�ж��ǲ���ƽ��
	if (IsFull(board,row,col))
	{
		return 'Q';
	}
	return 'C';//��Ϸ����
}