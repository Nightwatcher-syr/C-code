
#include<stdio.h>
#include<string.h>
void menu()
{

	printf("��ѡ��\n");
	printf("*********************************\n");
	printf("******** 1.	�½����� ********\n");
	printf("******** 2.	��ѯ     ********\n");
	printf("******** 3.	����     ********\n");
	printf("******** 0.	�˳�     ********\n");
	printf("*********************************\n");

}

void New(int num[], char name[], int math[], int C[])
{
	int n = 0;
	for (n = 0;n < 3;n++)
	{
		printf("������ѧ�ţ�\n");
		scanf_s("%d", &num[n]);
		printf("������������\n");
		scanf_s(" %c", &name[n]);
		printf("��������ѧ�ɼ���\n");
		scanf_s("%d", &math[n]);
		printf("������C���Գ�����ƣ�\n");
		scanf_s("%d", &C[n]);
	}
}

int Sort(int num[], char name[], int math[], int C[])
{
	int n = 0;
	printf("������ѧ����ѧ�ţ�");
	scanf_s("%d", &n);
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		if (num[i] == n)
			return i;
	}
	return -1;
}

void Retrieve(int num[], char name[], int math[], int C[])
{
	int i, j, k, temp;
	for (i = 0;i < 2;i++)
	{
		k = i;
		for (j = i + 1;j < 3;j++)
		{
			if (math[j] > math[i])
			{
				k = j;
			}
		}
		if (k != i)
		{
			temp = num[k];num[k] = num[i];num[i] = temp;
			temp = name[k];name[k] = name[i];name[i] = temp;
			temp = math[k];math[k] = math[i];math[i] = temp;
			temp = C[k];C[k] = C[i];C[i] = temp;
		}
	}
}


void print1(int num[], char name[], int math[], int C[])
{
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("ѧ��: %d  ������%c  ��ѧ�ɼ�:%d  C���Գɼ���%d\n", num[i], name[i], math[i], C[i]);
	}
}

int main()
{
	int input = 0;
	int num[10] = { 0 };
	char name[10] = { 0 };
	int math[10] = { 0 };
	int C[10] = { 0 };

	 do {
		 menu();
		 scanf_s("%d", &input);
		 switch (input)
		 {
		 case 1:
		 {
			 New(num, name, math, C);
			 print1(num, name, math, C);
			 break;
		 }
		 case 2:
		 {
			 int a = Sort(num, name, math, C);
			 if (a >= 0)
			 {
				 printf("ѧ��: %d  ������%c  ��ѧ�ɼ�:%d  C���Գɼ���%d\n", num[a], name[a], math[a], C[a]);
			 }
			 else
				 printf("û���ҵ���");
			 break;
		 }
		 case 3:
			 Retrieve(num, name, math, C);
			 print1(num, name, math, C);
			 break;
		 case 0:
			 break;
		 default:
			 printf("�����������������:>");
			 break;
		 }
	 } while (input);
	return 0;
}


















//.������  ->������
//�ṹ��(����).��Ա    ss.name
//�ṹ��(ָ��)->��Ա   ps->name(�൱��(*ps).name)  //ͨ��ps���ҵ����󣨽����ã����ٲ���
//#include<string.h>///Ҫ�ýṹ����Ҫ����ͷ�ļ�
//
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};



//��֮ǰ�Ĵ���
//void set_stu(struct Stu ss)//Ҫ���ss���������
//{
//	strcpy(ss.name , "yiran");//name��һ����ַ�����ܰѡ���������ַ
//	ss.age = 20;
//	ss.score = 100.0;
//
//}
//void print_stu(struct Stu ss)//Ҫ���ss���������---��ʱ������ss������s����Ӱ�죩
////Ҫ��ϣ����s��ֵ�Ķ�---Stu*ps
//{
//	printf("%s %d %lf", ss.name, ss.age, ss.score); //���γ�������--name age scoreΪ����
//	//
//
//}

//��֮��Ĵ���
//�ѵ�ַ����ȥ---����Ӱ����s��ֵ
//void set_stu(struct Stu *ps)
//{
//	strcpy((*ps).name, "yiran");
//	(*ps).age = 20;
//	(*ps).score = 100.0;
//
//}
//void print_stu(struct Stu(*ps))
////Ҫ��ϣ����s��ֵ�Ķ�---Stu*ps
//{
//	printf("%s %d %lf", (*ps).name, (*ps).age, (*ps).score); //�����Ϳ�����
//}
//����̫�鷳��
//Ҫ��

//�򻯻�õĴ���
//void set_stu(struct Stu* ps)
//{
//	strcpy(ps->name, "yiran");
//	ps->age = 20;
//	ps->score = 100.0;
//}
//void print_stu(struct Stu(*ps))
//{
//	printf("%s %d %lf", ps->name, ps->age, ps->score); //�����Ϳ�����
//}
//
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	printf_stu();
//	return 0;
//}
//�ṹ��

//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı�����
//��������һ����ͬ���͵ļ��ϣ�

//��������---int float �ȵ�
//���Ӷ���--�ˣ����֣��Ա���ߡ�����
//�ṹ�����Ϊ���������Ӷ���

//�ṹ�������
//  struct tag
// {
//    member-list
// }
//  variable-list


//��
//�����Ľṹ������struct Peo


//�ṹ������---�൱��ͼֽ
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;     //��Щ�ǳ�Ա����
//};//�����б���п���


//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;    
//}p1,p2;//p1 p2��ʹ��struct Peo�ṹ���ʹ�����2������---��Ϊ������{}���棬������ȫ�ֱ���
//һ�㲻����д

//int main()
//{
//
//	//�ṹ�����--�൱����ͼֽ���ķ���
//	struct Peo p1 = { 0 };
//	//һ��������������--�ֲ�����
//
//	return 0;
//}

//�ṹ������Գ��������ṹ��
//�ṹ�����͵ĳ�Ա�����Ǳ��������飬ָ�룬�����������ṹ��
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//};
//
//struct St
//{
//	struct Peo p;
//	int num;
//	float f;
//};
//
//
//print2(struct Peo* sp)//���ˣ���һ��ȿ���ǰ��ؿ�83
//{
//	printf()
//}
////�ṹ������ĳ�ʼ��
//int main()
//{
//	struct Peo p3 = { "����","123456789","nan",181 };//�ṹ������Ĵ���
//	struct St s = { {"����","123456789","nan",181 },100,166 };//���������ڴ��в��ܾ�ȷ����
//	return 0;
//	print1(&p3);
//}


//�ṹ���Ա�ķ�����ͨ������������ʵģ����������������������
//�õ�����һ����ַ�á�>


//�ṹ�崫��
//1.�ṹ���������    �ռ���˷ѣ���Ϊ�βλ����ֿ���һ���µ�һ����С�Ŀռ䣩
//2.�ṹ��ĵ�ַ

//�������εĵ�ʱ�򣬲�������Ҫѹջ��
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�

//���ۣ��ṹ�崫�ε�ʱ�򣬾������ṹ��ĵ�ַ