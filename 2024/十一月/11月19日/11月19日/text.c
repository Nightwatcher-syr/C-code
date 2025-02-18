#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0, n = 0,i,sum,b;
	printf("Input a,n:");
	scanf_s("%d,%d", &a, &n);
	sum = a;
	b = a;
	for (i = 2;i <= n;i++)
	{
        a = b+10*a;           //这里出错改了半天，是因为b这里，自己好好想想
		sum = sum + a;
	}
	printf("sum=%ld\n", sum);

	return 0;

}


//#include<stdio.h>
//int main()
//{
//	printf("Cock\tHen\tChick\n");
//	int Cock = 1, Hen = 0, Chick = 0;
//for(Cock=0;Cock<=100;Cock++)
//	{
//	for(Hen=0;Hen<=100-Cock;Hen++)
//		{
//			Chick = 100 - Hen - Cock;
//			if ((Cock * 5 + Chick * 1.0 / 3.0 + Hen * 3) == 100)
//			{
//				printf("%d\t%d\t%d\n", Cock, Hen, Chick);
//			}
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 1;
//	int count = 0;
//    float sum_e = 1;
//	int a = 1;
//	do 
//	{
//		a = a * i;
//		sum_e = sum_e + 1.0 / a;
//		count++;
//		i++;
//	}
//	while ((1.0/a) >= 0.000001);
//	printf("e=%f,count=%d\n", sum_e, count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("Input n:");
//	int n = 0;
//	double sum = 0;
//	double i,b,m=1.0,z=2.0;
//	scanf("%d", &n);
//	for (i = 0;i <n;i++)
//	{
//		sum = sum + z/m;      //这种方法我没有学会，要记住这种暂存分子与分母，并更新分子与分母的方法
//		b = z;
//		z = z + m;
//		m = b;
//		
//	}
//	printf("sum=%.2f\n", sum);
//
//}



//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int num;
//	for (a = 1; a < 10;a++)
//	{
//		for (b = 0;b < 10;b++)
//		{
//			for (c = 0;c < 10;c++)
//			{
//				if (pow(a, 3) + pow(b, 3) + pow(c, 3) == (100 * a + 10 * b +  c))
//				{
//					num = 100 * a + 10 * b + c;
//					printf("%6d",num);
//				}
//			}
//			
//	     }
//	
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 1;
//	double b=0;
//    for(i=1;i<=5;i++)
//	{
//		b =(b+1000)/(1+0.01875*12);//要搞清楚什么是复利，复利即使利滚利，把上一个月的（本金加利率）再乘以下一个月的利率
//		//这里是非复利，则只需要把月息乘以月份
//	}
//	printf("%f", b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int a = 0,b;
//
//		for (b = 1;b <= 9;b++)
//		{
//		printf("%4d", b);
//		}
//		printf("\n");
//		for (b = 1;b <= 9;b++)
//		{
//			printf("   -", b);
//		}
//		printf("\n");
//
//	for (i = 1;i <= 9;i++)
//	{
//	
//		for (j = 1;j <= 9;j++)
//		{
//			if (j < i)
//			{
//				printf("    ");
//		     }
//			else
//			{
//				a = i * j;
//				printf("%4d", a);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int i = 0,j=0,k=0,m=0;
//	int find = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <= 9;j++)
//		{
//			k = i * 1000 + i * 100 + j * 10 + j;
//			for (m = 1;(m*m)<=k ;m++)
//			{
//				if (k == m * m)
//				{
//					printf("k=%d,m=%d\n",k,m);
//					goto End;
//				}
//			}
//
//		}
//     }
//	End:
//	;
//	return 0;
//}

//写一个函数，实现一个整形有序数组的二分查找
//1.去哪里找？
//2.找到/没找到返回什么
//3.找到了，就返回下标/没找到，能返回0吗？--显然不能，因为0是第一个数对应的下标，会产生歧义---建议返回-1----下标不可能是-1
//#include<stdio.h>
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//这句话不能放到外面，因为mid的值是随着循环不段变化的
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了，返回下标
//		}
//	}
//
//	return -1;//找不到，返回-1
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);  //养成先写代码直到怎么用这个函数，再写函数的习惯，这样可以清楚知道函数的功能和返回类型
//	if (ret == -1)
//	{
//		printf("找不到\n");
//
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//形参的名字和实参的名字可以相同，可以不同
//一种错误的写法---有人疑惑为什么不能在函数内部求sz代码的结果是：找不到，why？
//改动过的代码如下

//结论：在函数内部计算一个函数参数部分的元素个数是不可以的

//#include<stdio.h>
//int binary_search(int arr[], int k)//这里的arr[]只是一个指针变量而已，因为数组是连续存放的，通过第一个元素的地址即可找到整个数组的地址，最后可得到整个数组
////但归根结底arr只是一个数的地址，在下面计算sz的时候，只是在拿这一个数在来计算
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//这里监视sz的结果是1      
//	//如果联想之前的变量传参，形参是实参的一份临时拷贝---数组传参是否可以照做呢---答案是不能的
//	//因为如果实参的数组有10个元素，在创建形参的时候就要再创建10个元素--造成了浪费、
//	//假设实参有1万个数，形参就得再创建1万个元素，这样浪费就更大
//	//实际上在传递数组的时候，只是把数组的第一个元素的地址传过去了----即形参里的arr[]是一个指针变量
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//这句话不能放到外面，因为mid的值是随着循环不段变化的
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了，返回下标
//		}
//	}
//
//	return -1;//找不到，返回-1
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int ret = binary_search(arr, k);  //养成先写代码直到怎么用这个函数，再写函数的习惯，这样可以清楚知道函数的功能和返回类型
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//简单讲一下布尔类型
//C语言内置类型：int double char float 
//C99中引入了bool类型：用来表示真假的 bool flag=ture    bool flag=false---要么为真，要么为假


//判断一个数是不是素数、
//1.是素数  2.不是素数
//#include<math.h>
//#include<stdbool.h>//要用bool类型的头文件-------bool类型实际上是把1 0封装了一层
//bool prime(int n)
//{
//	int j = 0;
//
//			for (j = 2;j <= sqrt(n);j++)
//			{
//				if (n % j == 0)
//				{
//			
//					return false;     //这里稍加改变  0-->false  但是返回0也没问题（但最好不这样       
//				}
//			}
//			return true;              //这里稍加改变  1-->true
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
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//
//	return 0;
//}

//写一个函数，每调用一次这个函数，就会将num的值加1
// 不止一种写法
//#include<stdio.h>
//int Add(int* p)
//{
//	(*p)++; 
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d", num);//1
//	Add(&num);
//	printf("%d", num);//2
//	Add(&num);
//	printf("%d", num);//3
//	Add(&num);
//	printf("%d", num);//4
//	Add(&num);
//	printf("%d", num);//5
//	return 0;
//}


//#include<stdio.h>
//int Add(int n)
//{
//	return n+1;   //这样也可以
//}
//int main()
//{
//	int num = 0;
//	num=Add(num);
//	printf("%d", num);//1
//	num = Add(num);
//	printf("%d", num);//2
//	num = Add(num);
//	printf("%d", num);//3
//	num = Add(num);
//	printf("%d", num);//4
//	num = Add(num);
//	printf("%d", num);//5
//	return 0;
//}

//#include<stdio.h>
//int Add(int n)
//{
//	return n++;   //n++不可以，因为先返回，再++    //换成++n就可以了
//}
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d", num);//1
//	num = Add(num);
//	printf("%d", num);//2
//	num = Add(num);
//	printf("%d", num);//3
//	num = Add(num);
//	printf("%d", num);//4
//	num = Add(num);
//	printf("%d", num);//5
//	return 0;
//}



//函数的嵌套与调用
//函数是可以互相调用的
//函数可以嵌套调用，但是不能嵌套定义（即函数里面不能包含一个新的函数）---函数之间的地位是平等的


//链式访问
//链式访问的前提是函数有返回值，如果没有返回值，则无法作为其他函数的参数
#include<stdio.h>
int main()
{
	int len = strlen("abcdef");
	printf("%d\n", len);
	printf("%d\n", strlen("abcdef"));//这样写也可以---strlen("abcdef"）的返回值做了printf的参数----这就是链式访问
	printf("%d\n", printf("%d", printf("%d", 43)));//-----Woooo ？ 这里打印的结果是4321
	//从外到内看
	//最外层的printf要打印的是printf("%d", printf("%d", 43))的返回值---返回值是什么不知道，先不管，再往内部调用
	//printf("%d", printf("%d", 43))要打印printf("%d", 43)的返回值---返回值是什么不知道，先不管，再往内部调用
	//printf("%d", 43)要打印的铁定是43----因此屏幕上先打印43
	//通过MSDN查找--printf的返回值是printf打印的数的个数
	//则printf("%d", 43)的返回值为2，屏幕上打印2
	//printf("%d", printf("%d", 43))打印的是2，则返回值为1，屏幕上再打印1
	//最终则打印4321
	//神奇吧

	return 0;
}

//！！！！！函数一定要写返回类型
// 很不专业i
// 比如下面的代码是很不建议的
// Add(int n)
//{
//	return n++;   //n++不可以，因为先返回，再++    //换成++n就可以了
//}
//函数不写返回类型的时候，默认返回类型是int


//！！！！！不要写了返回类型但不返回
//下面的就是不建议的
//int Add(int n)
//{
//	 printf("xixi\n");
//}
//当不写返回值的时候，系统默认返回执行的最后一条指令的返回值
//上述打印的就是5
//因为xixi加上\n是5个字符

//当返回类型是void是不需要返回值
//int main(void)---void是指明确告诉不要给main函数传参数

//main函数有3个参数
//int main(int argc,char*argv[],char*envp[])
//{
//
//}