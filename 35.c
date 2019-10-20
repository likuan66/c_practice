//输入3个数a, b, c，按大小顺序输出 利用指针方法

#include<stdio.h>
#include<Windows.h>

void swap(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}
int main()
{
	int a, b, c;
	int *x, *y, *z;
	printf("请输入三位数:\n");
	scanf_s("%d%d%d", &a, &b, &c);
	x = &a;
	y = &b;
	z = &c;
	if (a < b)
	{
		swap(x, y);
	}
	if (a < c)
	{
		swap(x, z);
	}
	if (b < c)
	{
		swap(y, z);
	}
	printf("%d %d %d", a, b, c);
	system("pause");
	return 0;
}