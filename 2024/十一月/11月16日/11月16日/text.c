//#include<stdio.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//}
//void game()
//{
//	int ret = rand();//生成随机数  ---这样生成的随机数每次都是一样的
//	printf("%d", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏！");
//			break;
//		default:
//			printf("输入错误，请重新输入！");
//			break;
//		}
//	} 
//	while (input);
//
//	return 0;
//}


//改用srand
//#include<stdio.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//}
//void game()
//{
//	srand(100);//每次生成的数都是365    //200时为每次为
//	int ret = rand();
//	printf("%d", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏！");
//			break;
//		default:
//			printf("输入错误，请重新输入！");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//什么在不断变化哪？
//时间在一分一秒的发生变化
//时间戳：现在的时间与某一天的时间的差值---这个值在不断变化--对应一个时间戳（单位为秒）--且为整数
//怎样生成时间戳
//time函数---返回一个时间戳  time_t---是一个整数
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//}
//void game()
//{
//	int ret = rand();
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); 
//	//这里的指针变量NELL---空指针的意思     相当于初始化为零
//	//但是如果输的快的话，前后两次生成的随机数相同  
//	//因为有一个误区，不是每次运行一次程序多需要重新生设置一个起点，而是只用设置一个起点，每次用那一个起点生成随机数就行了
//	//所以不能把上面的放到void game（相当于参与到了每次的循环里）里，而是要放到循环外面
//	//但是想要生成的随机数是0~100的数
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏！");
//			break;
//		default:
//			printf("输入错误，请重新输入！");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}



//随机生成1~100之间的数
//因为任何数%100（取余）都会生成一个0~99的数，这时在rand()%100后加上1，就变成了1~100之间的数
//跟老师写的不太一样，具体哪里不一样，那个更好，见下面的分析
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand()%100+1;
//	while (1)//真的意思，直到猜对的时候，break
//	{
//		printf("请猜一个数字：");     //易错1.	int ret = rand()%100+1;  如果把生成随机数放到这里，每执行一次循环（比如你猜大了），就会生成一个随机数，那么永远不会猜对
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了!\n");     //易错2. 逻辑错误，应该大的时候显示猜小了
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了!\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏！");
//			break;
//		default:
//			printf("输入错误，请重新输入！");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}



//对比老师写的代码和鹏哥写的代码
//1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	int magic, guess, counter = 0, ret;
//	char reply;
//	srand(time(NULL));
//	do {
//		counter = 0;
//		magic = rand() % 100 + 1;
//		do {
//			printf("Please guess a magic number:");
//			ret = scanf_s("%d", &guess);
//			while (ret != 1)
//			{
//				while (getchar() != '\n');
//				printf("Please guess a magic number:");
//				ret = scanf_s("%d", &guess);
//			}
//			counter++;
//			if (guess > magic)
//			{
//				printf("Wrong!Too big!\n");
//			}
//			else if (guess < magic)
//			{
//				printf("Wrong!Too small!\n");
//			}
//			else
//				printf("Right!\n");
//		} while (guess != magic && counter < 10);
//		printf("counter=%d\n", counter);
//		printf("Do you want to contine(Y/N)?");
//		scanf_s(" %c", &reply);
//	} while (reply == 'Y');
//	return 0;
//}


//2
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)//真的意思，直到猜对的时候，break
//	{
//		printf("请猜一个数字：");
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了!\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了!\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏！");
//			break;
//		default:
//			printf("输入错误，请重新输入！");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//猜数字告一段落




//Go to语句

//从理论上goto语句没有用(可以用其他语句来替代)，但是在某些场合下还是用的到的
// ！！！！最常见的用法就是终止程序在某些深度嵌套的结构的处理过程
//goto会打乱原来代码的执行流程，跳来跳去可能会使代码的bug增多
//建议少使用goto语句
//goto语句不能跨函数沟通
// 
// 
//#include<stdio.h>
//int main()
//{
//	again:
//	printf("xixi\n");
//	printf("hehe\n");
//	goto again;      //执行到goto的时候程序跳转到again的地方，这里的again是任意定义的
//
//	return 0;
//}


//goto语句也有做不到的事情，比如他不能跨函数沟通，下面的例子里，会发生错误，因为设置的点在主函数外面，goto不能跨函数沟通外函数和内函数
//void text()
//{
//	again:
//}
//#include<stdio.h>
//int main()
//{
//	printf("xixi\n");
//	printf("hehe\n");
//	goto again;//引用了标签again，但并未对其定义
//return 0;
//}


//关机程序
//1.电脑运行起来以后，1分钟内关机
//2.如果输入“我是大美女”，就取消关机
//

//怎么让电脑在1分钟之内倒计时关机？
//运用C语言来关机----cmd（命令提示符）----C:\Users\Lenovo>shutdown -s(关机) -t（设置关机时间） 60（六十秒后关机）--回车---则将在60秒后关机
//C:\Users\Lenovo>shutdown -a(取消关机)
//注意空格

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>//如果要使用strcmp
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 360");//system 是执行系统命令
//	again:
//	printf("请注意，你的电脑将在在360秒内关机，如果输入：我是大美女，就取消关机!\n");
//	scanf_s("%s", input);
//	if (strcmp(input, "我是大美女") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}//goto,可以用其他替代

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>//如果要使用strcmp
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 360");//system 是执行系统命令
//	while (1)
//	{
//		printf("请注意，你的电脑将在在360秒内关机，如果输入：我是大美女，就取消关机!\n");
//		scanf_s("%s", input);
//		if (strcmp(input, "我是大美女") == 0)
//		{
//			system("shutdown -a");
//			break;//用循环来替代goto
//		}
//	}
//	return 0;
//}




//开始学函数了  啦啦啦啦
//函数要学什么
//1.函数是什么
//2.库函数
//3.自定义函数
//4.函数参数
//5.函数调用
//6.函数的嵌套调用和链式访问
//7.函数的定义和声明
//8.函数递归


//函数是什么
//数学上的函数 定义域--法则--值域
//C语言 （又叫子程序）--是一个大型程序某部分代码，由1个或多个语句块组成，她负责完成某项特定任务，而且相较与其他代码，具备相对的独立性
//一般会有输入参数并有返回值，提供对古城的封装和细节的隐藏--这些代码被集成为软件库


//分类
//1.库函数：C语言自带的
//2.自定义函数：自己写的

//1.库函数
//为什么有库函数
//因为一些函数经常使用，为了不造成代码冗余和不造成频繁bug，每个程序员都能用一套函数
//库函数有：cplusplus网站可查询库函数-----可自学
//培养英语能力---计算机的资料很多都是英语的

//简单的总结库函数有
//IO函数（输入输出相关的）  字符串操作函数  字符操作函数  内存操作函数  时间|日期函数  数学函数  其他库函数
//有根据文档自学函数的能力

/*#include<stdio.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello !";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
} */ //成功了！！ 打印出了hello

//自定义函数
//如果库函数能干所有的事，那要程序员干什么
//自定义函数同样包括（函数名，参数，返回值类型）
//基本组成

//ret_type fun_name(paral,*)
//{
// statement;//语句项
//}

//------ret_type是返回类型    fun_nam是函数名  paral是函数参数   {}里是函数体，来使函数实现


//#include<stdio.h>
//int get_max(int x, int y)   //最前面的int是返回的数据类型，如果不需要返回，写成void 
//{
//	return(x > y ? x : y);
//}
//
//void text()
//{
//	printf("xixi");
//}
//
//int main()
//{	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int m=get_max(a, b);
//	printf("%d\n", m);          //函数就像一个加工厂，需要有原材料，加工，产品-----输入数据，函数处理，产生结果（输出数据
//return 0;
//}


//自己写一个函数可以交换两个整型变量的内容

//#include<stdio.h>
//void Swap(int x,int y)    //两个变量换，要用第三个变量---类比初中学的酱油和醋的交换
//{
//	int z = 0;   //xy是形式参数    
 
// //----原因----当实参传递给形参的时候，形参是实参的一份临时拷贝，对形参的修改不会影响实参

//	z = x;
//	x = y;
//	y = z;
//}   //出问题了，交换前后都一样了   //出问题了，交换前后都一样了--调试结果显示是这里出现了问题---xyab的地址不相同--说明abxy是独立的变量---xy有自己的空间，不影响ab的值
//
//int main()
//{
//	int a = 0;
//	int b = 0;     //a,b叫实参
//	scanf_s("%d %d", &a, &b);  //写一个函数来交换
//	printf("交换前：%d %d\n", a,b);         
//	Swap(a, b);
//	printf("交换后：%d %d\n", a,b);
//
//	return 0;
//}


//让xy与ab沾边的方法
// 
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;  //取a的地址
//	a = 20;//直接改
//	*p = 20;//间接改a，用地址远程改
//}
#include<stdio.h>
void Swap(int *px, int *py)  //用指针变量取xy---即a,b的地址
{
	int z = *px;//*px相当于a
	*px = *py;
	*py = z;
}  

int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);  //写一个函数来交换
	printf("交换前：%d %d\n", a, b);
	Swap(&a, &b);  //注意这里也要改为&a---取a的地址
	printf("交换后：%d %d\n", a, b);

	return 0;
}
//只要有了地址，就远程控制了ab的值

