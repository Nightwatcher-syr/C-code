#include<iostream>
using namespace std;


//静态成员函数：
	//所有对象共享同一个函数
	//静态成员函数只能访问静态成员变量

//class Person
//{
//public:
//	//静态成员函数
//	static void fun()
//	{
//		m_A = 100; //静态成员函数 可以访问 静态成员变量
//		//m_B = 100; 静态成员函数 不能访问 非静态成员变量----无法区分到底是那个对象的m_B的属性
//		cout << "static void fun的调用" << endl;
//	}
//
//	static int m_A;
//	int m_B;
//
//	//静态成员函数有访问权限
//
//private:
//	static void func1()
//	{
//		cout << "static void fun1()的调用" << endl;
//	}
//};
//
//int Person::m_A;
////两种访问方式
//void text01()
//{
//	//通过对象访问
//	Person p;
//	p.fun();
//
//	//通过类名访问
//	Person::fun();
//
//
//	//Person::func1();//私有作用域下不能访问
//
//	//类外访问不到私有静态成员变量
//}
//int main()
//{
//	text01();
//	return 0;
//}












////C++对象模型和this指针
//
////成员变量和成员函数分开储存
//
//class Person
//{
//	int m_A;			//非静态成员变量  属于类的对象上           //sizeof p=1
//	static int m_B;		//静态成员变量   不属于类的对象上           //sizeof p=4
//	void func();		//非静态成员函数  不属于类的对象上         //sizeof p=4
//	static void func1();//静态成员函数  不属于类的对象上          //sizeof p=4
//	  
//	                    //总之，只有静态成员变量属于类的对象
//};
//
//int m_B = 100;//类内声明，类外初始化
//
//
//void text01()
//{
//	Person p;
//
//	cout << " sizeof p = " << sizeof(p) << endl;  //sizeof p=1
//	//因为C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置 
//	//每个空对象都应该有一个独一无二的内存地址
//}
//void text02()
//{
//	Person p;
//	cout << " sizeof p = " << sizeof(p) << endl;   // sizeof p = 4；
//
//}
//
//int main()
//{
//	text01();
//	text02();
//	return 0;
//}





//this指针
// 我们已知c++中的成员函数和成员变量是分开存储的
//每一个非静态成员函数只会诞生一份函数实例 也就是说多个同类的对象会同用一块代码
//问题为:这一块代码是如何区分那个对象调用自己的呢

//C++通过提供特殊的对象指针,this指针,解决上述问题,this指针指向被调用的成员函数书所属的对象

//this指针是隐含每一个非静态成员函数的一种指针
//this指针不需要定义,直接用即可

//this指针的用途
//1.当相残和成员变量同名时,可用this指针来区分
//在类的非静态成员函数中返回对象本身,可使用return*this






//C++对象模型和this指针

//成员变量和成员函数分开储存

//class Person
//{
//	int m_A;			//非静态成员变量  属于类的对象上           //sizeof p=1
//	static int m_B;		//静态成员变量   不属于类的对象上           //sizeof p=4
//	void func();		//非静态成员函数  不属于类的对象上         //sizeof p=4
//	static void func1();//静态成员函数  不属于类的对象上          //sizeof p=4
//
//	//总之，只有静态成员变量属于类的对象
//};
//
//int m_B = 100;//类内声明，类外初始化
//
//
//void text01()
//{
//	Person p;
//
//	cout << " sizeof p = " << sizeof(p) << endl;  //sizeof p=1
//	//因为C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置 
//	//每个空对象都应该有一个独一无二的内存地址
//}
//void text02()
//{
//	Person p;
//	cout << " sizeof p = " << sizeof(p) << endl;   // sizeof p = 4；
//
//}
//
//int main()
//{
//	text01();
//	text02();
//	return 0;
//}




//1.解决名称冲突问题

//2.返回对象本身用*this

//class Person
//{
//public:
//	Person(int age)
//	{
//		age = age;
//	}
//	int age; //在自己学代码时，最好写为m_age
//
//};
//void text01()
//{
//	Person p1(18);
//	cout << "p1的年龄为：" << p1.age << endl;
//
//}
//int main()
//{
//	text01();
//	return 0;
//}
//程序错误，因为编译器把上面的三个age看作为一种age


//用this指针解决
class Person
{
public:
	Person(int age)
	{
		//this指针指向的是被调用的成员函数 所属的对象
		this->age = age;
	}
	int age; 

};
void text01()
{
	Person p1(18);
	cout << "p1的年龄为：" << p1.age << endl;

}
int main()
{
	text01();
	return 0;
}







