#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	//如果for循环判断部分为空，代表判断恒成立
//	//for (i = 1; i <= 10; i++)//打印1-10
//	//{
//	//	printf("%d ", i);
//	//}
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;//此循环不执行，k=0为赋值，0为假，循环截止
//	return 0;
// }
int main()
{
	int i = 1;
	do//打印2-11（不包含5）
	{
		i++;//如果i++在printf后面执行，将打印1234后死循环
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	while (i <= 10);
	return 0;
}