//再复习一边二分查找
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 4,5,6,7,8,9,10,11,12 };//二分查找只适用于有一定规律的数组，如果这一串数为1，34，57，那么将无法用这种方法
//	int right=sizeof(arr)/sizeof(arr[0])-1;
//	int left = 0;
//	int k = 0;
//	scanf_s("%d", &k);
//	while(right >= left)
//	{
//		int mid = 0;//这里要把mid初始化，防止因为mid而死循环
//	    mid = (right + left) / 2; //1.这种写法有潜在的问题，因为right和left是整形的，假设这两个值取得非常大，那么加起来的值可能就超过了int的取值限制导致数据溢出mid的之不准确
//		                          //改进方法可以写为mid=left+(right-left)/2----意思为让小的数加上两数差值的一半----算出来的还是平均值--但不会溢出
//		                          //可不敢把这个语句放到外面，如果放到外面，结果也是死循环，因为mid的值不变了
//		if (arr[mid] > k)//  如果写成这样if (mid > k)  ，那么不管输入几，输出的结果就是几
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，这个数的下标为:%d", mid);
//			break;//如果不加上break，就会一直死循环
//		}
//	}
//	if (right < left)
//	{
//		printf("找不到，这个数不存在！");
//		return 0;//如果不加上return0，那么输入错误的结果的时候会闪退
//	}
//	return 0;
//}


//编写代码，演示多个字符从两端移动，向中间汇聚
//#include<stdio.h>
//#include<windows.h>//引入windows才能使用Sleep
//int main()
//{
//	char arr1[] = "HXH  HXH";
//	char arr2[] = "********";
//	int right = strlen(arr2) - 1;//计算right的长度的方法有两种详见代码底部
//	int left = 0;
//	while (right >=left)
//	{
//	
//		arr2[left] = arr1[left];//用arr2的最前面的字符替代arr1最前面的字符
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(300);//300ms,1000ms相当于1s，我感觉300ms正好  //S记得要大写
//		left++;
//		right--;
//	}
//	return 0;
//}
//计算一个数组长度的方法
//1.用strlen（arr1）-1，因为假设一个字符型数组为char buf[]="a b c"则实际上保存了四个字符分别为a b c \0（strlen检测出的是4）,又a的下标为0，第三个字符c的下标实际为2，则要在最后减一
//2.用sizeof（arr1）/sizeof(arr1[0])-2,在这里，减了二的原因是这个除法算的结果是4，减一才是最后一个数的位，再减一是因为第一元素下标为0


//如果想要一行一行的展示，即执行一行后前面的行清空，重新展示新的一行，则需要引入库函数system

//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>//引入windows才能使用Sleep
//int main()
//{
//	char arr1[] = "HXH*HXH*HXH";
//	char arr2[] = "***********";
//	int right = strlen(arr2) - 1;//计算right的长度的方法有两种详见代码底部
//	int left = 0;
//	while (right >= left)
//	{
//
//		arr2[left] = arr1[left];//用arr2的最前面的字符替代arr1最前面的字符
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//300ms,1000ms相当于1s，我感觉300ms正好  //S记得要大写
//		system("cls");//system是一个库函数，可以执行系统命令  //cls就是清空  //pause是停止
//		left++;
//		right--;
//	}
//	return 0;
//}

//编写代码实现，模拟用户登陆情况，并且只能登录三次。（只允许输入三次密码，如果密码正确则登陆成功，如果三次均输错，则退出系统
//能够判断出来是要用循环
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i ;
//	char password[] = { 0 };//假设密码abc
//	for (i = 1;i < 4;i++)
//	{
//		printf("请输入密码:");
//	    scanf_s("%s", password);  //数组名本来就是地址，所以这个地方不需要&
//		if (strcmp(password,"abc") == 0) //比较两个字符串是否相等，不能使用==而要使用一个库函数：strcmp---如果返回值是0，则表示两个字符串相等
//		{
//			printf("登陆成功:>\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//     }
//	if (i == 4)
//	{
//		printf("三次输入均错误，退出程序");
//     }
//	return 0;
//}

//!!!!!!上面的代码有错误，稍后再看吧