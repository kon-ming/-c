#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
//
//int main()//����n�Ľ׳�
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int num = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		num += ret;//numΪ1��+2��+..n!
//	}
//	printf("%d\n", num);
//	return 0;
//}

//int main()//���ֲ���
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid =left + (right-left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}
int main()
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";
	int left = 0;
	int right = strlen(arr2) - 1;//=sizeof(arr1)/sizeof(arr[0])-2;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//ͣ��1000ms
		//Ȼ�������Ļ
		system("cls");//system��һ���⺯��,����ִ��ϵͳ����
		//��������Ҫ��ͷ�ļ�
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}