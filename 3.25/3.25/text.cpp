//深拷贝与浅拷贝
//浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝操作


#include<iostream>
#include<string>
using namespace std;

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}
//	Person(int age,int hight)
//	{
//		m_age = age;
//		m_Height = new int (hight);
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	//自己实现一个拷贝构造函数  解决浅拷贝带来的问题
//
//	Person(const Person& p)
//	{
//		cout << "Person的拷贝构造函数调用" << endl;
//		m_age = p.m_age;
//		//		m_age = p.m_age;  这行代码是编译器默认实现的
//		//深拷贝操作
//
//		m_Height = new int(*p.m_Height);
//
//	}
//	~Person()
//	{
//		//析构代码，将堆区开辟的数据做释放操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person的析构构造函数调用" << endl;
//	}
//	int m_age;
//	int* m_Height;
//};
//
//void text01()
//{
//	Person p1(18,160);
//	cout << "p1的年龄为：" << p1.m_age <<"  身高为：" <<*p1.m_Height<<endl;
//	Person p2(p1);     
//	cout << "p2的年龄为：" << p1.m_age << "  身高为：" << *p2.m_Height << endl;
//}
//int main()
//{
//	text01();
//	return 0;
//}

//如果利用编译器提供的拷贝构造函数，会做浅拷贝的操作
//浅拷贝带来的问题就是浅拷贝被重复释放--------解决办法：利用深拷贝来解决
//如果属性又在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题











//初始化列表
//用来初始化属性
//语法：构造函数（）：属性1（值1），属性2（值2）...{}



////传统的初始化操作
//class Person
//{
//public:
//
//	
//	Person(int a, int b, int c)
//	{
//		m_a = a;
//		m_b = b;
//		m_c = c;
//     }
//	int m_a;
//	int m_b;
//	int m_c;
//};
//
//void text01()
//{
//	Person p(10, 20, 30);
//	cout << "m_a= " << p.m_a << endl;
//	cout << "m_b= " << p.m_b << endl;
//	cout << "m_c= " << p.m_c << endl;
//
//}
//int main()
//{
//	text01();
//	return 0;
//}



//初始化列表初始化属性
//这第一种方法只能给三个属性赋固定的初值
// class person
//{
//public:
//
//	
//	person(int a,int b,int c) :m_a(a), m_b(b), m_c(c)
//	{
//	
//     }
//	int m_a;
//	int m_b;
//	int m_c;
//};
//
//
//void text01()
//{
//
//	person p(11,12,13);
//	cout << "m_a= " << p.m_a << endl;
//	cout << "m_b= " << p.m_b << endl;
//	cout << "m_c= " << p.m_c << endl;
//}
//int main()
//{
//	text01();
//	return 0;
//}





//类对象作为类成员

//c++中的成员可以为另一个类的对象
//例如：
class A {};
class B
{
	A a;
};



//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		cout << "Phone 的构造函数调用"<<endl;
//
//		m_PName = pName;
//	}
//	~Phone()
//	{
//		cout << "Phone 的构造函数调用" << endl;
//
//	}
//	string m_PName;
//};
//
//class Person
//{
//public:
//	Person(string name, string pName):m_name(name),m_Phone(pName)
//		//相当于 Phone m_Phone=pName;   隐式转换法
//	{
//		cout << "Person 的构造函数调用"<<endl;
//	}
//	~Person()
//	{
//		cout << "Person 的构造函数调用" << endl;
//
//	}
////姓名
//	string m_name;
////手机
//	Phone m_Phone;
//
//};
//
//
//void text01()
//{
//	Person p("张三", "iPhone");
//	cout << p.m_name << "拿着" << p.m_Phone.m_PName << endl;
//}
//int main()
//{
//	text01();
//	return 0;
//}

//当其他类对象作为本类成员，构造时先构造类对象，再构造自身
//析构时，先析构自身，再析构类对象（与构造相反）



//静态成员

//在成员变量和成员函数前加上关键字static，称为静态成员

//静态成员分为：

//静态成员变量
	//所有对象共享同一份数据
	//在编译阶段分配内存
	//类内声明，类外初始化
	

//静态成员函数
	//所有对象共享一个函数
	//静态成员函数只能访问静态成员变量


class Person
{
public:
	static int m_a;
	//所有对象共享同一份数据
    //在编译阶段分配内存
	//类内声明，类外初始化

	//静态成员变量也有访问权限

};

int Person::m_a = 100;//类内声明，类外初始化


void text01()
{
	Person p;
	cout << p.m_a << endl;  //100


	Person p2;
	p2.m_a = 200;
	cout << p.m_a << endl;

	//所有对象共享同一份数据
	cout << p.m_a << endl;  //200    

}
void text02()
{
	//静态成员变量 不属于某个对象，因为所有成员都共享一份数据
	//因此静态成员变量有两种访问方式
	//1.通过对象进行访问
	Person p;
	cout << p.m_a << endl;


	//2.通过类名进行访问
	cout << Person::m_a << endl;


}
int main()
{
	text01();
	return 0;
}
