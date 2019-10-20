//一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同
#include<stdio.h>
#include<Windows.h>

int main()
{
	int num;
	printf("请输入一个五位整数:");
	scanf_s("%d", &num);
	if (num % 10 == num / 10000 %10&& num / 10 % 10 == num / 1000 % 10)
	{
		printf("%d是回文数\n", num);
	}
	else
	{
		printf("%d不是回文数\n", num);
	}
	system("pause");
	return 0;

}