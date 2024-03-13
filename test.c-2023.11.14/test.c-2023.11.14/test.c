
#include<stdio.h>
//typedef unsigned int uint;
//int main()
//{
//	//typedef(类型重命名)
//	unsigned int num = 0;
//	return 0;
//}

//static
//1.修饰局部变量
//2.修饰全局变量
//3,修饰函数

//void test()
//{
//	static int a = 1;//static修饰局部变量时，局部变量出了作用域,不销毁。本质上，static修饰局部变量的时候，改变了变量的存储位置。
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//extern int g_val;//声明外部符号
//int main()
//{
//	printf("%d\n",g_val);//static修饰全局变量的时候，这个全局变量的外部链接属性就变成了内部链接，其他源文件.c就不能再使用这个全局变量。
//	return 0;
//}
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);//static修饰的时候，外部链接属性就变成内部链接属性，其他源文件.c无法使用
//	printf("%d\n", z);
//	return 0;
//}
//register建议把接值放入寄存器
//#define定义的常量和宏
//宏有参数
//#define ADD(x,y) ((x)+(y))//ADD为宏名 x y为参数 后面括号是宏体
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);
//	int* p = &a;//p为指针变量  *说明p是指针变量 int说明p指向的对象是int类型
//	*p = 20;//意思是通过p存放的地址，找到P所指对象，*p就是p指的对象
//	//指针大小取决于一个地址存放的时候需要多大空间 32位机器大小为4byte 64为8byte
//	printf("%zd\n", sizeof(int*));
//	return 0;
//}