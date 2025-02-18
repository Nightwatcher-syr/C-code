//调试

//1.越界带来的死循环问题

#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0;i <= 12;i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	return 0;
}

//由于存放时为从低地址存到高地址
// 而数组的存放是从高地址存放到低地址存放
// 
//而高地址在下面，低地址在上面
//先存的是i（在低地址）  再存放arr（在高地址）
//读取数组的时候先读取高地址的，再读取低地址的
//如果有越界行为，可能会越界到i的地址
//就这样，如上面的代码所示（调试可清晰看见），不断的把i赋值为0
//这就导致了死循环的出现



//优秀的代码赏析

#include<stdio.h>

void my_strcpy(char* dest, const char* src)//const报错是编译型的错误（左值必须为可修改的对象）
{
	//断言
	assert(src != NULL);//括号里的表达式如果为假的话，assert会报错（引头文件assert）
	assert(dest != NULL);//防止传过来空指针（危险）
	//如果错误，容易找到问题的地点

	while (*dest++ = *src++)//先交换，再++，当到‘\0’(ASCII值为0--假停止循环)
	{
		;
	}

}
int main()
{
	char arr1[20] = "*************";
	char arr2[] = "hello";

	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


int main()
{
	const int num = 10;
	//num = 20;   //在num前面加上const后，直接改变num的值会报错（把num当成了常量）--（表达式必须为可修改的左值）
	
	int* p = &num;
	*p = 20;//这时num的值被改变（翻窗户行为）----破坏了const的规则

	const int* p1 = &num;
	//*p1 = 20;     //这样就不能改变了（翻窗户行为被制止）
	 

	return 0;
}
//const 修饰指针变量
//1.const放在*的左边（const int*p=&num  与写法  int const*p  是等价的）----const修饰*p
//意思是：p指向的对象不能通过p来改变了，但是p变量本身的值是可以改变的
//*p=20； err
//p=&n；  right



//2.const放在*的右边（ int*const p=&num）
//意思是：p指向的对象是可以通过p来改变的，但是不能修改p变量本身的值
//p=10；err
//*p=0； right  



//3.左右都放const
//意思是：p指向的对象即不能通过p来改变，又不能修改p变量本身的值



my_strlen(const char* str)//这里的const是为了防止数组的内容被改变
{
	int count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{

	char arr[] = "herro";
	int len = my_strlen(arr);//把数组的地址传
	pritnf("%d\n", len);
	return 0;
}


//编程常见的错误
//1.编译型错误（语法错误）----双击错误信息（跳到错误处）
//2.链接型错误（无法解析的外部符号——（找不到）用了没见过的信息）---双击不能跳到错误信息处--需要自己排查
//3.运行时错误（通过调试解决）----累计排错经验



//ctrl+f-----搜索

//代码仓库
//gitee（国内）

//git----版本管理的工具（一般使用命令来操作）---不熟悉的时候用TortoiseGit来操作


//