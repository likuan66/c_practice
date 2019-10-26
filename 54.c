//汉诺塔（递归）
#include<stdio.h>
#include<Windows.h>

void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
	{
		printf("圆盘编号 %d：从 %c 移动到 %c \n", n, x, z);
	}
	else
	{
		hanoi(n - 1, x, z, y);
		printf("圆盘编号 %d: 从 %c 移动到 %c\n", n, x, z);
		hanoi(n - 1, y, x, z);
	}
}
int main()
{
	char x = 'A';
	char y = 'B';
	char z = 'C';//ABC代表三个柱子

	int n;//圆盘数
	printf("请输入圆盘的个数:\n");
	scanf_s("%d", &n);
	hanoi(n, x, y, z);
	system("pause");
	return 0;

}