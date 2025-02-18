//#include<stdio.h>
//int Sum(int x)
//{
//	int i = 0;
//	int j = 1;
//	int sum = 0;
//	for (i = 1;i <= x;i++)
//	{
//		j = j * i;
//		sum = sum + j;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	printf("Input n:");
//	scanf_s("%d", &n);
//	int a = Sum(n);
//	printf("1!+ 2!+ … + % d != % d\n", n, a);
//
//	return 0;
//}

#include<stdio.h>
int Sum(int y)
{
	int sum = 0;
	int i = 0;
	for (i = 1;i < y;i++)
	{
		if (y % i == 0)
		{
			sum = sum + i;
		}
	}
	return sum;
}
int IsPerfect(int x)
{
	if (Sum(x) == x)
		return x;
	else
		return 0;
}
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1;i <= 1000;i++)
	{
		if (IsPerfect(i))
		{
			printf("%d is a perfect number\n", i);
			printf("%d=1", i);
			for (j= 2; j < i; j++) 
			{
				
				if (i % j == 0) 
				{
					printf("+%d", j);
				}
			}

			int sum = 0;
			int j = 0;
			printf("\n");
		}
	}
	return 0;
}

//#include <stdio.h>
//#include <stdbool.h>
//
//// 判断一个数是否是完美数的函数
//bool IsPerfect(int num) {
//    if (num <= 1) {
//        return false;
//    }
//
//    int sum = 0;
//    for (int i = 1; i < num; i++) {
//        if (num % i == 0) {
//            sum += i;
//        }
//    }
//
//    return sum == num;
//}
//
//int main() {
//    printf("1到1000之间的完美数及其因子如下：\n");
//
//    for (int num = 1; num <= 1000; num++) {
//        if (IsPerfect(num)) {
//            printf("%d 是完美数，因子有: ", num);
//
//            for (int i = 1; i < num; i++) {
//                if (num % i == 0) {
//                    printf("%d ", i);
//                }
//            }
//
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
