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
        a = b+10*a;           //���������˰��죬����Ϊb����Լ��ú�����
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
//		sum = sum + z/m;      //���ַ�����û��ѧ�ᣬҪ��ס�����ݴ�������ĸ�������·������ĸ�ķ���
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
//		b =(b+1000)/(1+0.01875*12);//Ҫ�����ʲô�Ǹ�����������ʹ������������һ���µģ���������ʣ��ٳ�����һ���µ�����
//		//�����ǷǸ�������ֻ��Ҫ����Ϣ�����·�
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

//дһ��������ʵ��һ��������������Ķ��ֲ���
//1.ȥ�����ң�
//2.�ҵ�/û�ҵ�����ʲô
//3.�ҵ��ˣ��ͷ����±�/û�ҵ����ܷ���0��--��Ȼ���ܣ���Ϊ0�ǵ�һ������Ӧ���±꣬���������---���鷵��-1----�±겻������-1
//#include<stdio.h>
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//��仰���ܷŵ����棬��Ϊmid��ֵ������ѭ�����α仯��
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
//			return mid;//�ҵ��ˣ������±�
//		}
//	}
//
//	return -1;//�Ҳ���������-1
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);  //������д����ֱ����ô�������������д������ϰ�ߣ������������֪�������Ĺ��ܺͷ�������
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//�βε����ֺ�ʵ�ε����ֿ�����ͬ�����Բ�ͬ
//һ�ִ����д��---�����ɻ�Ϊʲô�����ں����ڲ���sz����Ľ���ǣ��Ҳ�����why��
//�Ķ����Ĵ�������

//���ۣ��ں����ڲ�����һ�������������ֵ�Ԫ�ظ����ǲ����Ե�

//#include<stdio.h>
//int binary_search(int arr[], int k)//�����arr[]ֻ��һ��ָ��������ѣ���Ϊ������������ŵģ�ͨ����һ��Ԫ�صĵ�ַ�����ҵ���������ĵ�ַ�����ɵõ���������
////��������arrֻ��һ�����ĵ�ַ�����������sz��ʱ��ֻ��������һ������������
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//�������sz�Ľ����1      
//	//�������֮ǰ�ı������Σ��β���ʵ�ε�һ����ʱ����---���鴫���Ƿ����������---���ǲ��ܵ�
//	//��Ϊ���ʵ�ε�������10��Ԫ�أ��ڴ����βε�ʱ���Ҫ�ٴ���10��Ԫ��--������˷ѡ�
//	//����ʵ����1��������βξ͵��ٴ���1���Ԫ�أ������˷Ѿ͸���
//	//ʵ�����ڴ��������ʱ��ֻ�ǰ�����ĵ�һ��Ԫ�صĵ�ַ����ȥ��----���β����arr[]��һ��ָ�����
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//��仰���ܷŵ����棬��Ϊmid��ֵ������ѭ�����α仯��
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
//			return mid;//�ҵ��ˣ������±�
//		}
//	}
//
//	return -1;//�Ҳ���������-1
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int ret = binary_search(arr, k);  //������д����ֱ����ô�������������д������ϰ�ߣ������������֪�������Ĺ��ܺͷ�������
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//�򵥽�һ�²�������
//C�����������ͣ�int double char float 
//C99��������bool���ͣ�������ʾ��ٵ� bool flag=ture    bool flag=false---ҪôΪ�棬ҪôΪ��


//�ж�һ�����ǲ���������
//1.������  2.��������
//#include<math.h>
//#include<stdbool.h>//Ҫ��bool���͵�ͷ�ļ�-------bool����ʵ�����ǰ�1 0��װ��һ��
//bool prime(int n)
//{
//	int j = 0;
//
//			for (j = 2;j <= sqrt(n);j++)
//			{
//				if (n % j == 0)
//				{
//			
//					return false;     //�����ԼӸı�  0-->false  ���Ƿ���0Ҳû���⣨����ò�����       
//				}
//			}
//			return true;              //�����ԼӸı�  1-->true
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

//дһ��������ÿ����һ������������ͻὫnum��ֵ��1
// ��ֹһ��д��
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
//	return n+1;   //����Ҳ����
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
//	return n++;   //n++�����ԣ���Ϊ�ȷ��أ���++    //����++n�Ϳ�����
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



//������Ƕ�������
//�����ǿ��Ի�����õ�
//��������Ƕ�׵��ã����ǲ���Ƕ�׶��壨���������治�ܰ���һ���µĺ�����---����֮��ĵ�λ��ƽ�ȵ�


//��ʽ����
//��ʽ���ʵ�ǰ���Ǻ����з���ֵ�����û�з���ֵ�����޷���Ϊ���������Ĳ���
#include<stdio.h>
int main()
{
	int len = strlen("abcdef");
	printf("%d\n", len);
	printf("%d\n", strlen("abcdef"));//����дҲ����---strlen("abcdef"���ķ���ֵ����printf�Ĳ���----�������ʽ����
	printf("%d\n", printf("%d", printf("%d", 43)));//-----Woooo �� �����ӡ�Ľ����4321
	//���⵽�ڿ�
	//������printfҪ��ӡ����printf("%d", printf("%d", 43))�ķ���ֵ---����ֵ��ʲô��֪�����Ȳ��ܣ������ڲ�����
	//printf("%d", printf("%d", 43))Ҫ��ӡprintf("%d", 43)�ķ���ֵ---����ֵ��ʲô��֪�����Ȳ��ܣ������ڲ�����
	//printf("%d", 43)Ҫ��ӡ��������43----�����Ļ���ȴ�ӡ43
	//ͨ��MSDN����--printf�ķ���ֵ��printf��ӡ�����ĸ���
	//��printf("%d", 43)�ķ���ֵΪ2����Ļ�ϴ�ӡ2
	//printf("%d", printf("%d", 43))��ӡ����2���򷵻�ֵΪ1����Ļ���ٴ�ӡ1
	//�������ӡ4321
	//�����

	return 0;
}

//��������������һ��Ҫд��������
// �ܲ�רҵi
// ��������Ĵ����Ǻܲ������
// Add(int n)
//{
//	return n++;   //n++�����ԣ���Ϊ�ȷ��أ���++    //����++n�Ϳ�����
//}
//������д�������͵�ʱ��Ĭ�Ϸ���������int


//������������Ҫд�˷������͵�������
//����ľ��ǲ������
//int Add(int n)
//{
//	 printf("xixi\n");
//}
//����д����ֵ��ʱ��ϵͳĬ�Ϸ���ִ�е����һ��ָ��ķ���ֵ
//������ӡ�ľ���5
//��Ϊxixi����\n��5���ַ�

//������������void�ǲ���Ҫ����ֵ
//int main(void)---void��ָ��ȷ���߲�Ҫ��main����������

//main������3������
//int main(int argc,char*argv[],char*envp[])
//{
//
//}