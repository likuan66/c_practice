//求一个3 * 3矩阵对角线元素之和
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int arr[3][3];
	printf("请输入一个三位数组\n");
	int i, j;
	int sum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		sum += arr[i][i];
	}
	printf("对角线之和是：%d\n", sum);
	system("pause");
	return 0;
}