#define _CRT_SECURE_NO_WARNINGS
//��һ�ڿ�


//#include<stdio.h>
//int main(void)		
//{
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//
//	return 0;
//
//}
//printf��һ���⺯��
//std  ��׼
//i input o output
//ctrl+f5��Fn+ctrl+f    fn+**=ԭ���Ĺ���
//return 0 ���0��������ǰ���������Ҳ�����Σ�int��  ����һ��ϰ�ߣ���Ҫ��
//main ��һ��Լ���׳ɵ�ϰ��
//main���ǳ������ڣ�ֻ��һ��main����
//CTRL+k+cע��  ctrl+k+Uȡ��ע��    ���ߵ�����һ�����������


//�ڶ��ڿ�
//6.6---С��--������            66--����--����      abc--�ַ���
//char �ַ���������  short ������  
//sizeof ��֪ÿ������������ռ�Ĵ�С
//char1
//short2
//int4
//long4
//long long8
//float4
//double8
//#include<stdio.h>
//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//		return 0;}



//�����ڿ�
//#include<stdio.h>
//int a = 100;//ȫ�ֱ���
//int main()
//
//{
//short age = 18;//�ֲ�����
//int high = 160;
//float weight = 60.0;
//int a = 10;
//printf("%d", a);
//return 0;
//}




////дһ������������������ĺ�
//#include<stdio.h>
//#include <math.h>
//int main()
//
//{
//	int sum;
//	int num1 = 0;
//	int num2 = 0;//��ʼ��
//	scanf("%d%d", &num1, &num2);//����������
//	sum = num1 + num2;
//	printf("sum:%d", sum);
//
//	
//	return 0;
//}


//���������ı���������ռ�
//�����ͳ����ĸ���  �����ķ��ࣺ�ֲ�������ȫ�ֱ���  ��ͬһ����Χ������ظ�����
//ȫ�ֱ����;ֲ����������ֿ�����ͬ������ʹ�þֲ�����  ��������д��һ����
//	int num1 = 0;  ��ϰ�߱����ڴ�����ʱ��͸���ֵ���������԰ѱ�����ʼ�����ô���1.�������ᾯ�� 2.�������ʼ������ôϵͳ��Ĭ������һ������������������һ��һ�Ͳ�֪����˭�ˣ�����������ʼ���ˣ������0�����ͺò���l����
//printf��һ���������  scanf��һ�����뺯��
//scanf 'scanf':( This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.)����˵������ȫ������һΪ��Ϊscanf-s��scanf-s��VS�������Լ��ṩ�ĺ������Ǳ�׼C�����ṩ�ĺ�����Ҳ����˵ֻ��VS��ʶ��������������������ʶ�������޷�ʵ�ֿ�ƽ̨�ı�̣�  ������
// ������������ڱ���ʱ�����������ң�#define _CRT_SECURE_NO_WARNINGS���ڴ���ĵ�һ��
// ��һ��һ�����ݵİ취����VS�İ�װ·���£���һ���ļ���newc++file.cpp����VS�����д����µ�.c����.cpp���ļ���ʱ�򣬶��ǿ���newc++file.cpp����ļ���






//���Ľڿ�
//���������������������
//���������������������ʹ�ã��������ľ��������򣩣�1.�ֲ�����  �ֲ��������������Ǳ������ڵľֲ���Χ   2.ȫ�ֱ��� ������Ϊ�������̣��������ⲿ��
//���������ⲿ�ķ���(��No.3)  exern int a;
//�������ڣ�  1.�ֲ����� :�����������������ڿ�ʼ�����������������ڽ���  2.ȫ�ֱ����������������������


//No.1
//int main()
//{
//	{
//		int a = 10;
//		printf("a=%d", a);
//
//	}
//	printf("a=%d", a);//���󣬴�����ʾΪ"a",δ�����ı�ʶ��
//}
  


//No.2
//#include <stdio.h>
//int main()
//{
//	int a = 10;//�ֲ�������������
//	{
//
//		printf("a=%d", a);
//
//	}
//	printf("a=%d", a);
//	return 0;
//}

//No.2
//#include <stdio.h>//�������н��Ϊtest-->=10  a=10 a=10 ����������ܳ���
//int a = 10;
//void test()
//{
//	printf("test-->%d", a);
//}
//int main()
//{
//
//	test();
//	{	printf("a=%d", a);
//
//	}
//	printf("a=%d", a);
//	return 0;
//}


//No.3
//#include <stdio.h>//��a��: δ�����ı�ʶ��,����
//
//void test()
//{
//	printf("test-->%d", a);
//}
//int main()
//{
//
//	test();
//	{
//		printf("a=%d", a);
//
//	}
//	printf("a=%d", a);
//	return 0;
//}


//#include <stdio.h>
//extern int a;//���������ⲿ�ķ��ţ���һ��Դ�ļ�text.c ��д��int a=10)
//
//void test()
//{
//	printf("test-->%d", a);
//}
//int main()
//{
//
//	test();
//	{
//		printf("a=%d", a);
//
//	}
//	printf("a=%d", a);
//	return 0;
//}

