//C++z中利用new操作符在堆区开辟数据
//堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符delete
//语法：new 数据类型
//利用new创建的数据，会返回该数据对应的类型的指针

#include<iostream>
using namespace std;
//1.new的基本语法
int* func()
{
	//在堆区创建整型数据
	//new返回的是 该类型的指针
	int *p=new int(10);
	return p;
}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	//堆区的数据 由程序员管理开辟，程序员管理释放
//	//如果想释放堆区的数据，利用关键字 delete
//	delete p;
//	cout << *p << endl;//错误提示：使用未初始化的内存“p”
//	                  //内存已经被释放，再次访问就是非法操作，会报错
//
//
//}


//2.在堆区利用new开辟数组
//int main()
//{
//	//创建10整形数据的数组，在堆区
//	int* arr = new int[10];
//	for (int i = 0;i < 10;i++)
//	{
//		arr[i] = i + 100;//给10个元素赋值 100~109
//
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		cout << arr[i] << endl;
//
//	}
//
//	delete[] arr;
//}
//

//引用
//给变量起别名

//语法：数据类型 & 别名=原名
//int main()
//{
//	int a = 10;
//	int& b = a;
//	cout << "a=" << a << endl;
//	cout << "b=" <<b<< endl;
//
//	b = 20;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	return 0;
//}



//引用的注意事项
//引用必须初始化          --int &b;是错误的
//引用在初始化后不可改变  --b原来是a的别名，不能在后面变成c的别名

//int main()
//{
//	int a = 10;
//	int& b = a;
//	int c = 0;
//
//	//int& b ;报错了
//
//	b = c;//这是赋值操作，不是取别名
//	//int& b = c;
//	//	cout << "a=" << a << endl;
// //       cout << "b=" << b << endl;
//	//	cout << "c=" << c << endl;       “b”: 重定义；多次初始化
//
//	return 0;
//}



//引用做函数参数
//作用：函数传递参数时，可以采取引用的技术让形参修饰实参
//优点：可以简化指针修改实参

int main()
{

	return 0;
}