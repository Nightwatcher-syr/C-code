//ѭ���ṹ


//����n�Ľ׳�
//1*2*3....
// ��ʱ�������������
#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		ret = ret * i;//��1һֱ�˵�n
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//����1��+2��+3��+������+10��
//�൱������ļ������ʮ�Σ�Ȼ���ڰѽ�����
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 10;n++)
//	{
//		ret = 1;//ÿ��ret��Ӧ����ret�ص�1����Ȼ������ۼ�ЧӦ
//		for (i = 1;i <= n;i++)
//		{
//
//			ret = ret * i;
//
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);//�������ִ���Ч���Ƚϲ��Ϊÿ�ζ�Ҫ��1*2*3*4.������ʼ�㣬����ܹ������ϻ���Ľ���ͺ���
//
//	return 0;
//}

//�����Ż��İ汾�������������ʼ���뷨
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1;n <= 10;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);//������ÿ�ζ�������������һ�ص�ֵ�ˣ����ô�1����
//
//	return 0;
//}



//5.4 ��������������ȡ��ͬ���޵������ʷֱ�Ϊ��

//������

/*����

2.25 %

����1��

2.43 %

����2��

2.70 %

����3��

2.88 %

����5��

3.00 %

����8��

Ҫ�������Ǯ�ı�������ޣ�����ʱ�ܴ����еõ�����Ϣ�뱾����ܺ͡�дӢ����ĸ��Ȼ��ת�����Ӣ����ĸ����AS*///CII��ֵ��ʾ����Ļ�ϣ��������Ӣ����ĸ����ת����ֱ�ӽ�������ASCII��ֵ�������Ļ�ϡ�
//#include<stdio.h>
//int main()
//{
//	double pri;
//	int time;
//	double sum;
//	scanf_s("%lf%d", &pri, &time);
//	switch (time)
//	{
//		case 1:
//			sum = pri * (1 + 0.0225);
//			printf("%f\n", sum);
//			break;
//		case 2:
//			sum = pri * (1 + 0.0243);
//			printf("%f\n", sum);
//			break;
//		case 3:
//			sum = pri * (1 + 0.0270) * (1 + 0.0270) * (1 + 0.0270);
//			printf("%f\n", sum);
//			break;
//		case 5:
//			sum = pri * (1 + 0.0288) * (1 + 0.0288) * (1 + 0.0288) * (1 + 0.0288) * (1 + 0.0288) ;
//			printf("%f\n", sum);
//			break;
//		case 8:
//			sum = pri * (1 + 0.0300) * (1 + 0.0300) * (1 + 0.0300) * (1 + 0.0300) * (1 + 0.0300) * (1 + 0.0300) * (1 + 0.0300) * (1 + 0.0300);
//			printf("%f\n", sum);
//			break;
//		default:
//			printf("Error rate!\n");
//
//
//	}
//	return 0;
//}
//����һ����ҵ������ĵ�һ��ԭ���Ƕ����������Ҫ���Զ��
//�ڶ���������double������%lf


//5.7 �Ӽ�������һ��Ӣ����ĸ������Ǵ�дӢ����ĸ������ת��ΪСдӢ����ĸ�������СдӢ����ĸ������ת��Ϊ��дӢ����ĸ��Ȼ��ת�����Ӣ����ĸ����ASCII��ֵ��ʾ����Ļ�ϣ��������Ӣ����ĸ����ת����ֱ�ӽ�������ASCII��ֵ�������Ļ�ϡ�
//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	ch = getchar();
//	if ((ch >= 'a') && (ch <= 'z'))
//	{
//		ch = ch - 32;
//		printf("%c\t%d\n", ch,ch);
//
//}
//	else if ((ch >= 'A') && (ch <= 'Z'))
//	{
//		ch = ch + 32;
//		printf("%c\t%d\n", ch,ch);
//	}
//	else
//		printf("%c\t%d\n", ch,ch);
//	return 0;
//}
//����ĵ�һ��������%c\t%d\n�������Ҫ��������ch
//�ڶ�����((ch >= 'A') && (ch <= 'Z'))�����ֱ©���ٳ�---��������
//1.(��ch ��>= 'A')&& ��ch�� <= 'Z')��һ���汾�������ģ�����ch�Ǳ�����������������ϡ��������Ϻ�ͱ����һ��������������ĩ�ж϶��Ǵ����
//2.(ch >= 'A' && ch <= 'Z')�ڶ����汾�����ӣ���ͬ�����󣬿����������ȼ��Ĺ�ϵ��������


//�Ӽ�������ĳ��ĳ�£��������꣩����switch������������ĸ���ӵ�е�������Ҫ���������Լ������·ݲ��ںϷ���Χ�ڵ��������֪�����2����29�죬ƽ���2����28�졣



#include<stdio.h>;
int main()
{
	int year;
	int month;
	scanf_s("%d%d", &year, &month);
	if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31��\n");
			break;
		case 2:
			printf("29��\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30��\n");
			break;
		default:
			printf("Error number!");
		}

	}
	else
	{
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31��\n");
			break;
		case 2:
			printf("28��\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30��\n");
			break;
		default:
			printf("Error number!");
		}

	}

	return 0;
}
//����ԭ��case 11:�����11���ܼӡ���  ��Ҫ�����ʲôʱ���ʲôʱ�򲻼ӣ������ַ�ʱҪ��