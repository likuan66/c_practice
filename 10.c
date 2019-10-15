//古典问题：有一对兔子，从出kc生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？

#include<stdio.h>
#include<Windows.h>

int main()
{
	int arr[20] = { 0, 1 };
	int i = 0;
	for (i = 2; i < 20; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (i = 1; i < 20; i++)
	{
		printf("%d\n", arr[i]);
	}

	system("pause");
	return 0;
}