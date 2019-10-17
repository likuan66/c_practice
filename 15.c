//输入两个正整数m和n，求其最大公约数和最小公倍数

#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, m, n, temp;
	printf("请输入两个正整数：");

	scanf("%d %d", &m, &n);

	if (m < n)

	{
		temp = m;
		m = n;
		n = temp;
	}
	a = m;
	b = n;

	/*利用辗除法，直到b为0为止*/
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}

	printf("最大公约数是：%d\n", a);
	printf("最小公倍数是：%d\n", m*n / a);

	system("pause");
	return 0;
}
