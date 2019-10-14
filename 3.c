//一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
#include<stdio.h>
#include<Windows.h>
#include<math.h>
int main()
{
	int x, y, i;
	
	for (i = 1; i < 100000; i++)
	{

		x = sqrt(i + 100);
		y = sqrt(i + 268);
		if (i + 100 == x*x && y*y == i + 268)
		{
			printf("这个数是：%d\n", i);
		}
	}

	system("pause");
	return 0;
}