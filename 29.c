//用递归求一个数组的最大值；

#include<stdio.h>
#include<Windows.h>

int ArrMax(int arr[],int length)
{
	if (length==0)
	{
		return arr[0];
	}
	else 
	{
		if (arr[length] > ArrMax(arr, length - 1))
		{
			return arr[length];
		}
		else
		{
			return ArrMax(arr, length - 1);
		}
	}
}
int main()
{
	int arr[] = { 11, 22, 33, 44, 55, 66, 77 };
	int length = sizeof(arr) / sizeof(arr[0]);
	printf("%d", ArrMax(arr, length));
	system("pause");
	return 0;
}