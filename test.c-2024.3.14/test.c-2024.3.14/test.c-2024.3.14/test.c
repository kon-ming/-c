#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);
//	//getchar();//��ȡ��\n
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�����루Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
// }
int main()//ֻ��ӡ�����ַ�
{
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}