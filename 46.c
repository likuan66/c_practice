//递归和非递归分别实现求第n个斐波那契数。
#include<stdio.h>
#include<Windows.h>

//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n;
//	printf("请输入要求第几个斐波那契数：\n");
//	scanf_s("%d", &n);
//
//	printf("第%d个斐波那契数是：%d\n", n, fib(n));
//	system("pause");
//	return 0;
//}
int fib(int n)
{
	int x = 1;
	int y = 1;
	int m = 0;
	while (n - 2 > 0)
	{
		m = x + y;
		x = y;
		y = m;
		n--;
	}
	return m;
}
int main()
{
	int n;
	printf("请输入要求第几个斐波那契数：\n");
	scanf_s("%d", &n);

	printf("第%d个斐波那契数是：%d\n", n, fib(n));
	system("pause");
	return 0;
}