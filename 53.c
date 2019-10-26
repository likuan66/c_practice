//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
#include<stdio.h>
#include<windows.h>

int main()
{
	int i, j,num;
	printf("请输入一位整数要输出几乘几的乘法表：\n");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%2d=%3d ", j, i, j*i);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}