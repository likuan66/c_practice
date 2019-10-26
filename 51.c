//递归和非递归分别实现求n的阶乘
//#include<stdio.h>
//#include<Windows.h>
//
//int fact(int n)
//{
//	int i = 0;
//	int count = 1;
//	for (i = 1; i <= n; i++)
//	{
//		count *= i;
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	printf("请输入要求阶乘的数：\n");
//	scanf_s("%d", &n);
//	printf("%d的阶乘是：%d\n", n, fact(n));
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<Windows.h>

int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n*fact(n - 1);
	}
}
int main()
{
	int n;
	printf("请输入要求阶乘的数：\n");
	scanf_s("%d", &n);
	printf("%d的阶乘是：%d\n", n, fact(n));
	system("pause");
	return 0;
}