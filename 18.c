//一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6 = 1＋2＋3.编程找出1000以内的所有完数。
#include<stdio.h>
#include<Windows.h>

int main()
{

	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 1; i <= 1000; i++)
	{
		sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i%j == 0)
			{
				sum += j;
			}
		}
		if (i == sum)
		{
			printf("%d是完数\n", i);
		}
	}
	system("pause");
	return 0;
}