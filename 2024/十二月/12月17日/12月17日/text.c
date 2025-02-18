
#include<stdio.h>
#include<string.h>
void menu()
{

	printf("请选择：\n");
	printf("*********************************\n");
	printf("******** 1.	新建数据 ********\n");
	printf("******** 2.	查询     ********\n");
	printf("******** 3.	排序     ********\n");
	printf("******** 0.	退出     ********\n");
	printf("*********************************\n");

}

void New(int num[], char name[], int math[], int C[])
{
	int n = 0;
	for (n = 0;n < 3;n++)
	{
		printf("请输入学号：\n");
		scanf_s("%d", &num[n]);
		printf("请输入姓名：\n");
		scanf_s(" %c", &name[n]);
		printf("请输入数学成绩：\n");
		scanf_s("%d", &math[n]);
		printf("请输入C语言程序设计：\n");
		scanf_s("%d", &C[n]);
	}
}

int Sort(int num[], char name[], int math[], int C[])
{
	int n = 0;
	printf("请输入学生的学号：");
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
		printf("学号: %d  姓名：%c  数学成绩:%d  C语言成绩：%d\n", num[i], name[i], math[i], C[i]);
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
				 printf("学号: %d  姓名：%c  数学成绩:%d  C语言成绩：%d\n", num[a], name[a], math[a], C[a]);
			 }
			 else
				 printf("没有找到！");
			 break;
		 }
		 case 3:
			 Retrieve(num, name, math, C);
			 print1(num, name, math, C);
			 break;
		 case 0:
			 break;
		 default:
			 printf("输入错误，请重新输入:>");
			 break;
		 }
	 } while (input);
	return 0;
}


















//.操作符  ->操作符
//结构体(对象).成员    ss.name
//结构体(指针)->成员   ps->name(相当于(*ps).name)  //通过ps先找到对象（解引用），再操作
//#include<string.h>///要用结构体需要引的头文件
//
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};



//改之前的代码
//void set_stu(struct Stu ss)//要想给ss里面放数据
//{
//	strcpy(ss.name , "yiran");//name是一个地址，不能把“”付给地址
//	ss.age = 20;
//	ss.score = 100.0;
//
//}
//void print_stu(struct Stu ss)//要想给ss里面放数据---临时拷贝到ss里（不会对s产生影响）
////要是希望把s的值改动---Stu*ps
//{
//	printf("%s %d %lf", ss.name, ss.age, ss.score); //传参出了问题--name age score为对象
//	//
//
//}

//改之后的代码
//把地址传过去---真正影响了s的值
//void set_stu(struct Stu *ps)
//{
//	strcpy((*ps).name, "yiran");
//	(*ps).age = 20;
//	(*ps).score = 100.0;
//
//}
//void print_stu(struct Stu(*ps))
////要是希望把s的值改动---Stu*ps
//{
//	printf("%s %d %lf", (*ps).name, (*ps).age, (*ps).score); //这样就可以了
//}
//还是太麻烦了
//要简化

//简化获得的代码
//void set_stu(struct Stu* ps)
//{
//	strcpy(ps->name, "yiran");
//	ps->age = 20;
//	ps->score = 100.0;
//}
//void print_stu(struct Stu(*ps))
//{
//	printf("%s %d %lf", ps->name, ps->age, ps->score); //这样就可以了
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
//结构体

//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。
//（数组是一组相同类型的集合）

//内置类型---int float 等等
//复杂对象--人：名字，性别，身高。。。
//结构体就是为了描述复杂对象

//结构体的声明
//  struct tag
// {
//    member-list
// }
//  variable-list


//人
//声明的结构体类型struct Peo


//结构体类型---相当于图纸
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;     //这些是成员变量
//};//变量列表可有可无


//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;    
//}p1,p2;//p1 p2是使用struct Peo结构类型创建的2个变量---因为放在了{}外面，所以是全局变量
//一般不这样写

//int main()
//{
//
//	//结构体变量--相当于用图纸建的房子
//	struct Peo p1 = { 0 };
//	//一般这样创建变量--局部变量
//
//	return 0;
//}

//结构体里可以出现其他结构体
//结构体类型的成员可以是标量，数组，指针，甚至是其他结构体
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
//print2(struct Peo* sp)//算了，这一块等看完前面回看83
//{
//	printf()
//}
////结构体变量的初始化
//int main()
//{
//	struct Peo p3 = { "张三","123456789","nan",181 };//结构体变量的创建
//	struct St s = { {"张三","123456789","nan",181 },100,166 };//浮点数在内存中不能精确保存
//	return 0;
//	print1(&p3);
//}


//结构体成员的访问是通过点操作符访问的，点操作符接受两个操作数
//得到的是一个地址用—>


//结构体传参
//1.结构体变量本身    空间的浪费（因为形参会重现开辟一块新的一样大小的空间）
//2.结构体的地址

//函数传参的的时候，参数是需要压栈的
//如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降

//结论，结构体传参的时候，尽量传结构体的地址