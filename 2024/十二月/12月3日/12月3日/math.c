#include"math.h"
int result = 0;
int a = 0;
int b = 0;
int c = 0;
int d = 0;
int count = 0;

void menu()
{
	printf("���ͬѧ����ѡ����Ҫ��ս����������:>\n");
	printf("************************************\n");
	printf("*********    A.�ӷ�����   **********\n");
	printf("*********    B.��������   **********\n");
	printf("*********    C.�˷�����   **********\n");
	printf("*********    D.��������   **********\n");
	printf("*********    E.�������   **********\n");
	printf("************************************\n");
}

void add()
{
	do {
		int c = 0;
		c = a + b;
		int i = 1;
		printf("�뿪ʼ�ӷ���ϰ��\n");
		do
		{

			a = rand() % 10 + 1;
			b = rand() % 10 + 1;//�����������1~10����
			c = a + b;
			printf("%d + %d =", a, b);
			scanf_s("%d", &result);
			judge(result, c);
			printf("\n");
			i++;
		} while (i <= 10);
		printf("���ԵĴ���Ϊ %d \n", count);
		d = judge_counite(count);
	} while (d);
}


void subtract()
{
	do {
	int c = 0;
	c = a - b;
	int i = 1;
	printf("�뿪ʼ������ϰ��\n");
	do
	{

		a = rand() % 10 + 1;
		b = rand() % 10 + 1;//�����������1~10����
		c = a - b;
		printf("%d - %d =", a, b);
		scanf_s("%d", &result);
		judge(result, c);
		printf("\n");
		i++;
	} while (i <= 10);
	printf("���ԵĴ���Ϊ %d \n", count);
	d = judge_counite(count);
	} while (d);
}


void multiply()

{
	do {
	int c = 0;
	int i = 1;
	printf("�뿪ʼ�˷���ϰ��\n");
	do
	{

		a = rand() % 10 + 1;
		b = rand() % 10 + 1;//�����������1~10����
		printf("%d * %d =", a, b);
		c = a * b;
		scanf_s("%d", &result);
		judge(result,c);
		printf("\n");
		i++;
	} while (i <= 10);
	printf("���ԵĴ���Ϊ %d \n", count);
	d = judge_counite(count);
	} while (d);
}


void divide()
{
	do {
	int c = 0;
	c = a / b;
	int i = 1;
	printf("�뿪ʼ������ϰ��\n");
	do
	{

		a = rand() % 10 + 1;
		b = rand() % 10 + 1;//�����������1~10����
		c = a / b;
		printf("%d / %d =", a, b);
		scanf_s("%d", &result);
		judge(result, c);
		printf("\n");
		i++;
	} while (i <= 10);
	printf("���ԵĴ���Ϊ %d \n", count);
	d = judge_counite(count);
	} while (d);
	
}

void judge(int x, int y)
{
	if (x == y)
	{
		printf("Right!");
		count++;
	}
	else
		printf("Wrong!");

}

int judge_counite(int x)
{
	if (x >= 8)
	{
		printf("��ȷ����������8����̫���ˣ�\n");
		return 0;
	}
	else 
	{
		printf("���ź�����ȷ������С��8������ϰ10���⹮��һ�°ɣ�\n");
		return 1;
	}

}

//ɨ����Ϸ
//����Ҫ����10������ȥ
//��ʮ����Ҫ������
//���׾���1�������׾���0
//9*9�ĸ���Ҫ��Ӧ9*9������
//����Ҫ���ף�ѡ��һ�����꣬���������Χ��1���ף�������������0��Ϊ1
//��ʱì�ܳ�����
//���1�������׻�����Χ��1����
//�����ٴ���һ��һģһ�������飬�������ר����������Ų�����׵���Ϣ
//���û�չʾ�����Ų�������׵���Ϣ

//����Ų������ʾ1��û���Ų�����ķ�һ��*---char���͵�����

//char mine[9][9];��ʼ��Ϊ0
//char show[9][9];��ʼ��Ϊ��*��
//�ڱ߽ǵ����꣬Ҫ���ǵ�Խ�������
//���Խ�������---�����������ټ�һȦ---��Ϊ11*11
// 
//