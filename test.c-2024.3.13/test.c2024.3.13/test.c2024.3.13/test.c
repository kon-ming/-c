#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int age = 10;
//	scanf("%d",&age);
//	if (age < 18)//if后面只能跟一条语句，如果要多条语句需要加大括号
//	{
//		printf("未成年\n");
//		printf("不能饮酒\n");
//	}
//	else if (age >= 18 && age < 28)//不能写成（18<=age<28 )
//	{
//		printf("青年\n");
//	}
//	else//else与距离最近的if匹配,if和else组合为一个语句
//		printf("成年\n");
//		return 0;
//}
//int main()//switch适用于多分支
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//括号内必须是整形
//	{
//	case 1://case后面必须是常量整形,字符也属于
//			printf("星期1\n");
//			break;//如果没有break将从当前位置继续向下执行，直到语句结束
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//	default:
//		printf("选择错误\n");
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
			break;//break终止while全部循环
		continue;//跳过其后面的代码来到while头部继续判断

		printf("%d ", i);
	}
	return 0;
}