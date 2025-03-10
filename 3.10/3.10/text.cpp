//设计一个学生类
//属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

#include<iostream>
#include<string>
using namespace std;


//class Student
//{
//public:
//	//类中的属性和行为 我们统称为 成员
//	//属性  成员属性 成员变量
//	//行为  成员函数 成员方法
//
//	string m_Name;
//	int m_ID;
//
//	void showStudent()
//	{
//		cout << "姓名:" << m_Name << "  学号：" << m_ID << endl;
//	}
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//
//};
//int main()
//{
//	//创建一个具体学生 实例化对象
//	Student s1;
//	//给s1对象 进行属性赋值操作
//	s1.m_Name = "张三";
//	s1.m_ID = 1;
//
//	s1.showStudent();
//
//	Student s2;
//	s2.m_Name = "李四";
//	s2.m_ID = 2;
//	s2.showStudent();
//
//	Student s3;
//	s3.setName("王五");
//	s3.m_ID = 3;
//	s3.showStudent();
//	return 0;
//}


//封装意义二
//类在设计时，可以把属性和行为放在不同的权限下，加以控制

//访问权限有三种;
//1.public    公共权限
//2.protected 保护权限
//3.private   私有权限


//访问权限
//1.public    公共权限    成员类内可以访问 类外也可以访问
//2.protected 保护权限    成员类内可以访问 类外不可以访问 儿子也可以访问父亲中的保护内容
//3.private   私有权限    成员类内可以访问 类外不可以访问 儿子不可以访问父亲中的保护内容（继承）
//class Person
//{
//public:
//	string m_Name;
//protected:
//	string m_Car;
//private:
//	int m_Password;
//public:
//	void func()
//	{
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123456;//在整个大括号里面就是类内，都可以访问
//
//	}
//};
//int main()
//{
//	Person p1;//实例化对象
//	p1.m_Name = "李四";
//
//	//p1.m_Car = "奔驰";//错误提示：已声明在70行不可访问---因为m_Car是私有的，在类外不可访问
//	//Password同理
//
//	return 0;
//}









//struct 和 class 的区别
// 
//唯一区别在于 默认的访问权限不同
//struct的默认访问权限是公共
//class的默认访问权限的私有

//class C1
//{
//	int m_A;//默认权限是私有
//};
//
//struct C2
//{
//	int m_A;//默认权限是公共
//};
//
//int main()
//{
//	C1 c1;
//	//c1.m_A = 100;  //报错说不可访问
//
//
//	C2 c2;
//	c2.m_A = 100;//没报错--默认是公共
//
//	return 0;
//}








//成员属性设置为私有
//优点1：将所有属性设置为私有，可以自己控制读写权限
//优点2：对于写权限，我们可以检测数据的有效性


//验证优点1
//class Person
//{
//public:
//	//设置姓名
//	void setName(string name)
//	{
//		m_Name = name;
//	 }
//	//获取姓名
//	string getName()
//	{
//		return m_Name;
//	}
//
//	//获取年龄
//	int getAge()
//	{
//		return m_Age;
//	}
//	//设置偶像
//	void setIdol(string idol)
//	{
//		m_Idol = idol;
//	}
//
//private:
//	string m_Name;  //姓名 可读可写
//
//	int m_Age=18;     //年龄 只读
//	
//	string m_Idol; //偶像 只写
//};
//int main()
//{
//	Person p;
//	//设置姓名
//	p.setName("张三");
//	//获取姓名
//	cout << "姓名： " << p.getName()<<endl;
//
//	//年龄设置
//	/*p.setAge(20);
//	p.m_Age = 20;*/
//	//获取年龄
//    cout << "年龄： " << p.getAge() << endl;
//
//
//	//偶像设置
//	p.setIdol("x");
//	//获取偶像
//	//cout << "年龄： " << p.getIdol() << endl;//没有偶像这个成员--不可读
//
//	return 0;
//}

//验证优点2
//class Person
//{
//public:
//
//
//	//设置姓名
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//获取姓名
//	string getName()
//	{
//		return m_Name;
//	}
//
//
//
//	//设置年龄(0~150)
//	int setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "你的年龄输入有误，赋值失败" << endl;
//			return;
//		}
//
//	}
//	//获取年龄
//	int getAge()
//	{
//		return m_Age;
//	}
//
//
//
//	//设置偶像
//	void setIdol(string idol)
//	{
//		m_Idol = idol;
//	}
//
//private:
//	string m_Name;  //姓名 可读可写
//
//	int m_Age = 18;     //年龄 可读可写，但是年龄必须在0~150之间
//
//	string m_Idol; //偶像 只写
//};
//int main()
//{
//	Person p;
//	//设置姓名
//	p.setName("张三");
//	//获取姓名
//	cout << "姓名： " << p.getName() << endl;
//
//	//年龄设置
//	/*p.setAge(20);
//	p.m_Age = 20;*/
//	//获取年龄
//	cout << "年龄： " << p.getAge() << endl;
//
//
//	//偶像设置
//	p.setIdol("x");
//	//获取偶像
//	//cout << "年龄： " << p.getIdol() << endl;//没有偶像这个成员--不可读
//
//	return 0;
//}



//封装案例1：设计立方体类

//1.设计立方体类
//2.设计属性
//3.设计行为
//4.分别利用全局函数和成员函数 判断两个立方体 是否相等

class Cube
{
public:
	//设置长
	void setL(int l)
	{
		m_L = l;
	}

	//获取长
	int getL()
	{
		return m_L;
	}

	//设置宽
	void setW(int w)
	{
		m_W = w;
	}

	//获取宽
	int getW()
	{
		return m_W;
	}
	//设置高
	void setH(int h)
	{
		m_H = h;
	}

	//获取高
	int getH()
	{
		return m_H;
	}


//创建行为---计算面积和体积
	int cal_s()
	{
		return 2 * (m_L * m_W + m_H * m_W + m_L * m_H);
    }
	int cal_v()
	{
		return m_L * m_W * m_H;
	}


//成员函数判断这两个立方体相等
	void IsSameByClass(Cube c2)  
	{
		if (m_L == c2.getL() && m_W== c2.getW() && m_H == c2.getH())
			cout << "成员函数判断:这两个立方体相等" << endl;

		else
			cout << "成员函数判断:这两个立方体不相等" << endl;

	}


private:
	int m_L; //长
	int m_W; //宽
	int m_H; //高
};


//创建一个全局变量，来判断两个立方体是否相等
bool IsSame(Cube c1, Cube c2)  //引用
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
		return true;
	return false;
}

int main()
{
	//创建一个立方体对象
	class Cube c1;
	c1.setL(11);
	c1.setW(10);
	c1.setH(10);
	
	cout << "c1的面积为：" << c1.cal_s() << "\n" << "c1的体积为：" << c1.cal_v() << endl;


	class Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);



	bool ret = IsSame(c1, c2);
	if (ret)
	{
		cout << "全局函数判断:这两个立方体相等" << endl;
	}
	else
		cout << "全局函数判断:这两个立方体不相等" << endl;

	c1.IsSameByClass(c2);

	return 0;
}