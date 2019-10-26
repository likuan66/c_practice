//递归方式实现打印一个整数的每一位
#include<stdio.h>
#include<Windows.h>

void fact(int n)
{
	if (n > 9)
	{
		fact(n / 10);
	}

		printf("%d ", n % 10);
	
}
int main()
{
	int n;
	printf("请输入要打印的整数：\n");
	scanf_s("%d", &n);
	fact(n);
	system("pause");
	return 0;
}