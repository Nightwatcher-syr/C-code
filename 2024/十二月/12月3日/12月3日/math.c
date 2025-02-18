#include"math.h"
int result = 0;
int a = 0;
int b = 0;
int c = 0;
int d = 0;
int count = 0;

void menu()
{
	printf("你好同学，请选择你要挑战的运算类型:>\n");
	printf("************************************\n");
	printf("*********    A.加法运算   **********\n");
	printf("*********    B.减法运算   **********\n");
	printf("*********    C.乘法运算   **********\n");
	printf("*********    D.除法运算   **********\n");
	printf("*********    E.随机运算   **********\n");
	printf("************************************\n");
}

void add()
{
	do {
		int c = 0;
		c = a + b;
		int i = 1;
		printf("请开始加法练习！\n");
		do
		{

			a = rand() % 10 + 1;
			b = rand() % 10 + 1;//随机生成两个1~10的数
			c = a + b;
			printf("%d + %d =", a, b);
			scanf_s("%d", &result);
			judge(result, c);
			printf("\n");
			i++;
		} while (i <= 10);
		printf("你答对的次数为 %d \n", count);
		d = judge_counite(count);
	} while (d);
}


void subtract()
{
	do {
	int c = 0;
	c = a - b;
	int i = 1;
	printf("请开始减法练习！\n");
	do
	{

		a = rand() % 10 + 1;
		b = rand() % 10 + 1;//随机生成两个1~10的数
		c = a - b;
		printf("%d - %d =", a, b);
		scanf_s("%d", &result);
		judge(result, c);
		printf("\n");
		i++;
	} while (i <= 10);
	printf("你答对的次数为 %d \n", count);
	d = judge_counite(count);
	} while (d);
}


void multiply()

{
	do {
	int c = 0;
	int i = 1;
	printf("请开始乘法练习！\n");
	do
	{

		a = rand() % 10 + 1;
		b = rand() % 10 + 1;//随机生成两个1~10的数
		printf("%d * %d =", a, b);
		c = a * b;
		scanf_s("%d", &result);
		judge(result,c);
		printf("\n");
		i++;
	} while (i <= 10);
	printf("你答对的次数为 %d \n", count);
	d = judge_counite(count);
	} while (d);
}


void divide()
{
	do {
	int c = 0;
	c = a / b;
	int i = 1;
	printf("请开始除法练习！\n");
	do
	{

		a = rand() % 10 + 1;
		b = rand() % 10 + 1;//随机生成两个1~10的数
		c = a / b;
		printf("%d / %d =", a, b);
		scanf_s("%d", &result);
		judge(result, c);
		printf("\n");
		i++;
	} while (i <= 10);
	printf("你答对的次数为 %d \n", count);
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
		printf("正确的题数大于8，你太棒了！\n");
		return 0;
	}
	else 
	{
		printf("很遗憾，正确的题数小于8，再练习10道题巩固一下吧！\n");
		return 1;
	}

}

//扫雷游戏
//首先要布置10个雷上去
//这十个雷要存起来
//是雷就是1，不是雷就是0
//9*9的格子要对应9*9的数组
//假设要排雷，选中一个坐标，这个坐标周围有1个雷，则把这个坐标由0改为1
//这时矛盾出现了
//这个1到底是雷还是周围有1个雷
//可以再创建一个一模一样的数组，这个数组专门用来存放排查出的雷的信息
//给用户展示的是排查出来的雷的信息

//如果排查出雷显示1；没有排查出来的放一个*---char类型的数组

//char mine[9][9];初始化为0
//char show[9][9];初始化为“*”
//在边角的坐标，要考虑到越界的问题
//解决越界的问题---在数组外面再加一圈---改为11*11
// 
//