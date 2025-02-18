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
	//��ʼ�����������Ϊָ��������
	//mine������û�в����׵�ʱ�򣬶��ǡ�0��
	InitBoard(mine, ROWS, COLS, '0');
	//show������û���Ų���׵�ʱ���ǡ�*��
	InitBoard(show, ROWS, COLS, '*');

	//DisplayBoard(mine, ROW, COL);
	// 
	//��ʼ����
	setMine(mine,ROW,COL);

	DisplayBoard(show, ROW, COL);
	//�Ų���
	FindMine(mine, show, ROW, COL);

}


int main()
{
	int input = 0;
	//������������������
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}