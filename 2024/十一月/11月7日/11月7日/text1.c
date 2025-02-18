//成功晋级初阶

//分支和循环语句
//什么是语句--1.表达式语句   2.函数调用语句  3.控制语句  4.复合语句  5.空语句
//分支，循环是控制语句
//控制语句用于控制程序的执行流程，以实现程序的各种结构方式，他们由特定的定义符组成
// 1.条件判断语句：if语句，switch语句   2.循环执行语句;do while 语句，while语句，for语句   3.转向语句：break语句，goto语句 ，continue语句，return语句
//C语言是结构化的程序设计语言  3种结构--顺序结构，循环结构，循环结构(生活中可抽象为这3种结构）


//分支语句
//单分支 多分支
// if语句0假，其他真，真执行
//语法结构  --if（表达式‘判断表达式’‘任意’）---如果为真，则执行，不真不执行
//if else语句
//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age > 18)////!！！不能加；
//	{
//		printf("成年");//if语句默认跟一条语句，后面要跟条语句时要跟一个{}
//	}
//	else
//	{
//		printf("不成年");//else也默认一个语句，如果想让else控制多条语句，要加{}
//	}
//	return 0;
//}

//else if
//多分支
//#include<stdio.h>
//int main()
//{
//	int age;
//	scanf_s("%d", &age);
//	if (age < 18)
//	{
//		printf("青少年");
//	}
//	else if (age >=18 && age<28 )
//	{
//		printf("青年");
//	}
//	else if (age >= 28 && age < 40)
//	{
//		printf("中年");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("壮年");
//	}
//	else if (age >= 60 && age < 100)
//	{
//		printf("老年");
//	}
//	else
//	{
//
//		printf("寿星");
//	}
//
//	return 0;
//}

//{}是一个代码块

//
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 3;
//	if (a == 1)
//		if (b == 2)
//	    printf("woo");
//        else                  //else是与离他最近的if匹配，不是与谁对其与谁匹配-----但是要注意讲究排版（容易阅读，不容易出错）
//		printf("yii");        //要注意加{}--养成好习惯
//return 0;
//}
//变量的命名要规范，有意义（不要a,b,c  要写成age等）
//空格  空行  换行
//《高质量的C++编程》--好的代码

//范例
//#include<stdio.h>
//int main()
//{
//
//	if (condition)
//	{
//		return x;
//	}
//	return y;
//	return 0;
//}                 //这段代码的意思为满足条件返回x，不满足返回y（确实是）  但是在阅读上造成困难
//如下
//#include<stdio.h>
//int text()
//{
//	int a = 4;
//
//	if (a<3)
//	{
//		return 1;
//	}
//	return 0;     //如果在前面加上else 也对  但是阅读上更好
//} 
//#include<stdio.h>
//int main()
//{
//
//	int r = text();
//	printf("%d\n", r);
//	return 0;
//}                         //代码额可以运行，结果为0   
//
//
//#include<stdio.h>
//int main()
//{
//	int a = 19;
//	if (10==a)//好的代码的学法，因为这样写如果写错成=，系统会报错，这样减小了错误的概率  （变量）
//	{
//		printf("heh");
//	}
//	return 0;
//} 

//判断一个数是不是奇数
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//
//	if (num%2==1)//这里不用倒过来写，因为左边不是一个变量
//	{
//		pritnf("奇数");
//	}
//	else
//		pritnf("不是奇数");
//	return 0;
//} 

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//
//	if (num % 2 == 1)//这里不用倒过来写，因为左边不是一个变量
//	{
//		pritnf("奇数");
//	}
//	else
//		pritnf("不是奇数");
//	return 0;
//}


//输出1~100的奇数
//法1
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//}
//法2
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//		i += 2;//这样写更加巧妙
//	}
//}


//switch语句
//switch(整形表达式)！！！！必须为整形
//{语句项}  语句由case+整形常量表达式（！！必须）：  break；  组成


//如果输入1，则星期一。。。。
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//		case 1:
//			printf("星期1\n");
//		case 2:
//		    printf("星期2\n");
//		case 3:
//		    printf("星期3\n");
//		case 4:
//			printf("星期4\n");
//		case 5:
//            printf("星期5\n");
//		case 6:
//	        printf("星期6\n");
//		case 7:
//			printf("星期7\n");
//	}
//	return 0;
/*}*///如果没加break，输入6，打印的是星期6，星期7

//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)//switch执行的过程--通过switch的值选择case进入，从break跳出switch
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//	}
//	return 0;
//}//这样就好了


//输入1~5，输出weekday  输入6~7，输出weekend
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)//switch执行的过程--通过switch的值选择case进入，从break跳出switch
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");//逻辑需要可以不加break（不遇到break就一直执行直到遇到break），多个case可以执行一个语句
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;  //最后建议加上break   因为有不合法数据
//	}
//	return 0;
//}


//输入1~5，输出weekday  输入6~7，输出weekend
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)//switch执行的过程--通过switch的值选择case进入，从break跳出switch
//	{
//	case 1:  //case后面可以放字符，因为字符存储时是ascII值，也为整形
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");//逻辑需要可以不加break（不遇到break就一直执行直到遇到break），多个case可以执行一个语句
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;  
//	default:
//		printf("错误输入");//其他情况     //在每个switch后加default是好习惯
//
//	}
//	return 0;
//}

	//	VS上，可以不选中一行，光标在哪一行，直接Ctrl+c就是复制一行，其他同理


#include<stdio.h>
int main()
{
	int n = 1;
	int m = 2;


	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n) //switch可以嵌套
		{
		case 1:n++;
		case 2:m++;n++;
			break;//只会跳出自己所在的的switch
	     }
	case 4:m++;
		break;

	default:
		break;

	}
	printf("m=%d,n=%d\n", m, n);
	return 0;//m=5,n=3
}