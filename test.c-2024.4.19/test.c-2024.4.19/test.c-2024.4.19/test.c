#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int main()//��ӡ100-200������
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//��ƽ��)
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
	
	//�ҵ������±꣬�Ҳ�������-1������0����������)
	//���鴫��ʵ�ʴ����ǵ�һ��Ԫ�صĵ�ַ
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	return 0;
}