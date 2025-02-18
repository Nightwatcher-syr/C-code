//#include<stdio.h>
//int Max(i);
//int Min(i);
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int max = 0;
//	int min = 0;
//	int maxpos = 0;
//	int minpos = 0;
//	int arr[10] = { 0 };
//
//
//	for(j=0;j<10;j++)
//	{
//		scanf_s("%d", &i);
//
//		arr[j] = i;
//
//		if (j == 0)
//		{
//			max = i;
//			min = i;
//		}
//		if (i > max)
//		{
//			max = i;
//			maxpos = j;
//		}
//		if (i < min)
//		{
//			min = i;
//			minpos = j;
//		}
//		
//		getchar();
//	}
//
//	printf("max=%d,maxpos=%d\n",max, maxpos);
//	printf("min=%d,minpos=%d\n", min, minpos);
//
//	return 0;
//}

//Input n(n <= 10) :




//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	printf("Input n(n<=10):");
//	scanf_s("%d", &n);
//	int arr[10][10] = {0};
//	for (i = 0;i <=n;i++)
//	{
//		for (j = 0;j < i;j++)
//		{
//			if (j == 0 || j == i)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0;i <=n;i++)
//	{
//		for (j = 0;j < i;j++)
//			printf("%4d", arr[i][j]);
//		printf("\n");
//	}
//	
//	return 0;
//}


//a数组中的值为：1、3、5、7、8，b数组中的值为：2、3、4、5、8

//#include<stdio.h>
//int  fun( int a, int b)
//{
//	int m = 0;
//	return m = a*a + b * b;
//
//}
//int main()
//{
//	int arr1[] = { 1,3,5,7,8 };
//	int arr2[] = { 2,3,4,5,8 };
//	int i = 0;
//	int j = 0;
//	for (i = 0;i <= 4;i++)
//	{
//		j = 4 - i;
//			int a = arr1[i];
//			int b = arr2[j];
//			printf("%4d", fun(a, b));
//		
//	}
//	return 0;
//}


//Input five numbers:\n
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[5] = { 0 };
//
//	printf("Input five numbers:\n");
//
//	for (i = 0;i < 5;i++)
//	{
//		scanf_s("%d", &j);
//		arr[4-i] = j;
//	}
//
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//100  200  300

//400  500  600

//700  800  900

//#include<stdio.h>
//int main()
//{
//	int arr[3][3] = { 100,200,300,400,500,600,700,800,900 };
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			if (j > i)
//			{
//				a = arr[i][j];
//				arr[i][j] = arr[j][i];
//				arr[j][i] = a;
//			}
//		
//		}
//	}
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//"sum=%d\n"
//#include<stdio.h>
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			if (i == j )
//			{
//				sum = sum + arr[i][j];
//			}
//			if (i+j == 2)
//			{
//				sum = sum + arr[i][j];
//			}
//		
//		}
//	}
//
//	printf("sum=%d\n",sum);
//
//	return 0;
//}

//假如score数组中的成绩如下：80、90、60、70、50，
// 请编写函数 int fun(int score[], int m, int below[])，
// 其功能是：计算 score 中 m 个人的平均成绩 aver, 
// 将低于aver的成绩放在 below 中, 通过函数名返回人数。
// 在主函数中调用fun，并输出低于aver的成绩。
//** 无输入提示信息和输入数据
//** 输出格式要求："低于平均分的成绩如下:\n"
//"%d\n"

//#include<stdio.h>
//int main()
//{
//	int score[] = { 80,90,60,70,50 };
//	int below[] = { 0 };
//	int i = 0;
//	int j = 0;
//	int aver = 0;
//	
//	for (i = 0;i < 5;i++)
//	{
//		j = j + score[i];
//	}
//	aver = j / (sizeof(score) / sizeof(score[0]));
//	printf("低于平均分的成绩如下:\n");
//	for (i = 0;i < 5;i++)
//	{
//		if (score[i] < aver)
//		{
//			printf("%d\n", score[i]);
//		}
//	}
//	return 0;
//}
//for (i = 0;i < 3;i++)
//{
//	for (j = 0;j < 3;j++)
//		arr[i][j] = rand() % 10;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[3][3] = { 1,9,7,2,3,8,4,5,6 };
//	srand(time(NULL));
//	int i =0,j= 0,m=0;
//	printf("Input m:");
//	scanf_s("%d", &m);
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			if (j >= i)
//				arr[i][j] *= m;
//		}
//	}
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			printf("%4d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//ctrl+x----快速删除


//1.34.31
//断言
//1.42.54
//const 