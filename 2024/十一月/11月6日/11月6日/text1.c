//#define�����ʶ������
//#include<stdio.h>
//#define a 100
//
//int main()
//{
//	printf("%d\n", a);
//	int b = a;
//	printf("%d\n", b);
//	int arr[a] = { 0 };
//	return 0;
//}//���Ϊ100 100

//#define�����
//#include<stdio.h>
//#define ADD(x,y) x+y   //ADDΪ����   x yΪ��Ĳ�����������������   x+yΪ����
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);   //��a��b�滻Ϊx��y
//	printf("%d\n", c);
//
//	return 0;
//}//���Ϊ30



//h. ͷ�ļ������������������͵�������ͷ�ļ��İ�����
//Դ�ļ�������ʵ�֣�

//���������������룬�����������ۿ�������ֵ�����㣬��Ϊ���������ڴ��п��ܲ��ܾ�ȷ�G����


//ָ��

//�ڴ棬�ǵ�������Ҫ�Ĵ洢�� ������ĳ��������ڴ������е�
//һ���ڴ浥Ԫ�Ĵ�СΪ1byte
//32λ���� һ���ֽ�Ϊ1��0����2������   ------�ܹ���2��32�η�����ַ����----4GB
//bit  --8 byte --1024KB ---1024MB --1024GB --1024Tb--1024 PB 
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	&a;
//	printf("%p\n", &a);//��ӡ����000000630550F8F4--����a�ĵ�ַ
//	int* p = &a;//�����p����ָ�����--������ŵ�ַ      //�ڴ浥Ԫ�б�ţ��������ǵ�ַ�������ַҲ����Ϊָ�� //���ָ����ַ�ı���Ϊָ�����
//	//*˵��p��ָ�����  int˵��pָ��Ķ���Ϊint����  ������p ����*p
//
//	char ch = 'a';
//	char* pc = &ch;//pc��ָ�����  ��ָ�������������ܷ�ʲô������Ϊ��ַ
//
//	*p;//ͨ��p�д�ŵĵ�ַ�ҵ�p��ָ��Ķ���  *p��pָ��Ķ���  *p��&a��һ�Կ����໥����
//	printf("%d", a);  //
//	return 0;
//
//}//���Կ���aռ��4���ֽڣ�����0a 00 00 00


//ָ������Ĵ�С
//#include<stdio.h>
//int main()
//{
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*)); //����zu��d����
//	return 0;
//}//�����Ϊ8  ������ʲô���ͣ����Ǵ�ŵ�ַ��ָ������Ĵ�Сȡ���봴��һ����ַ�Ĵ�С---32λ-4byte   64--8byte


//�ṹ��
//char short float double long int 
//�ˣ�����Ǹ��Ӷ��󣬲������������ͱ�ʾ
// C���������Զ������͵��������Զ�����������һ�ֽ����ṹ��
// �ṹ���ǰ�һЩ��һ���������һ�������
//
#include<stdio.h>
struct Stu
{
	char name[10];
	int age;
	char sex[10];
	char tele[12];//��Щ���ǳ�Ա //ͼֽ(���)---->���ӣ�����

};
void print(struct Stu* ps)
{
	printf("%s %d %s %s \n",(*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	printf("%s %d %s %s \n", ps->name, ps->age, ps->sex, ps->tele);//������һ��  //  һ���µĲ�����->  �ṹ��ָ�����->��Ա��
}
int main()
{
	struct Stu s = { "L",20,"M","123" };
	printf("%s %d %s %s \n", s.name, s.age, s.sex, s.tele);//���L 20 M 123
	//.������--�÷�Ϊ���ṹ�����+��.��+(��Ա)
	print(&s);
	return 0;
} 