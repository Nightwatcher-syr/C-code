//���ѧ��C����
//1.����
//2.��ͼ������˼·���������
//3.ѧ�����


//��������������д���ָ����





//ע��   �������ɸ��Լ��Ĵ���дע�͵ĺ�ϰ��
//ע�͵ĺô�  ����˼·  �Ը��ӵĴ�����н���   д�����ʱ��дע�ͣ����Լ������˶���  ����ʱ�����Թٿ���
//No.1
//#include<stdio.h>
//int main()
//{
//	int a = 10;//˫б����C++����ע��
//
//
//   /* int b = 100;
//	print("%d", a);
//	printf("%d", b);*/    //��/*��ͷ����*/��β������C����ע��  ȱ��Ϊ����Ƕ��ע��
//
//}



//ѡ�����
//
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("Ҫ�ú�ѧϰ��(1/0)");
//	scanf("%d", &input);
//	if(input==1)
//	{
//		printf("��offer\n");
//
//
//}
//	else {
//		printf("������\n");
//	}
//
//	return 0;
//}



//ѭ�����
//C����
//20000����Ч����Ļ���

//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("д���룺%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;



//C������һ�ֽṹ���ĳ����������
//˳��ṹ
//ѡ��ṹ
//ѭ���ṹ
//�����е��������鶼���Գ���Ϊ�����ֽ⹹



//����
// д����ʡ��
//���������������ĺ�
//f(x)=2*x+1  f(x,y)�൱��x+y
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int sum;
//	scanf_s("%d%d", &n1, &n2);
//	sum = n1 + n2;
//	printf("%d", sum);
//	return 0;
//}


// int Add(int x, int y)// Add�Ǻ�����  xyΪ��������  int z = 0;z = x + y;	return z;Ϊ������     intΪ��������
//{
//	int z = 0;
//	z = x + y;
//	return z;//������д�����Լ�Ϊreturn(x+y);
//}
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//
//	scanf_s("%d%d", &n1, &n2);
//	int sum = Add(n1, n2);//�����Add����    ����--����--���  
//
//	printf("%d", sum);
//	return 0;
//}


//���飨һ����ͬ���͵�Ԫ�صļ��ϣ�
//���


//����0~9
#include<stdio.h>
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,11,9 };//��10��Ԫ��    c���Թ涨��ЩԪ��������ŵ�  e.g.1�����Ϊ0 ��11�����Ϊ8   ���0��8���±�    ͨ���±���Է��ʵ��������  arr[8] ���Է��ʵ���9������ ��11
	printf("%d\n", arr[8]);//������Ϊ11  ��ӡ��9��Ԫ��
	int i = 0;//���ӡ��������
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i = i + 1;
	}



	return 0;
}



//�ֲ��������������Ǿֲ��������ڵľֲ���Χ
//e,g,
#include<stdio.h>
int Add(int x, int y)
{
	int z = 0;//����ı���z��������Ϊ�ֲ����÷�Χ
}
int main()
{
	int a = 1;
	int b = 2;//����ľֲ������ķ�ΧȷʵΪmain�����ڣ����������У�������
	int c = Add(a, b);

	return 0;
}








