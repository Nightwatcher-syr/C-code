#include<iostream>
using namespace std;

//引用做函数的返回值
//1.不要返回局部变量的引用


//int& text01()
//{
//	int a = 10;//局部变量存放在四区中的 栈区
//	return a;
//}
////2。函数的电泳可以作为左值
//
//
//int& text02()
//{
//	static int a = 10;  //加上static后，变成了静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
//	return a;
//}
//int main()
//{
//
//	int& ref = text01();
//	int& ref2 = text02();
//
//
//	cout << "ref = " << ref << endl;//第一次结果正确，是因为编译器做了保留
//	cout << "ref = " << ref << endl;//第二次结果错误，因为a的内存已经释放
//
//
//	cout << "ref = " << ref2 << endl;
//	cout << "ref = " << ref2 << endl;
//	cout << "ref = " << ref2 << endl;
//
//
//	text02() = 10000; //相当于a=10000
//	                  //如果函数的返回值是引用，这个函数调用也可以作为左值
//	cout << "ref = " << ref2 << endl;
//	cout << "ref = " << ref2 << endl;
//	cout << "ref = " << ref2 << endl;
//	cout << "ref = " << ref2 << endl;
//
//
//	return 0;
//
//}


//引用的本质
//引用的本质在C++内部实现是一个指针常量

//void func(int& ref)
//{
//	ref = 100;
//}
//
//int main()
//{
//	int a = 10;
//
//	//自动转换为 int*const ref=&a;指针常量是指针指向不可改，也说明为什么引用不可更改
//	int& ref = a;
//	ref = 20;//内部发现ref是引用，自动帮我们转换为：*ref=20;
//
//	cout << "a:" << a << endl;
//	cout << "ref:" << ref << endl;
//	func(a);
//
//
//	return 0;
//}
//
////所有的指针的操作都是编译器帮我们做了
//
//

//常量引用
//修饰形参，防止误操作


//打印
//void showvaule(const int &val)//防止误操作
//{
//	//val = 10000;---报错了
//	cout << "val=" << val << endl;
//}
////不允许在这里修改实参--加const
//int main()
//{
//
//	int a = 10;
//	//int& ref = 10;//引用必须引一块合法的内存空间-----这一行错误
//	const int& ref = 10;//引用前加const后 编译器将代码修改为 int temp=10;const int& ref=temp;
//
//	//ref = 20;//表达式必须为可修改的左值----加入const后变为只读，不可修改
//
// a = 100;
//	
//	showvaule(a);
//	cout << "a=" << a<< endl;
//
//
//	return 0;
//}



//函数提高
// --函数默认参数

//语法：函数返回值 函数名 （参数=默认值）{}


//int func(int a,int b,int c)
//{
//	return a + b + c;
//}
//int main()
//{
//	cout << func(10, 20, 30) << endl;
//	//少传一个都不行
//
//	return 0;
//}


//int func(int a, int b=20, int c=30)
//{
//	return a + b + c;
//}
////优先级
////如果我们自己传入数据，就用自己的数据，如果没有，就用默认值
////语法：返回值类型 函数名 （形参=默认值）{}
//
//
//int main()
//{
//	cout << func(10) << endl;//可以只传一个值
//	cout << func(10,30) << endl;//----结果为70
//	return 0;
//}

//注意事项：
//1.如果某个位置已经有了默认参数，那么从这个位置开始从左到右都必须有默认参数

//int func1(int a=10, int b , int c)
//{
//	return a + b + c;
//}

//2.如果函数有了默认参数，函数实现就不能有默认参数----二者之一有默认参数
//int func2(int a = 10, int b = 10);
//
//int func2(int a=10, int b=10)
//{
//	return a + b;
//}
//int main()
//{
//	cout << func2(10,10) << endl;//可以只传一个值
//
//	return 0;
//}

//二义性
//运行后有提示：重定义默认参数




//函数占位参数

//C++中函数的参数列表里可以有参数，用来占位，调用函数时必须填补该位置
//语法：返回值类型 函数名 (数据类型){}

//int func4(int a ,int)//第二个int起到占位的作用
//{
//	cout << "this is func4" << endl;
//}
//int main()
//{
//	//cout << func4(10) << endl;//报错：函数参数太少
//
//	cout << func4(10,10) << endl;//第二个10似乎用不到
//	//目前阶段的占位参数 我们还用不到，后面的课程中会用到
//	//占位参数还可以有默认参数
//
//	return 0;
//}
//
////占位参数还可以有默认参数
//int func4(int a, int=10)
//{
//	cout << "this is func4" << endl;
//}



//函数重载（chong）

//作用：函数名可以相同，提高复用性

//函数重载满足的条件
//1.同一个作用域下
//函数名相同
//函数参数类型不同 或者个数不同 或者顺序不同

//注意：函数的返回值不可以作为函数重载的条件




//函数重载满足的条件
////1.同一个作用域下----都是全局作用域
//void func(int a, int)
//{
//	cout << "this is func4" << endl;
//}
////2.函数名相同
//void func(int a, int = 10)
//{
//	cout << "this is func4" << endl;
//}
//
////3.不满足第三个条件：函数的参数类型不同，个数不同 或者顺序不同
//
//int main()
//
//{
////func();//报错：func()还有一个重载
//
//
//	return 0;
//}


//函数重载满足的条件
//1.同一个作用域下----都是全局作用域
//void func()
//{
//	cout << "this is func" << endl;
//}
////2.函数名相同
//void func(int a)
//{
//	cout << "this is func（int a）" << endl;
//}
////3.函数的参数类型不同，个数不同 或者顺序不同
//
//int main()
//
//{
//	func();//在C++中，可以函数重载---现在调用上面的
//	func(10);//在C++中，可以函数重载---现在调用下面的
//
//
//	return 0;
//}

//!!!!!!!函数的返回值不可以作为函数的重载条件



//函数重载注意事项

//1.引用作为重载条件


//void func(int &a)
//{
//	cout << "this is func(int &a)的调用" << endl;
//}
//void func(const int & a)
//{
//	cout << "this is func(const int & a)的调用" << endl;
//}
//int main()
//
//{
//
//	//不加const
//	int a = 10;
//	func(a);//调用的是没有const的----可读可写的
//	//int &a=10是不合法的
//
//
//	//加const
//	func(10);//调用的是有const的----可读不可写的
//	//const int &a=10是合法的---可以走下面的代码
//
//
//	return 0;
//}


//2.函数重载碰到默认参数

//void func(int a,int b)
//{
//	cout << "this is func(int a,int b)的调用" << endl;
//}
//void func( int  a)
//{
//	cout << "this is func( int  a)的调用" << endl;
//}
//
//int main()
//{
//	func(10);
//
//	return 0;
//}


//
//void func(int a,int b=10)
//{
//	cout << "this is func(int a,int b)的调用" << endl;
//}
//void func( int  a)
//{
//	cout << "this is func( int  a)的调用" << endl;
//}
//
//int main()
//{
//	//func(10);//当函数重载碰到默认参数，会出现二义性，尽量避免写默认参数
//
//	return 0;
//}



//类和对象

//C++面向对象的三大特性为:封装，继承，多态

//C++认为万事万物都为对象，对象上有属性行为



//封装
//封装的意义：
// 1.将属性和行为作为一个整体，表现生活中的事物（对象）
// 2.将属性和行为加以权限控制


//封装意义1.将属性和行为作为一个整体，表现生活中的事物（对象）


//设计一个圆类，求圆的周长
//求圆的周长公式：2*PI*半径


//类（class）

const double PI = 3.14;

class Circle
{

	//访问权限
     public:    //公用的


	//圆的属性  半径 
		 int m_r;
	 
	//圆的行为(用函数)
		 double calcuiateZC()
		 {
			 return 2 * PI * m_r;
		 }
	
};

int main()
{
	//通过圆类创建一个具体的圆
	Circle c1;
	//给圆对象 的属性进行赋值

	c1.m_r = 10;

	//
	cout << "圆的周长为 " << c1.calcuiateZC() << endl;

	return 0;
}


