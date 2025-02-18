//程序要实现的功能----小学生计算机辅助教学
//10以内的加减乘除运算，可按照学生指定运算类型出题，也可以加减乘除混合随机出题
//每次出10道题，每道题做完后判断对错并反馈，错误的反馈从设定好的四种反馈中随机生成
//当10道题做完后，计算并输出正确题数---若正确题数>=8,则停止出题并提示鼓励信息
//如果正确的题数<8,则继续出10道题，直到正确题数合格为止

#include"math.h"
int main()
{
	int input = 0;
	do
	{
		input = 0;
		menu();//打印选择菜单
		char choice = 0;
		scanf_s(" %c", &choice);//同学输入想要挑战的运算类型


		int a = 0;
		int b = 0;
		int c = 0;
		srand(time(NULL));

		int result = 0;
		//	add, subtract, multiply and divide
		switch (choice)
		{
		case 'A':
		{
			add();
			break;
		}
		case 'B':
		{
			subtract();
			break;
		}
		case 'C':
		{
			multiply();
			break;
		}
		case 'D':
		{
			divide();
			break;
		}
		case 'E':
		{
			int i = 0;
			printf("请开始随机练习！\n");
			c = rand() % 4;
			switch (c)
			{
			case 0:
				add();
			case 1:
				subtract();
			case 2:
				multiply();
			case 3:
				divide();

			}
			break;
		}
		default:
		{
			printf("输入错误，请重新输入！\n");
			input = 1;
			break;
		}

		}

	}
	while (input);
	return 0;
}

