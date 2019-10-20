/*打印出杨辉三角形  (要求:打印出10行如下图）
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1  */
/*#include<stdio.h>
#include<Windows.h>

int main()
{
	int arr[10][10];
	int i, j;
	arr[0][0] = 1;//第一行第一列位1
	for (i = 0; i < 10; i++)
	{
		arr[i][0] = 1;//每行的第一个元素位1
		for (j = 0; j < 10; j++)
		{
			if (j == 0)//判断是不是每行的第一个元素，是的话置为1
			{
				arr[i][j] = arr[0][0];
			}
			else if (i >= 1 && j >= 1 && i != j)//判断是否是中间元素，不是第一列不是最后一列
			{
				arr[i][j] = arr[i - 1][j] + arr[i-1][j - 1];
			}
			else if (j == i)//判断是否是最后一列
			{
				arr[i][j] = arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
	
		for (j = 0; j <=i; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}*/
#include<stdio.h>
#include<Windows.h>
 int main()
{
	int i, j, a[11][11];        /*定义i，j，a[11][11]为基本整型*/
	for (i = 1; i < 11; i++)     /*for循环i的范围从1到10*/
	{

		a[i][i] = 1;         /*对角线元素全为1*/

		a[i][1] = 1;            /*每行第一列元素全为1*/

	}
	for (i = 3; i < 11; i++)          /*for循环范围从第3行开始到第10行*/
	{
		for (j = 2; j <= i - 1; j++)      /*for循环范围从第2列开始到该行行数减一列为止*/
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];  /*第i行j列等于第i-1行j-1列的值加上第i-1行j列的值*/
		}
	}

	for (i = 1; i < 11; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%4d", a[i][j]);              /*通过上面两次for循环将二维数组a中元素输出*/
		}
		printf("\n");                            /*每输出完一行进行一次换行*/
	}
	system("pause");
	return 0;
}

