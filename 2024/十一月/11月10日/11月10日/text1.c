//循环结构


//计算n的阶乘
//1*2*3....
// 暂时不考虑溢出问题
#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		ret = ret * i;//从1一直乘到n
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//计算1！+2！+3！+。。。+10！
//相当与上面的计算进行十次，然后在把结果相加
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 10;n++)
//	{
//		ret = 1;//每次ret都应该让ret回到1，不然会产生累加效应
//		for (i = 1;i <= n;i++)
//		{
//
//			ret = ret * i;
//
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);//但是这种代码效果比较差，因为每次都要从1*2*3*4.。。开始算，如果能够利用上会算的结果就好了
//
//	return 0;
//}

//更加优化的版本：嘻嘻，是我最开始的想法
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1;n <= 10;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);//这样就每次都可以利用上上一回的值了，不用从1乘起
//
//	return 0;
//}



//5.4 假设银行整存整取不同期限的年利率分别为：

//年利率

/*期限

2.25 %

期限1年

2.43 %

期限2年

2.70 %

期限3年

2.88 %

期限5年

3.00 %

期限8年

要求输入存钱的本金和期限，求到期时能从银行得到的利息与本金的总和。写英文字母，然后将转换后的英文字母及其AS*///CII码值显示到屏幕上；如果不是英文字母，则不转换，直接将它及其ASCII码值输出到屏幕上。
//#include<stdio.h>
//int main()
//{
//	double pri;
//	int time;
//	double sum;
//	scanf_s("%lf%d", &pri, &time);
//	switch (time)
//	{
//		case 1:
//			sum = pri * (1 + 0.0225);
//			printf("%f\n", sum);
//			break;
//		case 2:
//			sum = pri * (1 + 0.0243);
//			printf("%f\n", sum);
//			break;
//		case 3:
//			sum = pri * (1 + 0.0270) * (1 + 0.0270) * (1 + 0.0270);
//			printf("%f\n", sum);
//			break;
//		case 5:
//			sum = pri * (1 + 0.0288) * (1 + 0.0288) * (1 + 0.0288) * (1 + 0.0288) * (1 + 0.0288) ;
//			printf("%f\n", sum);
//			break;
//		case 8:
//			sum = pri * (1 + 0.0300) * (1 + 0.0300) * (1 + 0.0300) * (1 + 0.0300) * (1 + 0.0300) * (1 + 0.0300) * (1 + 0.0300) * (1 + 0.0300);
//			printf("%f\n", sum);
//			break;
//		default:
//			printf("Error rate!\n");
//
//
//	}
//	return 0;
//}
//这是一个作业，错误的第一个原因是多年的利率需要乘以多次
//第二个错误是double类型是%lf


//5.7 从键盘输入一个英文字母，如果是大写英文字母，则将其转换为小写英文字母，如果是小写英文字母，则将其转换为大写英文字母，然后将转换后的英文字母及其ASCII码值显示到屏幕上；如果不是英文字母，则不转换，直接将它及其ASCII码值输出到屏幕上。
//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	ch = getchar();
//	if ((ch >= 'a') && (ch <= 'z'))
//	{
//		ch = ch - 32;
//		printf("%c\t%d\n", ch,ch);
//
//}
//	else if ((ch >= 'A') && (ch <= 'Z'))
//	{
//		ch = ch + 32;
//		printf("%c\t%d\n", ch,ch);
//	}
//	else
//		printf("%c\t%d\n", ch,ch);
//	return 0;
//}
//代码的第一个错误是%c\t%d\n这后面需要输入两个ch
//第二个是((ch >= 'A') && (ch <= 'Z'))这个简直漏洞百出---分析如下
//1.(‘ch ’>= 'A')&& ‘ch’ <= 'Z')第一个版本是这样的，错在ch是变量，不能在外面加上‘’，加上后就变成了一个常量，不管怎末判断都是错误的
//2.(ch >= 'A' && ch <= 'Z')第二个版本，不加（）同样错误，可能由于优先级的关系，会误判


//从键盘输入某年某月（包括闰年），用switch语句编程输出该年的该月拥有的天数。要求考虑闰年以及输入月份不在合法范围内的情况。已知闰年的2月有29天，平年的2月有28天。



#include<stdio.h>;
int main()
{
	int year;
	int month;
	scanf_s("%d%d", &year, &month);
	if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31天\n");
			break;
		case 2:
			printf("29天\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30天\n");
			break;
		default:
			printf("Error number!");
		}

	}
	else
	{
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31天\n");
			break;
		case 2:
			printf("28天\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30天\n");
			break;
		default:
			printf("Error number!");
		}

	}

	return 0;
}
//错误原因case 11:这里的11不能加‘’  ，要想清楚什么时候加什么时候不加，当是字符时要加