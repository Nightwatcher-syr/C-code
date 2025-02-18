//数组越界
//数组的下标是有范围限制的，如果使用了小于0的下标或者大于n-1的下标，则会造成数组越界
//越界有时候编译器不报错
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d", arr[i]);//这里的结果就造成了越界，越界的数据是-858993460--是一个任意的数（因为你不知道下一个地址存的是什么）
//		//编译器不报错就要自己检查
//		//二维数组的行和列也存在越界
//	}
//	return 0;
//}



//数组作为函数参数

//冒泡排列
//核心思想为两个相邻的元素进行比较，如果比较的结果不满足条件，这两个元素需要交换顺序
// 要升序
//4321  比较43，交换
//3421
//3241
//3214  直到这里，只关注4，4来到了他应该出现的位置上
// 一趟冒泡排序结束，比较了3次，让一个数据来到他应该到的地方
//2314
//2134
// 第二趟冒号排序结束
//1234
//第三趟冒号排序结束
//所有元素归位
//即n个数据的冒泡排序需要n-1趟冒泡排序
//每趟比较的次数依次递减


//把数组的数据排成升序
//即改变元素的顺序
//冒泡排序的算法，对数组进行排序

//数组传参的时候，形参有两种写法
//1.数组的形式
//2.指针的形式

//void bubble_sort(int arr[])//数组传参，数组来接收，这样理解起来比较容易直观  //但注意不是创建了一个新的数组,其实是一个指针，是第一个元素的地址
//
//{
//	//趟数
//	int sz = sizeof(arr) / sizeof(arr[0]);  //想起来吗，以前讲过，这里的arr[]是第一个元素的地址//所以这里算出来的是sz=1
//
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr);//把数组传过去----直接给过去一个数组名-----不能写成（arr【】）
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;//遗憾的是这样写出来的结果是错误的，没有排序
//}


//改正方法，既然没有办法在函数内部求，那就在函数外部求，再把sz传给函数
//void bubble_sort(int arr[],int sz)
//
//{
//
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}//这样运行结果就正确了
//int least_common_mutiple(int x, int y)
//{
//    int i = 1;
//    int count = 0;
//    if (x < 0 || y < 0)
//        return -1;
//    while (count != 1)
//    {
//        if (i % x == 0 && i % y == 0)
//        {
//            count = 1;
//            return i;
//            break;
//        }
//        i++;
//    }
//    return -1;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    printf("Input a,b:");
//    scanf_s("%d%d",&a,&b);
//    int c = least_common_mutiple(a, b);
//    if (c != -1)
//        printf("Least Common Mutiple of %d and %d is %d\n", a, b, c);
//    else
//        printf("Input number should be positive!\n");
//    return 0;
//}

#include <stdio.h>

int max(int a, int b) 
{
    return a > b ? a : b;
}

//#include<math.h>
//int least_common_mutiple(int x, int y)
//{
//    int i =max(x,y);
//    int count = 0;
//    if (x < 0 || y < 0)
//        return -1;
//    while (count != 1)
//    {
//        if (x % i == 0 && y % i == 0)
//        {
//            count = 1;
//            return i;
//            break;
//        }
//        i--;
//    }
//    return -1;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    printf("Input a,b:");
//    scanf_s("%d%d", &a, &b);
//    int c = least_common_mutiple(a, b);
//    if (c != -1)
//        printf("Greatest Common Divisor of %d and %d is %d\n", a, b, c);
//    else
//        printf("Input number should be positive!\n");
//    return 0;
//}



int prime(int x)
{
	int j = 0;

			for (j = 2;j <= x-1;j++)
			{
				if (x % j == 0)
				{
			
					return 0;             
				}
			}
			return 1;
}
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	printf("Input n : ");
	scanf_s("%d", &n);
	for (i = 2;i<=n;i++)
	{
		if (prime(i))
		{
			printf("%d\t",i);
		}
	}

	return 0;
}
