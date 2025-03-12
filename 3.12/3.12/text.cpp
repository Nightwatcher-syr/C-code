#include<iostream>
using namespace std;


//1.构造函数的分类及调用
//分类
// 按照参数分类：无参构造（默认构造函数）和有参构造
// 按照类型分配：普通构造 拷贝构造  
class Person
{
public:
	//普通构造函数
	Person()
	{
		cout << "Person的无参构造函数的调用" << endl;

	}
	Person(int a)
	{
		cout << "Person的有参构造函数的调用" << endl;
		age = a;
	}
	//拷贝构造函数
	Person(const Person &p)   //拷贝出一模一样的函数
	{
	  //将传入的人身上的所有属性，拷贝到我身上
		age = p.age;
	}


	~Person()//
	{
		cout << "Person的析构函数的调用" << endl;
	}

	int age;
};

void text01()
{

}
//调用

int main()
{

	return 0;
}