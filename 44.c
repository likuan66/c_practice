//’€∞Î≤È’“
#include<stdio.h>
#include<Windows.h>

int Print(int array[], int length,int key)
{
	int left = 0;
	int right = length - 1;
	int mid, i;
	while (left<=right)
	{
		 mid = (right + left) / 2;
		if (key>array[mid])
		{
			left = mid + 1;
		}
		else if (key < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int key =77;
	int array[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99 };
	int length = sizeof(array) / sizeof(array[0]);
	printf("%d", Print(array, length, key));

	system("pause");
	return 0;
}