/*利用字母可以组成一些美丽的图形，下面给出了一个例子：
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
这是一个5行7列的图形，请找出这个图形的规律，并输出一个n行m列的图形。
输入格式
输入一行，包含两个整数n和m，分别表示你要输出的图形的行数的列数。
输出格式
输出n行，每行m个字符，为你的图形*/
#include<stdio.h>
#include<windows.h>


int main()
{
	int n, m;
	printf("请输入两个整数，一个表示行一个表示列:\n");
	scanf_s("%d%d", &n, &m);
	char c;
	int i, j, k;
	char array[10][10] = { 0 };
	for (i = 0; i < n; i++)
	{
		c = 'A';
		for (j = i; j < m; j++)
		{
			array[i][j] = c++;
		}
		c = 'A';
		for (k = i - 1; k >= 0; k--)
		{
			array[i][k] = ++c;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%c", array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}