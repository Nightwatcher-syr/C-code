//循环语句
//while循环  for循环 do while循环
//使用频率 for>while>do while


//while循环
// while的执行流程：先判断表达式，若表达式为真（非0），则执行{}中的语句；接下来重新判断表达式，直到表达式为假（0），则跳出循环
// while中的break是用于永久的终止循环，continue是跳过本次循环的代码，直接去判断是否进入下一次循环
//No.1
//#include<stdio.h>
//int main()
//{
//	while(1)
//	{
//		printf("xixi");
//}
//	return 0;
/*}*///死循环打印xixi---一直为真则一直执行


//No.2
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;//输出结果为1~10  //可通过监视的方式来观察过程
//}
/*}*/


//No.3
//#include<stdio.h>
//int main()
//{
//
//		int i = 1;
//		while (i <= 10)
//		{
//			if (5 == i)
//				break;         //break作用于整个循环，只要不满足条件则跳出循环
//			printf("%d\n", i);
//			i++;
//		}
//	return 0;//打印结果为1~4
//}




//No.4
//#include<stdio.h>
//int main()
//{
//	 int i = 1;
//			while (i <= 10)
//			{
//				if (5 == i)
//					continue;         //continue的作用为，如果满足条件执行了continue，则跳过continue后面的语句，直接判断while的条件判断要不要执行下面的循环，然后接着执行后面语句
//				printf("%d\n", i);
//				i++;
//			}
//	return 0;//1234死循环
//}




//No.5
//#include<stdio.h>
//int main()
//{ int i = 1;
//			while (i <= 10)
//			{
//				i++;
//				if (5 == i)
//					continue;         //continue的作用为，如果满足条件执行了continue，则跳过continue后面的语句，直接判断while的条件判断要不要执行下面的循环，然后接着执行
//				printf("%d\n", i);
//			
//			}
//	return 0;//结果为2，3，4，6，7，8，9，10，11
//}



//No.6
//#include<stdio.h>
//int main()
//{
//	int ch = getchar();//getchar为输入一个字符   //！！思考为什么不是char ch=getchar
//	printf("%c\n", ch);
//	putchar(ch);//与printf效果一样，为输出一个字符
//	return 0;
//}
//MSDN是一个
//在MSDN中的解释为：get a characher from stdin(标准输入--键盘），返回值为int，如果读取正常每一次运行都返回这个字符本身（其实就是他的ASCII），所以用int类型是没问题的
//其次，如果遇到程序错误或结束，会返回一个EOF（end of file）（文件结束标志）
//

//一种新的错误类型：。。。正在进行写入，说明有个程序正在运行，把那个程序关了就行了


//No.7
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);//敲a的时候还按了一个回车
//	}
//
//	return 0;//输入一个字符，回车，则打印这个字符且自动换行了
//}
//输入缓冲区的--getchar先看了一眼输入缓冲区，如果输入缓冲区什么也没，他会等待（光标再闪），如果键盘上输入了a，这是还没有真正被getchar读取，然后输入回车，回车触发了getchar，这个时候实际上输入l两个字符a和换行，程序也输出两个字符a和换行-----则最后打印出a后自动换行了
// 这个代码的作用是清空缓冲区


//getchar作用
//例子，假设密码是一个字符串
//No.8
//#include<stdio.h>
//int main()
//{
//	char password[5] = { 0 };
//	printf("请输入密码：\n");
//	scanf_s("%s", &password);
//	printf("请确认密码（Y/N):");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//
//	}
//	else 
//	{
//		printf("No");
//	}
//	return 0;//运行不管怎样都是NO，不等你输入，解释在下
//}
//scanf 和 getchar是同种类型的，都有一个输入缓冲区，但是scanf不拿走\n他只拿该拿的，\n就被保留在缓冲区了  ，所以在getchar运行的时候，看到缓冲区里有一个\n,就把\n拿走放到了ret里，
//  
//No.9
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：\n");
//	scanf_s("%s",password);
//	getchar();
//	printf("请确认密码（Y/N):");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}
//No.10
//#include<stdio.h>
//int main()
//{char password[20] = { 0 };
//	printf("请输入密码：\n");
//	scanf_s("%s",password);
//	int ch = 0;
//	while ((ch = getchar()) != '\n')  //这里不太懂，，总之就是可以用getchar来清空输入的数据
//	{
//		;
//	}
//	printf("请确认密码（Y/N）：");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}
//No.11
//#include<stdio.h>
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')//除了0~9的ASCII值
//     continue;
//		putchar(ch);
//
//	}
//
//	return 0;  //作用为只打印数字字符
//}




//for循环


//引入
//#include<stdio.h>
//int main()
//{
//	int i = 1;//初始化
//	while (i <=10)//判断
//	{
//		printf("%d", i);
//		i++;//调整  这三个部分只要一个改变，都会影响结果，，这三个部分比较分散，改起来比较麻烦
//
//
//	}
//	return 0;
//
//}

//for循环结构：  for（表达式1；表达式2；表达式3）循环语句；----表达式1为初始化部分，表达式2为条件判断部分，表达式3为调整部分
//与while循环同样的三部分
//执行流程;初始化——>判段——>真则执行调整——>再次判断——>直到为假跳出循环
//下面的执行流程:i=1-->判断i<10-->执行打印-->重新判断。。。。》直到i>10,跳出循环
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		printf("%d\n", i);
//		printf("xixi\n");//for循环默认跟一条语句，多句要加{}
//	}
//	return 0;
//}

////break
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		if (i == 5)
//			break;     //1234到5跳出整个循环，循环终止（与while相似）  --只能结束一层循环
//		printf("%d\n", i);
//		
//	}
//	return 0;
//}

//continue
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);//结果为1234678910 ，也与（while相似），到continue时，不在执行本次循环continue后面的代码，直接跳到调整的部分，与while不同的是，不会死循环（因为会调整；如由5执行调整i++,变成了6，继续执行）
//	}
//	return 0;
//}

//建议：1.不可在循环体内修改循环变量，防止for循环失去控制 
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i = 11;//这样只打印了1，跳出了循环
//	}
//	return 0;
//}
//建议：2.for循环的循环控制变量的取值采用“前闭后开区间”的写法。
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0;i <= 9;i++)//或者<10,但是建议写为<10，这样代码的可读性比较高，一眼可以看见循环10次，<=9可读性不高,9是没有意义的
//	{
//	
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//但所有都不是绝对的
//如要打印100~200的数字
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)//反而写为比区间可读性更高，写为<201太别扭了
//
//		printf("%d\n", i++);
//	return 0;//总之怎么方便怎么来
//}

//for循环的变种
// 
// 1.
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (;;)//如果for循环的判断部分省略意味着判断会恒成立   初始化和调整都无所谓
//		printf("xixi");
//	return 0;//死循环了
//}


//2.
//不要随便乱省略
//要输出0~10
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (;i <= 10;i++)//因为i=0，可能多余了，省略了运行结果是没问题的，但在其他情况下就不一定了
//    printf("%d\n", i);
//	return 0;//总之怎么方便怎么来
//}


//反例
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i=0;i <= 10;i++)
//	{
//		for (j = 0;j < 10;j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;//打印100个hehe，正常运行
//}

//如果把i=0省略----随便乱省略会出问题
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (;i <= 10;i++)
//	{
//		for (;j < 10;j++)//第二次进来内层的时候不会再把j赋值为0，还是延续上次循环的结果，即j=3，不执行内层，实际上外层只有一次执行是有效的，第2次之后就进不去内层了
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;//！！！！只打印了10个呵呵---省略带来的后果  
//	 
//}

//3.
//一种不太稳妥的写法
//#include<stdio.h>
//int main()
//{
//	for (int i = 0;i <= 10;i++)//！！最好不这样写
//	printf("hehe\n");
//	return 0;//虽然运行没问题，但是要注意，在for语句中定义变量是C99之后才支持的，所以如果换成别的编译器，可能就不支持了
//}            //另外，C++是支持的


//4.
//多个变量控制循环
//#include<stdio.h>
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0;x < 2 && y < 5;++x, y++)
//	{
//		printf("%d%d\n",x,y);
//	}
//	return 0;//结果为0011，和while不同，是执行完printf后才执行调整语句，所以i++和++i其实没什么区别
//}

//一道练习题
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0;k = 0;i++, k++)//这里是赋值，一旦执行到判断就把k赋值为0，0为假，则不进入循环
//		k++;
//	return 0;
//}
//


//do while循环
//语法形式
// do 循环语句  while（表达式）；-----由这个形式可知 do while循环至少循环一次（因为一上来就do了，之后再判断）
//流程：上来先执行语句，然后进行判断，真则执行语句，假则跳出循环
//使用场景有限，不经常使用

//打印1~10
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	printf("%d", i);
//
//	while (i <= 10);
//	return 0;//这样写不对，结果为1死循环---因为i的值一直没变，既没有调整语句
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	}                       //自己摸索出来的，应该这么写，这样打印的结果为1~10  //同样，多语句{}
//	while (i <= 10);
//	return 0;
//}

//break在do while循环中的作用
//跳出循环
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}                       
//	while (i <= 10);
//	return 0;//结果为1~4
//}
//稍微改一下
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		i++;
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	
//	} 
//	while (i <= 10);
//	return 0;//结果为2~4
//}


//continue在do while中的作用
//跳过本次循环后面的代码
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	
//	} 
//	while (i <= 10);
//	return 0;//结果为2，3，4，6，7，8，9，10，11//最后一个11没判断对
//}

#include<stdio.h>
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;//结果为1~4
}