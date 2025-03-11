#include<iostream>
using namespace std;
//#include"circle.h"
//#include"point.h"

//封装案例2----圆和点的关系
 
////创建点类
//class point
//{
//public:
//	//创建x坐标
//	void set_X(int x)
//	{
//		m_X = x;
//	}
//
//	//获取x坐标
//	int get_X()
//	{
//		return m_X;
//	}
//
//
//	//创建y坐标
//	void set_Y(int y)
//	{
//		m_Y = y;
//	}
//
//	//获取y坐标
//	int get_Y()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//
//};
//
//
//
////创建圆类
//class circle
//{
//public:
//	//创建半径
//	void set_R(int r)
//	{
//		m_r = r;
//	}
//
//	//获取半径
//	int get_R()
//	{
//		return m_r;
//	}
//
//
//	//创建y坐标
//	void set_Center(point c)
//	{
//		m_center = c;
//	}
//
//	//获取y坐标
//	point get_Center()
//	{
//		return m_center;
//	}
//
//private:
//	point m_center;   //在一个类中的成员可以是另一个类
//	int m_r;
//	
//};




//全局函数判断圆和点的关系
//void relasionship(point &p, circle &c)
//{
//	//计算圆的半径的平方
//	int c_r = c.get_R() * c.get_R();
//	//计算点到圆心的距离的平方
//	int c_p = p.get_X() * p.get_X() + p.get_Y() * p.get_Y();
//	if (c_r == c_p)
//	{
//		cout << "点在圆上" << endl;
//	}
//	if (c_r > c_p)
//	{
//		cout << "点在圆内" << endl;
//	}
//	if (c_r < c_p)
//	{
//		cout << "点在圆外" << endl;
//	}
//}
//
//
//
//
//int main()
//{
//	//创建圆类型变量
//	class circle c;
//	c.set_R(100);
//
//	//设置点p的坐标（10，10）
//	class point p;
//	p.set_X(10);
//	p.set_Y(10);
//
//	//设置圆心的坐标（0，0）
//	class point o;
//	o.set_X(0);
//	o.set_Y(0);
//
//	//设置圆心
//	c.set_Center(o);
//
//	relasionship(p, c);
//
//	return 0;
//}










//构造函数和析构函数

//对象的初始化和清理是两个非常重要的问题

//一个对下给你或者变量没有初始化，对其使用后果是未知的
//同样的使用完以恶搞对象或变量，没有及时清理，也会造成一定的安全问题

//C++利用构造和析构函数来解决上述问题
//这两个函数将会被编译器自动调用，完成对像初始化和清理工作。
//对象的初始化和清理工作是编译器强制要求我们做的事情，因此如果我们不提供构造和析构，编译器会提供
//但是编译器提供的构造函数和析构函数是空实现（即为空代码）


//构造函数：主要作用在于创建对象时为成员对象属性赋值，构造函数由编译器自动调用，无需手动操作
//析构函数：主要作用在于对象销毁前系统自动调用，执行一些清理工作





//class Person
//{
//public:
//	//构造函数语法：类名（）{}
//	//1.构造函数没有返回值也不写void
//	//2.函数名称yu类名相同
//	//3.构造函数可以有参数，因此可以发生重载
//	//4.程序在调用对象时会自动调用构造，无需手动带哦用，而且只会调用一次
//	Person()
//	{
//		cout << "Person 构造函数的调用" << endl;
//	}
//
//	//析构函数语法：~类名（）{}
//	//1.析构函数，没有返回值也不写void
//	//2.函数名称与类名相同，在名称前加上符号
//	//3.构造函数不可以有参数，因此不可以发生重载
//	//4.程序在对象销毁前会自动调用析构，无需手动调用，而且只会调用一次
//	~Person()
//	{
//		cout << "Person 析构函数的调用" << endl;
//	}
//};
//
//
//void text01()
//{
//	Person p;
//}
//int main()
//{
//	text01();
//	Person p;
//	return 0;
//}





