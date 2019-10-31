//二进制数中1的个数 
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int input;
	printf("请输入一位数:\n");
	scanf("%d", &input);
	int count = 0;
	while (input>0)
	{
		if (input % 2 == 1)
		{
			count++;
		}
		input /= 2;
	}
	printf("%d", count);
	system("pause");
	return 0;
}