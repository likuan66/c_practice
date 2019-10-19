//利用递归方法求5!
#include<stdio.h>
#include<Windows.h>

int fact(int m)
{
	if (m > 1)
	{
		return m*fact(m - 1);
	}
	else
	{
		return 1;
	}
}
int main()
{

	printf("%d", fact(5));
	system("pause");
	return 0;
}