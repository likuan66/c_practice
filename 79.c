/*有一个二维数组.
数组的每行从左到右是递增的，每列从上到下是递增的.
在这样的数组中查找一个数字是否存在。
时间复杂度小于O(N)
数组：
1 2 3
2 3 4
3 4 5

1 3 4
2 4 5
4 5 6

1 2 3
4 5 6
7 8 9*/
#include<stdio.h>
#include<Windows.h>
#define N 3
#pragma warning(disable:4996)
int Find(int a[N][N], int row, int col)
{
	int key;
	printf("请输入要查找的数：\n");
	scanf("%d", &key);
	int row1 = row - 1;
	int col1 = 0;
	while (row1 < row&&col1 < col)
	{
		if (a[row1][col1] == key)
		{
			return 1;
			break;
		}
		else
		{
			if (a[row1][col1]>key)
			{
				row1--;
			}
			else
			{
				col1++;
			}
		}
	}
	return -1;

}
int main()
{
	int a[N][N] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
	printf("如果返回是1，表示找到了，如果返回-1，表示没找到：\n%d\n", Find(a, N, N));

	system("pause");
	return 0;
}