//如何学好C语言
//1.多练
//2.画图，理清思路，辅助理解
//3.学会调试


//编译器不会把所有错误指出来





//注释   慢慢养成给自己的代码写注释的好习惯
//注释的好处  梳理思路  对复杂的代码进行解释   写代码的时候写注释，对自己和他人都好  面试时让面试官看懂
//No.1
//#include<stdio.h>
//int main()
//{
//	int a = 10;//双斜线是C++风格的注释
//
//
//   /* int b = 100;
//	print("%d", a);
//	printf("%d", b);*/    //以/*开头，以*/结尾，这是C风格的注释  缺点为不能嵌套注释
//
//}



//选择语句
//
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("要好好学习吗？(1/0)");
//	scanf("%d", &input);
//	if(input==1)
//	{
//		printf("好offer\n");
//
//
//}
//	else {
//		printf("卖红薯\n");
//	}
//
//	return 0;
//}



//循环语句
//C语言
//20000行有效代码的积累

//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("写代码：%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//	return 0;



//C语言是一种结构化的程序设计语言
//顺序结构
//选择结构
//循环结构
//生活中的所有事情都可以抽象为这三种解构



//函数
// 写函数省事
//求两个任意整数的和
//f(x)=2*x+1  f(x,y)相当于x+y
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int sum;
//	scanf_s("%d%d", &n1, &n2);
//	sum = n1 + n2;
//	printf("%d", sum);
//	return 0;
//}


// int Add(int x, int y)// Add是函数名  xy为函数参数  int z = 0;z = x + y;	return z;为函数体     int为返回类型
//{
//	int z = 0;
//	z = x + y;
//	return z;//这儿三行代码可以简化为return(x+y);
//}
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//
//	scanf_s("%d%d", &n1, &n2);
//	int sum = Add(n1, n2);//这就是Add函数    输入--函数--输出  
//
//	printf("%d", sum);
//	return 0;
//}


//数组（一组相同类型的元素的集合）
//存放


//想存放0~9
#include<stdio.h>
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,11,9 };//放10个元素    c语言规定这些元素是有序号的  e.g.1的序号为0 ，11的序号为8   这个0和8是下标    通过下标可以访问到这个数据  arr[8] 可以访问到第9个数据 即11
	printf("%d\n", arr[8]);//输出结果为11  打印第9个元素
	int i = 0;//想打印所有数据
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i = i + 1;
	}



	return 0;
}



//局部变量的作用域是局部变量所在的局部范围
//e,g,
#include<stdio.h>
int Add(int x, int y)
{
	int z = 0;//这里的变量z的作用域为局部做用范围
}
int main()
{
	int a = 1;
	int b = 2;//这里的局部变量的范围确实为main函数内，但不是所有，见上面
	int c = Add(a, b);

	return 0;
}








