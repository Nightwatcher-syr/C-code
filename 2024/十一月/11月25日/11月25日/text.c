//����Խ��
//������±����з�Χ���Ƶģ����ʹ����С��0���±���ߴ���n-1���±꣬����������Խ��
//Խ����ʱ�������������
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d", arr[i]);//����Ľ���������Խ�磬Խ���������-858993460--��һ�������������Ϊ�㲻֪����һ����ַ�����ʲô��
//		//�������������Ҫ�Լ����
//		//��ά������к���Ҳ����Խ��
//	}
//	return 0;
//}



//������Ϊ��������

//ð������
//����˼��Ϊ�������ڵ�Ԫ�ؽ��бȽϣ�����ȽϵĽ��������������������Ԫ����Ҫ����˳��
// Ҫ����
//4321  �Ƚ�43������
//3421
//3241
//3214  ֱ�����ֻ��ע4��4��������Ӧ�ó��ֵ�λ����
// һ��ð������������Ƚ���3�Σ���һ������������Ӧ�õ��ĵط�
//2314
//2134
// �ڶ���ð���������
//1234
//������ð���������
//����Ԫ�ع�λ
//��n�����ݵ�ð��������Ҫn-1��ð������
//ÿ�˱ȽϵĴ������εݼ�


//������������ų�����
//���ı�Ԫ�ص�˳��
//ð��������㷨���������������

//���鴫�ε�ʱ���β�������д��
//1.�������ʽ
//2.ָ�����ʽ

//void bubble_sort(int arr[])//���鴫�Σ����������գ�������������Ƚ�����ֱ��  //��ע�ⲻ�Ǵ�����һ���µ�����,��ʵ��һ��ָ�룬�ǵ�һ��Ԫ�صĵ�ַ
//
//{
//	//����
//	int sz = sizeof(arr) / sizeof(arr[0]);  //����������ǰ�����������arr[]�ǵ�һ��Ԫ�صĵ�ַ//�����������������sz=1
//
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
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
//	bubble_sort(arr);//�����鴫��ȥ----ֱ�Ӹ���ȥһ��������-----����д�ɣ�arr������
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;//�ź���������д�����Ľ���Ǵ���ģ�û������
//}


//������������Ȼû�а취�ں����ڲ����Ǿ��ں����ⲿ���ٰ�sz��������
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
//				//����
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
//}//�������н������ȷ��
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
