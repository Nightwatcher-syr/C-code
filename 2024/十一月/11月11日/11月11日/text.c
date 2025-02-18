//在一个有序数组中查找某个数字n（讲解二分查找）
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//1的下标为0，依次
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素的个数
//	for (i = 0;i <= sz;i++)//历尽所有数
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d\n", i);//arr【】括号中的是下标
//			break;//if语句暂停了
//		}
//		if(i==sz)
//		{
//			printf("找不到");//历尽所有数都没有找到，那么就找不到了
//		}
//	}
//	printf("%d", arr[0]);//下标为0的数字确实为1，那么下标为6的数字是7
//	return 0;//这种写法没有利用到有序性
//}

//买了一双鞋
//不超过300
//不要1，2，3，。。。从小到大猜，没效率
//150--小啦  250--大啦  只用在150~250中猜数
//1 2 3 4 5 6 7 8 9 10   
//左边元素的下标叫left--为0  右边元素的下标为right--9  中间元素的下标为4（mid）
//7>5,则在右边，这时，左边元素变成了6（下标为5），右边元素还是下标9------一次运算后数直接减少了一半
// 这种方法叫折半查找或二分查找
// 再比对新的中间元素和查找的元素--再次缩小范围
//最后左下标和右下标和中间下标都是6--对应的数是7---找到了
//如果这多没找到--说明再也找不到了
//找10是最坏的情况--但是也只用找4次
//前提条件是这些数据必须是有序的


//用二分法再写
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int left = 0;

	while (right>=left)
	{
		int mid = (right + left) / 2;
		if (k > arr[mid])
		{
			left = mid + 1;
		}
		else if (k < arr[mid])
		{
			right = mid - 1;

		}
		else
		{
			printf("找到了,下标为:%d",mid);
			break;
		}
		
	}
	if (left > right)
	{
		printf("找不到了！");
	}
	printf("%d", arr[0]);
	return 0;
}