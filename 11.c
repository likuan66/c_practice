//判断101 - 200之间有多少个素数，并输出所有素数
#include<stdio.h.>
#include<windows.h>
#include<math.h>
int main()
{
	int i, j;
	for (i = 101; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j>sqrt(i))
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}