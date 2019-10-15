//要求输出国际象棋棋盘
#include<stdio.h>
#include<Windows.h>

int main()
{
	int i, j;
	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				printf("%c ",2);
			}
			else
			{
				printf("%c ",1);
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}