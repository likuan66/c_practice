//国古代数学家张丘建在他的《算经》中提出了一个著名的“百钱买百鸡问题”，鸡翁一，值钱五，鸡母一，值钱三，鸡雏三，值钱一，百钱买百鸡，问翁、母、雏各几何？
#include<stdio.h>
#include<windows.h>

int main()
{
	int i, j, k;
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			for (k = 0; k < 100; k++)
			{
				if (i * 5 + j * 3 + k / 3 == 100 && k % 3 == 0 && i + k + j == 100)
				{
					printf("公鸡为%d只，母鸡为%d只，小鸡为%d只\n", i, j, k);
				}
			}
		}
	}
	system("pause");
	return 0;
}