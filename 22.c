//题目：打印出如下图案（菱形）
#include<stdio.h>
#include<Windows.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	int i, j, k;
	for (i = 1; i <= n; i++)
	{
		for (j = n-1; j >=i; j--)
		{
			printf(" ");
		}
		for (k = 1; k<=2*i-1 ; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = n-1; i >=1; i--)
	{
		for (j = i; j <= n - 1; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= 2*i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}