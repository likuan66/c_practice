//打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。例如：153是一个“水仙花数”，
//因为153 = 1的三次方＋5的三次方＋3的三次方

#include<stdio.h>
#include<Windows.h>
int main()
{
	int ge = 0;
	int shi = 0;
	int bai = 0;
	int i = 0;
	for (i = 100; i < 1000; i++)
	{
		ge = i % 10;
		shi = i / 10 % 10;
		bai = i / 100;
		if (ge*ge*ge + bai*bai*bai + shi*shi*shi == i)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}