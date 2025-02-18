//操作符
//C语言是非常灵活的
//C语言提供了非常丰富的操作符，使用起来就很灵活
//算数操作符:+-*/%
//移位操作符，位操作符涉及到2进制的运算，先不讲
//赋值操作符+=  %=......(详见No.2)



//No.1
//#include<stdio.h>
//int main()
//{
//	int a = 7 / 2;//除号两端都是整数的时候，执行的是整数除法，如果两端只要有一个是浮点数就是浮点数的除法
//	int b = 7 % 2;//取余数
//	printf("%d \n%d\n", a, b);
//	float c = 7 / 2.0;
//	//int b = 7 % 2.0;//报错了，因为取余操作符的两端只能是整数
//	printf("%.2f", c);//代表取两位小数
//	return 0;
//}




//No.2
//#include<stdio.h>
//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//	a = a + 3;
//	a += 3;//相当于a=a+3
//	a -= 3;//下同
//	a %= 3;
//	a *= 3;
//	a <<= 3;
//	a >>= 3;
//	a /= 3;
//return 0;
//}

//单目操作符
//+必须有两个操作数，所以+是双目操作符
//相对的，只有一个操作数的就是单目操作符
//0表示假，非0表示真
//!逻辑反操作
//-负值
//+相当于没写
//&取地址
//sizeof操作数的类型长度    *******sizeof是单目操作符
//~对一个数的二进制按位取反
//++a
//（）强转

//No.3
//#include<stdio.h>
//int main()
//{
//	int flag = 2;
//	if (!flag)//球球记住！！！！！这里不要添加；//这里的！是单目操作符
//	{
//		printf("buxixi\n");
//	}
//	//else 
//	//{printf("xixi\n")
//
//	//}
//
//	return 0;
//}

//No.4
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(int));   //4
//	printf("%d\n", sizeof(a));  //4
//	printf("%d\n",sizeof a);  //4
//	//printf("%d\n", int);//这里报错了，因为sizeof后面+数据类型时，必须+（），而加一个变量时，可以不加（）
//
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));  //40  sizeof计算的是整个数组的大小（一个整形4个字节，这里有10ge，就是40），单位是字节
//	printf("%d\n", sizeof(arr[0]));//4   一个数所占字节数
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//10  数组的元素个数
//
//
//	return 0;
//}
//
////No.5
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，后++
//	//相当于int b=a; a=a+1;  (拆分成两句）
//	printf("%d\n", a);  //11
//	printf("%d\n", b);  //10
//
//	int c = 10;
//	int d = --c;
//	printf("%d\n%d\n", c, d);  //9 9
//return 0;
//}



////No.6
//#include<stdio.h>
//int main()
//{
//	/*int a = 3.14; */ //3.14字面浮点数，编译器默认理解为double类型
//	int a =(int) 3.14;//(int)强制类型转换
//	printf("%d", a);  //输出了3
//
//	return 0;
//}


//关系操作符
// < >  >=  <= == !=

//No.7
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	if (3==a)
//	{
//		printf("xixi");
//	}
//
//	return 0;
//}


//逻辑操作符
//  &&  逻辑与---并且  全真为真
//  ||  逻辑或---或者  一真则真

//条件操作符  （三目操作符--有三个操作数）
//exp1 ? exp2 : esp3    (esp是表达式）
//意思是  1为真的话，2算3不算   1为假的话，2不算3算
//No.8
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;  //加不加（）都行
//	printf("%d", r);  //结果为20
//
//	return 0;
//}


//逗号表达式
//是逗号隔开的一串表达式
//特点为：从左到右依次计算，整个表达式的结果是最后一个表达式的结果





////No.9
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = (c = a - 2, a = b + c, c - 3);  // c=8 a=50 c=5
//	printf("%d\n", d);  //结果为5
//return 0;
//}

//No.10
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n]=20; //[]就是下标引用操作符  arr和3就是[]的操作数
//	//访问下标为3的元素  只有在访问元素的时候[]里可以用变量  但在定义数组大小时,[]里是一个常量
//	return 0;
//}



//No.11
//函数调用操作符
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int sum = Add(2,3);  //()就是函数调用操作符,Add,2,3都是()的操作数  ()是操作符,所以()不能被删掉
//
//	return 0;
//}


//关键字
//是C语言本身内置的,关键字不能自己创建

//auto 自动
//break 跳出循环
//const常属性

//定义变量名时的要求
//1.不能是关键字
//2.有字母数字下划线组成
//3.不能数字开头
//4.有意义



//关键字typedef
//是类型定义,这里可以理解为类型重命名
//!!!!!!只能对类型进行重命名


//No.12
//#include<stdio.h>
//typedef unsigned int uint; //因为unsigned int 比较长,难写,所以重命名为uint,,这样就可以比较好写l   也可以对一个比较复杂的类型进行重命名
//int main()
//{
//	unsigned int a = 0;
//	uint b = 0;//简化了书写
//
//}


//关键字static
//1.可以修饰局部变量-称为静态局部变量
//1.可以修饰全局变量-称为静态全局变量
//1.可以修饰函数-称为静态函数


//局部变量
// No.13
//void text()
//{
//	int a = 1;//局部变量a  生命周期为从局部开始到局部结束,结束后a自动销毁
//	a++;  //a的值根本就没被用,所以直接++
//	printf("%d\n", a);  //第一次为打印2  第二次又重新创建了一个a,打印了2
//
//}
//#include<stdio.h>
//int main()
//{
//
//	int i = 0;
//	while (i < 10)
//	{
//		text(); //调用上面的函数后i=2
//		i++;//第一次执行后变为1  一直循环10次(0~9)
//	}
//	return 0;
//} //最终结果为10个2



//局部变量原来存储在栈区,栈区的特点是进作用域的时候创建,出作用域的时候销毁.
//static把局部变量存到了静态区,静态区存储静态变量,特点为直到程序结束才被销毁
//实质上影响了变量的生命周期,和程序的生命周期一样
//变量一旦创建就不会换位置

//No.14
//void text()
//{
//	static int a = 1;//static修饰局部变量时,局部变量出了作用域,不被销毁. 本质上,static修饰局部变量的时候,改变了变量的存储位置
//	a++;  
//	printf("%d\n", a);
//
//}
//#include<stdio.h>
//int main()
//{
//
//	int i = 0;
//	while (i < 10)
//	{
//		text(); 
//		i++;
//	}
//	return 0;
//} //结果变为了2~11




//按住Ctrl滑鼠标就可以改变字体大小


//static修饰全局变量
// 全局变量是具有外部链接属性的
// 
////No.15
//#include<stdio.h>
//extern int g_val; //声明外部变量
//extern int a;  //这里显示无法解析的外部命令，这里说明static会把外部链接属性变成了内部链接属性（这里把a只在text2里边能用），也放在了静态区
//int main()
//{
//	printf("%d", g_val);
//printf("%d",a);
//	return 0;
//} 

//No.16
//函数具有外部链接属性
#include<stdio.h>//static把外部链接属性变味了内部链接属性
extern int Add(int x,int y);
int main()
{
	int a = 10;
	int b = 20;
	int z = Add(a, b);
	printf("%d", z);//打印结果为30
return 0;
}//这里报错无法解析的外部命令


//register--寄存器
//电脑上的存储设备--硬盘--内存--高速缓存--寄存器(集成到CPU--中央处理器上)
//寄存器
//高速缓存
//内存
//硬盘
//从下往上,空间越小,速度越快,造价越高

//写代码的时候额可以自己创建一个寄存器变量
int main()
{
	register  int num = 3;//把这个数据放在了寄存器里
	return 0;
}

