//获取二进制的偶数位和奇数位
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int input;
	printf("请输入一位数:\n");
	scanf("%d", &input);
	int arr[32];
	int i = 0;
	while (input > 0)
	{
		arr[i] = input % 2;
		i++;
		input /= 2;
	}
	for (; i < 32; i++)
	{
		arr[i] = 0;
	}

	printf("奇数位是:");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("偶数位是:");
	for (i=30; i >= 0; i -= 2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}