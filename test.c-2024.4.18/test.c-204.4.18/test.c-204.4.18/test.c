#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


void swap(int* px, int* py)
{
	int z = *px;
	*px = *py;
	*py = z;
}
int main() //交换两个数值
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}