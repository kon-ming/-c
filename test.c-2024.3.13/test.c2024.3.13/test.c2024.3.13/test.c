#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int age = 10;
//	scanf("%d",&age);
//	if (age < 18)//if����ֻ�ܸ�һ����䣬���Ҫ���������Ҫ�Ӵ�����
//	{
//		printf("δ����\n");
//		printf("��������\n");
//	}
//	else if (age >= 18 && age < 28)//����д�ɣ�18<=age<28 )
//	{
//		printf("����\n");
//	}
//	else//else����������ifƥ��,if��else���Ϊһ�����
//		printf("����\n");
//		return 0;
//}
//int main()//switch�����ڶ��֧
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//�����ڱ���������
//	{
//	case 1://case��������ǳ�������,�ַ�Ҳ����
//			printf("����1\n");
//			break;//���û��break���ӵ�ǰλ�ü�������ִ�У�ֱ��������
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("����7\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//	return 0;
//}
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (5 == i)
			break;//break��ֹwhileȫ��ѭ��
		continue;//���������Ĵ�������whileͷ�������ж�

		printf("%d ", i);
	}
	return 0;
}