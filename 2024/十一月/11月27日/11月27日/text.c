//������


//text.c    ���������Ϸ���߼�
//game.c    ������Ϸ�����ʵ��
//game.h    ������Ϸ������������������������Ŷ��壩

//��һ���������������߼�
//������Ļ�Ͽ��Դ�ӡ��һ���Ƿ���Ҫ��Ϸ���еĲ˵�
//ѡ���Ƿ������Ϸ
//���ѡ�������Ϸ����ʼ��Ϸ
//���ѡ�񲻽�����Ϸ���Ƴ�
//���ѡ��������ٴδ�ӡ�˵���������ѡ��
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
//	printf("��ѡ��0/1����");
//	scanf_s("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("������\n");
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//
//		default:
//			printf("ѡ�����������ѡ��!\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//дһ������һ�����������������bug�ѻ�



//����������һ��
//Ҫ��һ����
//����Ҫ��һ������
//������������������������ʼ��ʱ���ǿյģ�����һ���ո�
//��ô��ô�����Щ�ո��أ���Ȼ��Ȼ�뵽��Ҫ�ö�ά��������ţ�һ��3*3�Ķ�ά����
//��ô��һ��Ϊ��ʼ������
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
		//�ж���Ӯ
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//��ʵ���ж��������Ƿ��к�3����3��б3
		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);

		//�ж���Ӯ

	}
	if (ret == '*')
	{
		printf("���Ӯ�ˣ�\n");
	}
	if (ret == '*')
	{
		printf("���Ӯ�ˣ�\n");
	}
	else
		printf("ƽ��\n");
}



int main()
{
	srand((unsigned int)time(NULL));
	int input=0;
	do
	{
		menu();
		printf("��ѡ��0/1����");
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
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} 
	while (input);

	return 0;
}