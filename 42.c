//给出一个包含n个整数的数列，问整数a在数列中的第一次出现是第几个。
#include<stdio.h>
#include<windows.h>
int Find(int n, int arr[], int key)
{
	int index = -1;
	int i; 
	for (i = 0; i<n; i++)
	{
		if (arr[i] == key)
		{
			index = i + 1;
			break;
		}
	}
	return index;
}
int main()
{
	int n, key;
	int i;
	int arr[10000];
	printf("请输入这组数中元素的个数:");
	scanf_s("%d", &n);
	for (i = 0; i<n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("请输入要查找的元素:");
	scanf_s("%d", &key);
	printf("%d\n", Find(n, arr, key));
	system("pause");
	return 0;

}
