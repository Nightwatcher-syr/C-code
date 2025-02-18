//c语言中的常量分为
//1.字面常量   字面常量是不能被改得 -- No。1
//2.const 修饰的常变量    在C语言中，const修饰的长变量，本质是变量，但是不能直接被修改，是有常属性的变量  （证明其为变量在No.3）  ----No.2
//3.defined定义的标识符常量---No.4
//4.枚举常量  生活中有一些值可以一一列举出来----No.5




//No.1
//#include<stdio.h>
//int main()
//{
//	30;//这是一个实型字面常量
//	3.14;//这些直接写出来的都是字面常量，这是一个浮点型常量
//	'a';//这是一个字符型常量，用单引号引起来
//	"abc";//这是一个字符串常量，用双引号引起来
//		int a = 10;
//		a = 20;//这里的a是一个变量，随时可以改变
//
//	return 0;
//}


//No.2
//#include<stdio.h>
//int main()
//{
//	const a;
//	a = 10;//错误提示为表达式必须为可修改的左值，及说明a有变量变成了一个常量
//
//	return 0;
//}

//No.3
//#include<stdio.h>
//int main()
//{
//	const int n = 10;
//	int arr[n] = { 0 };//这里会报错，提示为表达式必须含有常量值  说明n不是一个常量，n是一个变量
//
//	return 0;
//}



//No.4
//#define MAX 100//#define定义的标识符常量,define可以定义一个符号，这个符号可以赋值，这个值可为数，也可以为字符串等等
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;//这里的define定义的标识符常量习惯性写为大写  MAX
//	printf("%d", a);
//	
//	return 0;
//}


//No.5
#include<stdio.h>
enum Color//也习惯性写为大写，枚举常量
{
	RED,
	BLUE,
	GREEN//常量不会开辟空间
};
int main()
{
	int num = 10;
	enum Color c=RED;//创建c的时候，向内存申请了一个空间

	return 0;
}