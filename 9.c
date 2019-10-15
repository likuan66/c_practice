//打印楼梯，同时在楼梯上方打印两个笑脸
#include<stdio.h>
#include<Windows.h>

int main()
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 2*i; j++)
		{
			printf(" ");
		}
		printf("%c", 1);
		printf("%c", 1);
		printf("\n");
	}
	system("pause");
	return 0;
}