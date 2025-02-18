 



//#include<stdio.h>
//int main()
//{
//	int sum, n,m,i;
//	int a = 2;
//	n = 1;
//	m = 1;
//	sum = 0;
//	for (i = 0;i < 10;i++)
//	{
//		n = n * a;
//		sum = sum + n;
//	}
//	printf("%d", sum);
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = -1;
//	for (i = 1;i <= 100;i++)
//	{
//		n = -n;
//		sum = sum + n * i;
//	}
//	printf("%d", sum);
//	return 0;
//}


#include<stdio.h>
int main()
{
	char a[] =  "This Is a c Program";
	int i = 0;
	int count = 0;
	for (i = 0;a[i] != '\0';i++)
	{
		count++;
	}
	printf("%d", count);
	return 0;
}
