#define _CRT_SECURE_NO_WARNINGS
//第一节课


//#include<stdio.h>
//int main(void)		
//{
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//
//	return 0;
//
//}
//printf是一个库函数
//std  标准
//i input o output
//ctrl+f5或Fn+ctrl+f    fn+**=原来的功能
//return 0 这个0是整数，前面的主函数也是整形（int）  这是一个习惯（不要杠
//main 是一个约定俗成的习惯
//main是是程序的入口，只有一个main函数
//CTRL+k+c注释  ctrl+k+U取消注释    或者点上面一排搜索下面的


//第二节课
//6.6---小数--浮点型            66--整数--整型      abc--字符型
//char 字符数据类型  short 短整型  
//sizeof 可知每种数据类型所占的大小
//char1
//short2
//int4
//long4
//long long8
//float4
//double8
//#include<stdio.h>
//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//		return 0;}



//第三节课
//#include<stdio.h>
//int a = 100;//全局变量
//int main()
//
//{
//short age = 18;//局部变量
//int high = 160;
//float weight = 60.0;
//int a = 10;
//printf("%d", a);
//return 0;
//}




////写一个代码计算两个整数的和
//#include<stdio.h>
//#include <math.h>
//int main()
//
//{
//	int sum;
//	int num1 = 0;
//	int num2 = 0;//初始化
//	scanf("%d%d", &num1, &num2);//输入两个数
//	sum = num1 + num2;
//	printf("sum:%d", sum);
//
//	
//	return 0;
//}


//创建变量的本质是申请空间
//变量和常量的概念  变量的分类：局部变量和全局变量  在同一个范围里，不能重复定义
//全局变量和局部变量的名字可以相同，优先使用局部变量  但不建议写成一样的
//	int num1 = 0;  好习惯变量在创建的时候就附上值，这样可以把变量初始化，好处：1.编译器会警告 2.如果不初始化，那么系统会默认输入一个随机的数，这样你加一减一就不知道是谁了，但是如果你初始化了（变成了0），就好操作l。，
//printf是一个输出函数  scanf是一个输入函数
//scanf 'scanf':( This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.)报错，说他不安全，方法一为变为scanf-s（scanf-s是VS编译器自己提供的函数，非标准C语言提供的函数，也就是说只有VS认识，其他编译器根本不认识，所以无法实现跨平台的编程）  不建议
// 方法二：这个在报错时的输入里面找，#define _CRT_SECURE_NO_WARNINGS放在代码的第一行
// 又一个一劳永逸的办法：在VS的安装路径下，有一个文件，newc++file.cpp，在VS工程中创建新的.c或者.cpp的文件的时候，都是拷贝newc++file.cpp这个文件的






//第四节课
//变量的作用域和生理周期
//变量的作用域（在哪里可以使用，哪里他的就是作用域）：1.局部变量  局部变量的作用域是变量所在的局部范围   2.全局变量 作用域为整个工程（可来自外部）
//声明来自外部的符号(在No.3)  exern int a;
//生命周期（  1.局部变量 :进入作用域生命周期开始，出作用域生命周期结束  2.全局变量：整个程序的生命周期


//No.1
//int main()
//{
//	{
//		int a = 10;
//		printf("a=%d", a);
//
//	}
//	printf("a=%d", a);//错误，错误提示为"a",未声名的标识符
//}
  


//No.2
//#include <stdio.h>
//int main()
//{
//	int a = 10;//局部变量的作用域
//	{
//
//		printf("a=%d", a);
//
//	}
//	printf("a=%d", a);
//	return 0;
//}

//No.2
//#include <stdio.h>//最后的运行结果为test-->=10  a=10 a=10 三个结果都能出来
//int a = 10;
//void test()
//{
//	printf("test-->%d", a);
//}
//int main()
//{
//
//	test();
//	{	printf("a=%d", a);
//
//	}
//	printf("a=%d", a);
//	return 0;
//}


//No.3
//#include <stdio.h>//“a”: 未声明的标识符,错误
//
//void test()
//{
//	printf("test-->%d", a);
//}
//int main()
//{
//
//	test();
//	{
//		printf("a=%d", a);
//
//	}
//	printf("a=%d", a);
//	return 0;
//}


//#include <stdio.h>
//extern int a;//声明来自外部的符号（另一个源文件text.c 里写了int a=10)
//
//void test()
//{
//	printf("test-->%d", a);
//}
//int main()
//{
//
//	test();
//	{
//		printf("a=%d", a);
//
//	}
//	printf("a=%d", a);
//	return 0;
//}

