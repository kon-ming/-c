#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	//���forѭ���жϲ���Ϊ�գ������жϺ����
//	//for (i = 1; i <= 10; i++)//��ӡ1-10
//	//{
//	//	printf("%d ", i);
//	//}
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;//��ѭ����ִ�У�k=0Ϊ��ֵ��0Ϊ�٣�ѭ����ֹ
//	return 0;
// }
int main()
{
	int i = 1;
	do//��ӡ2-11��������5��
	{
		i++;//���i++��printf����ִ�У�����ӡ1234����ѭ��
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	while (i <= 10);
	return 0;
}