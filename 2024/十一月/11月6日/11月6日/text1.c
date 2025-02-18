//#define定义标识符常量
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
//}//结果为100 100

//#define定义宏
//#include<stdio.h>
//#define ADD(x,y) x+y   //ADD为宏名   x y为宏的参数，参数是无类型   x+y为宏体
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);   //把a，b替换为x，y
//	printf("%d\n", c);
//
//	return 0;
//}//结果为30



//h. 头文件（函数的声明，类型的声明，头文件的包含）
//源文件（函数实现）

//浮点数的四舍五入，不能用你肉眼看到的数值来计算，因为浮点数在内存中可能不能精确欸保存


//指针

//内存，是电脑上重要的存储器 计算机的程序都是在内存中运行的
//一个内存单元的大小为1byte
//32位电脑 一个字节为1或0，即2个可能   ------总共有2的32次方个地址序列----4GB
//bit  --8 byte --1024KB ---1024MB --1024GB --1024Tb--1024 PB 
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	&a;
//	printf("%p\n", &a);//打印出来000000630550F8F4--这是a的地址
//	int* p = &a;//这里的p就是指针变量--用来存放地址      //内存单元有编号，这个编号是地址，这个地址也被称为指针 //存放指针或地址的变量为指针变量
//	//*说明p是指针变量  int说明p指向的对象为int类型  变量是p 不是*p
//
//	char ch = 'a';
//	char* pc = &ch;//pc是指针变量  在指针变量的眼里，不管放什么，都视为地址
//
//	*p;//通过p中存放的地址找到p所指向的对象  *p是p指向的对象  *p与&a是一对可以相互抵消
//	printf("%d", a);  //
//	return 0;
//
//}//可以看到a占了4个字节，存了0a 00 00 00


//指针变量的大小
//#include<stdio.h>
//int main()
//{
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*)); //不管zu或d都行
//	return 0;
//}//结果都为8  不管是什么类型，都是存放地址，指针变量的大小取决与创建一个地址的大小---32位-4byte   64--8byte


//结构体
//char short float double long int 
//人，书等是复杂对象，不能用以上类型表示
// C语音给了自定义类型的能力，自定义类型中有一种叫做结构体
// 结构体是把一些单一类型组合在一起的做法
//
#include<stdio.h>
struct Stu
{
	char name[10];
	int age;
	char sex[10];
	char tele[12];//这些都是成员 //图纸(这个)---->房子（程序）

};
void print(struct Stu* ps)
{
	printf("%s %d %s %s \n",(*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	printf("%s %d %s %s \n", ps->name, ps->age, ps->sex, ps->tele);//这两个一样  //  一个新的操作符->  结构体指针变量->成员名
}
int main()
{
	struct Stu s = { "L",20,"M","123" };
	printf("%s %d %s %s \n", s.name, s.age, s.sex, s.tele);//结果L 20 M 123
	//.操作符--用法为（结构体对象）+（.）+(成员)
	print(&s);
	return 0;
} 