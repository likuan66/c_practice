//不是成对出现
#include<stdio.h>
#include<Windows.h>

int main()
{
	int arr[] = { 1, 2, 3, 2, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0, j = 0;
	int flag = 0;
	for (i = 0; i < len; i++)
	{
		flag = 0;
		for (j = 0; j < len; j++)
		{
			if (arr[i] ==arr[j])
			{
				flag++;
			}
		}
		if (flag % 2 == 1)
		{
			printf("%d\n", arr[i]);
		}
	}
	system("pause");
	return 0;
}