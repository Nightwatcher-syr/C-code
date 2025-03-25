#include<iostream>
using namespace std;


//1.构造函数的分类及调用
//分类
// 按照参数分类：无参构造（默认构造函数）和有参构造
// 按照类型分配：普通构造 拷贝构造  
//class Person
//{
//public:
//	//普通构造函数
//	Person()
//	{
//		cout << "Person的无参构造函数的调用" << endl;
//
//	}
//	Person(int a)
//	{
//		cout << "Person的有参构造函数的调用" << endl;
//		age = a;
//	}
//	//拷贝构造函数    ---除了这种形式都是普通构造
//	Person(const Person &p)   //拷贝出一模一样的函数
//	{
//	  //将传入的人身上的所有属性，拷贝到我身上
//		age = p.age;
//		cout << "Person的拷贝构造函数的调用" << endl;
//	}
//
//
//	~Person()//
//	{
//		cout << "Person的析构函数的调用" << endl;
//	}
//
//	int age;
//};
//
//void text01()
//{
//	
//
//
//	// 1.括号法
//	Person p1;//默认构造函数调用
//	Person p2(10);//会调用有参调用函数
//	Person p3(p2);//拷贝构造函数
//	cout << "p2的年龄是：" << p2.age << endl;
//
//	//注意事项：
//	//在调用默认构造函数时，不要加（）
//	Person p1();//无运行结果
//	            //因为这行代码，编译器会认为是一个函数的声明---在一个函数体内部，可以写另一个函数的声明
//	void fun();//就像这行代码一样--函数声明
//
//
//
//
//
//
//	//2.显示法
//	//Person p1;
//	//Person p2 =Person(10);//有参构造
//	//Person p3 = Person(p2);//拷贝构造
//	//
//	
//	//Person(10);//在等号的右侧的这个叫做匿名对象  特点：当前执行结束后，系统会立即回收掉匿名对象
//	//cout << "aaaa" << endl;
//	//注意事项2：不要利用拷贝构造函数 初始化匿名对象
//	Person(p3);    //Person3重定义-----编译器会认为：Person（p3）===Person p3；  //对象的声明
//
//
//
//
//	//3.隐式调用法
//	Person p4 = 10;//  相当于 写了 person p4=Person(10);  有参构造的调用
//	Person p5 = p4;//   拷贝构造
//
//
//}
////调用

//int main()
//{
//	text01();
//	return 0;
//}


//拷贝构造函数的调用时机

//1.使用一个已经创建好的对象来初始化一个新对象
//2.值传递的方法给函数参数传值
//3.以值的方式返回局部对象





//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的无参构造函数的调用" << endl;
//
//	}
//
//	Person(int a)
//	{
//		cout << "Person的有参构造函数的调用" << endl;
//		age = a;
//	}
//	
//	Person(const Person &p)   
//	{
//
//		age = p.age;
//		cout << "Person的拷贝构造函数的调用" << endl;
//	}
//
//
//	~Person()//
//	{
//		cout << "Person的析构函数的调用" << endl;
//	}
//
//	int age;
//};
//
//
//void text01()
//{
//
//
//	//1.使用一个已经创建好的对象来初始化一个新对象
//	Person p1(20);
//	Person p2(p1);
//}
////2.值传递的方法给函数参数传值
//
//	void dowork(Person p)
//	{
//
//	}
//
//	void text02()
//	{
//		Person p;
//		dowork(p);
//	}
//
//
////3.以值的方式返回局部对象
//	Person dowork2()
//	{
//		Person p1;
//		return p1;
//	}
//
//	void text03()
//	{
//		Person p = dowork2();
//	}
//
//
//int main()
//{
//	text01();
//	text02();
//	return 0;
//}









//构造函数的调用规则

//默认情况下，c++编译器至少给一个类添加3个函数
//1.默认构造函数（无参，函数体为空）
//2.默认析构函数(无参，函数体为空)
//3.默认拷贝函数，对属性进行值拷贝

//构造函数的调用规则
//如果用户定义有参构造函数，c++不在提供默认无参函数，但是会提供默认拷贝函数
//如果用户定义拷贝构造函数，c++不会再提供其他构造函数
//class Person
//{
//public:
	//Person()
	//{
	//	cout << "Person的无参构造函数的调用" << endl;

	//}

	//Person(int a)
	//{
	//	cout << "Person的有参构造函数的调用" << endl;
	//	age = a;
	//}

//	Person(const Person& p)
//	{
//
//		age = p.age;
//		cout << "Person的拷贝构造函数的调用" << endl;
//	}
//
//
//	~Person()//
//	{
//		cout << "Person的析构函数的调用" << endl;
//	}
//
//	int age;
//};
//
//
//void text01()
//{
//
//	Person p;
//	p.age = 18;
//
//	Person p2(p);
//	cout << "P2的年龄为：" <<p2.age<< endl;
//}
//void text02()
//{
//
//	Person p;  //Person 不存在默认构造函数
//}
//
//
//
//int main()
//{
//	text01();
//	text02();
//	return 0;
//}