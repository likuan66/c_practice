#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int main()
{
	int arr[10];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	int  j, arr1[10];//arr1为存放不重复元素的数组
	int index = 0;//下标
	//冒泡排序
	for (i = 0; i < 10 - 1; i++)
	{
		for (j = 0; j < 10 - i - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	arr1[0] = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (arr[i] != arr[i - 1])//如果当前元素与前一个元素不相等，则将数存放到arr1中
		{
			arr1[index++] = arr[i];

		}
	}
	for (i = 0; i < index; i++)
	{
		printf("%d", arr1[i]);
	}
	system("pause");
	return 0;
}