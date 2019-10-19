//一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字
#include<stdio.h>
#include<Windows.h>

int main()
{
	int num1,num2;
	int count = 0;
	printf("请输入一个不多于5位的整数\n");
	scanf_s("%d", &num1);
	num2 = num1;
	while (num1 % 10 != 0)
	{
		count++;
		num1 = num1 / 10;
	}
	printf("一共有%d位\n", count);
	int i = 0;
	for (i = 1; i <= count; i++)
	{
		printf("%d ", num2 % 10);
		num2 = num2/ 10;
	}
	system("pause");
	return 0;
}