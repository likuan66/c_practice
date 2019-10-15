//输入三个整数x, y, z，请把这三个数由小到大输出
#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	
	
	scanf("%d%d%d", &a, &b, &c);
	
	if (a>b)
	{
		a = a^b;
		b = a^b;
		a = a^b;
	}
	if (a > c)
	{
		a = a^c;
		c = a^c;
		a = a^c;
	}
	if (b > c)
	{
		b = b^c;
		c = b^c;
		b = b^c;
	}
	printf("排序后的三位整数是：%d %d %d", a, b, c);
	system("pause");
	return 0;
}