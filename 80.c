/* 调整数组使奇数全部都位于偶数前面。
>
>    题目：
>
>    输入一个整数数组，实现一个函数，
>    来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
>    所有偶数位于数组的后半部分。*/
#include<stdio.h>
#include<Windows.h>
#define N 10
#pragma warning(disable:4996)

void Find(int *start, int *end)
{
	while (start < end)
	{
		if (*start % 2 == 0&&*end%2!=0)
		{
			int temp = *start;
			*start = *end;
			*end = temp;
		}
		else if (*start % 2 != 0)
		{
			start++;
		}
		else if (*end%2 == 0)
		{
			end--;
		}
	}
}
int main()
{
	int a[N];
	printf("请输入10个整数：\n");
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	int *start = a;
	int *end = a + sizeof(a) / sizeof(a[0]) - 1;
	Find(start, end);
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}