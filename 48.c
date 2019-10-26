//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
#include<stdio.h>
#include<Windows.h>

int DigitSum(int num)
{
	if (num < 10)
	{
		return num;
	}
	else
	{
		return num % 10 + DigitSum(num / 10);
	}
}
int main()
{
	int num;
	printf("请输入一位整数：\n");
	scanf_s("%d", &num);
	printf("组成的数字之和是:%d\n", DigitSum(num));
	system("pause");
	return 0;
}