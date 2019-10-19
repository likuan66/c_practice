//有一分数序列：2 / 1，3 / 2，5 / 3，8 / 5，13 / 8，21 / 13...求出这个数列的前20项之和。
#include<stdio.h>
#include<Windows.h>

int main()
{
	int i = 0;
	double m = 2;
	double n = 1;
	double sum =0;
	double temp = 0;
	for (i = 1; i <= 20; i++)
	{
			sum += m / n;
			temp = m + n;
			n = m;
			m = temp;

	}
	printf("%f", sum);
	system("pause");
	return 0;

}