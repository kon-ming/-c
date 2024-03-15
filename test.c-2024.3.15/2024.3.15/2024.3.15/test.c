#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()//将下面ASCII码值对应字符输出
//{
//	char arr[] = { 97,32,44,105,99 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}
int main()//4个数找最大值 
{
	int arr[4] = { 0 };
	int i = 0;
	while (i < 4)
	{
		scanf("%d", &arr[0]);
		i++;
	}
	int max = arr[0];
	i = 1;
	while (i < 4)
	{
		if (arr[i] > max)
		{
			max = arr[1];
		}
		i++;
	}
	printf("%d\n", max);
	return 0;
}