#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int main()//打印100-200的素数
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//开平方)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d", i);
//	}
//
//	return 0;
//}



int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz-1;
	
	while (left <= right)
	{
     int mid = left + (right - left) / 2;
    if (arr[mid] < k)
	{
		left = mid + 1;
	}
	else if (arr[mid]>k)
	{
		right = mid - 1;
	}
	else
	{
		return mid;
	}

	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	//找到返回下标，找不到返回-1（返回0容易有歧义)
	//数组传参实际传的是第一个元素的地址
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}