//用递归完成最大公约数
#include<stdio.h>
#include<Windows.h>

int fact(int m, int n)
{
	if (m % n==0)
	{
		return n;
	}
	else
	{
		return n, m%n;
	}
	
}
int main()
{
	int m, n;
	scanf_s("%d %d", &m, &n);
	printf("%d", fact(m, n));
	system("pause");
	return 0;
}