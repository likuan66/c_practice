//编写一个函数实现n^ k，使用递归实现
#include<stdio.h>
#include<Windows.h>

int fib(int n, int k)
{
	if (k==1)
	{
		return n;
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return n*fib(n,k-1);
	}
}
int main()
{
	int n, k;
	printf("请输入两个整数,一个表示n一个表示k：\n");
	scanf_s("%d%d", &n, &k);
	printf("n^k：%d", fib(n, k));
	system("pause");
	return 0;
}