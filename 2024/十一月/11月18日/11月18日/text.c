//在工程中出现两个源文件-----一个工程中，可以出现多个源文件，但是只能有一个主函数
//先回顾上节课的一个重要代码---自己敲
//#include<stdio.h>
//void swap(int* px, int* py)     ----把a的地址（0x2154635）传过去了--px=0x2154635
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数：");
//	scanf_s("%d%d", &a, &b);
//	printf("交换前这两个数为：%d %d\n", a, b);
//	swap(&a, &b);
//	printf("交换后这两个数为：%d %d", a, b);
//	return 0;
//}
//自己写的，成功了好开心


//思考，若为两个数相加，在写一个函数
//为什么在这里就不用取地址直接运算----在什么情况下要传地址？
// 不是返回值的问题
// 在Add函数的时候，直接把a传给x，b传给y，不用改变a，b-----仅仅需要一个结果就行了---不用取地址
// 而在Swap函数的时候，改变了ab的值---改变了外部的变量----需要其地址
//#include<stdio.h>
//int Add(x, y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d", &a, &b);
//	c=Add(a, b);
//	printf("%d", c);
//	return 0;
//}



//函数的参数
//实参---真实传给函数的参数，叫实参         实参可以是：常量，变量，表达式，函数等等      无论是何种类型的实参，在进行函数调用时，他们必须有确定的值，以便把这些值传递给形参
//表达式形式的实参---int c=Add(a+3,b)    函数类型的实参----int c=Add(Add(a,3),b)   Add函数一定要有返回值
// 
//形参---是值函数名后括号中的变量例如上述代码的x，y--不调用的情况下并不占用空间，只有在调用时才会占个空间   形参在函数带哦用后就自动销毁了，即只在函数内有
//形参实例化后，形参相当于实参的一份临时拷贝，在执行完车改后，会被自动销毁


//传值调用--上述的Add是传值调用   函数的型参与实参分别占用不同的内存块，对形参的修改不会影响实参 
//传址调用--上述的Swap是传址调用  把函数外部变量的地址传给函数内部变量，xy（形参）与ab（实参）之间建立起来了真正的联系，也就是函数内部可直接操作函数外的变量


//练习
//写一个函数可以判断一个数是不是素数
//打印100~200之间的素数
//素数是只能被1和它本身整除的数
//拿2~i-1之间的数去试除1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		int flag = 1;//flag是1表示是素数
//		for (j = 2;j <= i - 1;j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("%d", count);
//
//	return 0;
//}
//这个代码有点繁琐了
//好像没有必要一直从2试到i-1
//m=a+b
//16=2*8
//16=4*4
//a和b中一定有一个数是小于m开平方的


//优化1
//sqrt（）是开平方库函数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2;j <= sqrt(i);j++)  //这样写是一样的结果
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("%d", count);
//
//	return 0;
//}

//优化2.
//偶数一定不是素数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101;i <= 200;i+=2)//这里把i是偶数的情况省略了//直接省略一半
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("%d", count);
//
//	return 0;
//}


//正片开始，写一个函数判断是不是素数
//#include<math.h>
//int prime(int n)
//{
//	int j = 0;
//
//			for (j = 2;j <= sqrt(n);j++)
//			{
//				if (n % j == 0)
//				{
//			
//					return 0;               //return的功能远远强于break，break只会跳出循环，而return可以直接跳出函数，直接出结果
//				}
//			}
//			return 1;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101;i <= 200;i += 2)
//	{
//		if (prime(i))
//		{
//			printf("%d", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//
//	return 0;
//}


//判断是不是闰年
is_leap_year(int x)
{
	if ((y % 4 = 0) && (y % 100 != 0) || (y % 400 = 0))
	{
		return 1;
	}
	else
		return 0;
}
#include<stdio.h>
int main()
{
	int year = 0;
	for
}


