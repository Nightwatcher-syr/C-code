//�ɹ���������

//��֧��ѭ�����
//ʲô�����--1.���ʽ���   2.�����������  3.�������  4.�������  5.�����
//��֧��ѭ���ǿ������
//����������ڿ��Ƴ����ִ�����̣���ʵ�ֳ���ĸ��ֽṹ��ʽ���������ض��Ķ�������
// 1.�����ж���䣺if��䣬switch���   2.ѭ��ִ�����;do while ��䣬while��䣬for���   3.ת����䣺break��䣬goto��� ��continue��䣬return���
//C�����ǽṹ���ĳ����������  3�ֽṹ--˳��ṹ��ѭ���ṹ��ѭ���ṹ(�����пɳ���Ϊ��3�ֽṹ��


//��֧���
//����֧ ���֧
// if���0�٣������棬��ִ��
//�﷨�ṹ  --if�����ʽ���жϱ��ʽ�������⡯��---���Ϊ�棬��ִ�У����治ִ��
//if else���
//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age > 18)////!�������ܼӣ�
//	{
//		printf("����");//if���Ĭ�ϸ�һ����䣬����Ҫ�������ʱҪ��һ��{}
//	}
//	else
//	{
//		printf("������");//elseҲĬ��һ����䣬�������else���ƶ�����䣬Ҫ��{}
//	}
//	return 0;
//}

//else if
//���֧
//#include<stdio.h>
//int main()
//{
//	int age;
//	scanf_s("%d", &age);
//	if (age < 18)
//	{
//		printf("������");
//	}
//	else if (age >=18 && age<28 )
//	{
//		printf("����");
//	}
//	else if (age >= 28 && age < 40)
//	{
//		printf("����");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("׳��");
//	}
//	else if (age >= 60 && age < 100)
//	{
//		printf("����");
//	}
//	else
//	{
//
//		printf("����");
//	}
//
//	return 0;
//}

//{}��һ�������

//
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 3;
//	if (a == 1)
//		if (b == 2)
//	    printf("woo");
//        else                  //else�������������ifƥ�䣬������˭������˭ƥ��-----����Ҫע�⽲���Ű棨�����Ķ��������׳���
//		printf("yii");        //Ҫע���{}--���ɺ�ϰ��
//return 0;
//}
//����������Ҫ�淶�������壨��Ҫa,b,c  Ҫд��age�ȣ�
//�ո�  ����  ����
//����������C++��̡�--�õĴ���

//����
//#include<stdio.h>
//int main()
//{
//
//	if (condition)
//	{
//		return x;
//	}
//	return y;
//	return 0;
//}                 //��δ������˼Ϊ������������x�������㷵��y��ȷʵ�ǣ�  �������Ķ����������
//����
//#include<stdio.h>
//int text()
//{
//	int a = 4;
//
//	if (a<3)
//	{
//		return 1;
//	}
//	return 0;     //�����ǰ�����else Ҳ��  �����Ķ��ϸ���
//} 
//#include<stdio.h>
//int main()
//{
//
//	int r = text();
//	printf("%d\n", r);
//	return 0;
//}                         //�����������У����Ϊ0   
//
//
//#include<stdio.h>
//int main()
//{
//	int a = 19;
//	if (10==a)//�õĴ����ѧ������Ϊ����д���д���=��ϵͳ�ᱨ��������С�˴���ĸ���  ��������
//	{
//		printf("heh");
//	}
//	return 0;
//} 

//�ж�һ�����ǲ�������
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//
//	if (num%2==1)//���ﲻ�õ�����д����Ϊ��߲���һ������
//	{
//		pritnf("����");
//	}
//	else
//		pritnf("��������");
//	return 0;
//} 

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//
//	if (num % 2 == 1)//���ﲻ�õ�����д����Ϊ��߲���һ������
//	{
//		pritnf("����");
//	}
//	else
//		pritnf("��������");
//	return 0;
//}


//���1~100������
//��1
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//}
//��2
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//		i += 2;//����д��������
//	}
//}


//switch���
//switch(���α��ʽ)������������Ϊ����
//{�����}  �����case+���γ������ʽ���������룩��  break��  ���


//�������1��������һ��������
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//		case 1:
//			printf("����1\n");
//		case 2:
//		    printf("����2\n");
//		case 3:
//		    printf("����3\n");
//		case 4:
//			printf("����4\n");
//		case 5:
//            printf("����5\n");
//		case 6:
//	        printf("����6\n");
//		case 7:
//			printf("����7\n");
//	}
//	return 0;
/*}*///���û��break������6����ӡ��������6������7

//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)//switchִ�еĹ���--ͨ��switch��ֵѡ��case���룬��break����switch
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("����7\n");
//		break;
//	}
//	return 0;
//}//�����ͺ���


//����1~5�����weekday  ����6~7�����weekend
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)//switchִ�еĹ���--ͨ��switch��ֵѡ��case���룬��break����switch
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");//�߼���Ҫ���Բ���break��������break��һֱִ��ֱ������break�������case����ִ��һ�����
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;  //��������break   ��Ϊ�в��Ϸ�����
//	}
//	return 0;
//}


//����1~5�����weekday  ����6~7�����weekend
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)//switchִ�еĹ���--ͨ��switch��ֵѡ��case���룬��break����switch
//	{
//	case 1:  //case������Է��ַ�����Ϊ�ַ��洢ʱ��ascIIֵ��ҲΪ����
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");//�߼���Ҫ���Բ���break��������break��һֱִ��ֱ������break�������case����ִ��һ�����
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;  
//	default:
//		printf("��������");//�������     //��ÿ��switch���default�Ǻ�ϰ��
//
//	}
//	return 0;
//}

	//	VS�ϣ����Բ�ѡ��һ�У��������һ�У�ֱ��Ctrl+c���Ǹ���һ�У�����ͬ��


#include<stdio.h>
int main()
{
	int n = 1;
	int m = 2;


	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n) //switch����Ƕ��
		{
		case 1:n++;
		case 2:m++;n++;
			break;//ֻ�������Լ����ڵĵ�switch
	     }
	case 4:m++;
		break;

	default:
		break;

	}
	printf("m=%d,n=%d\n", m, n);
	return 0;//m=5,n=3
}