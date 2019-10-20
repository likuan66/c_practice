//输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组
#include<stdio.h>
#include<Windows.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int max = arr[0];
	int min = arr[1];
	int temp = 0;
	int m, n;
	for (i = 0; i < length; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			m = i;
			
		}	
	}
	temp = arr[0];
	arr[0] = arr[m];
	arr[m] = temp;
	for (i = 0; i < length; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			n = i;
		}
	}
	temp = arr[length - 1];
	arr[length - 1] = arr[n];
	arr[n] = temp;

	for (i = 0; i < length; i++)
	{
		printf("%d", arr[i]);
	}
	system("pause");
	return 0;
}