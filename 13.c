//将一个正整数分解质因数。例如：输入90, 打印出90 = 2 * 3 * 3 * 5
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#include<math.h>
int main()
{
	int num = 0;
	printf("请输入一个整数：");
	scanf("%d",&num);
	int i = 0;
	printf("%d=", num);
	for (i = 2; i <=sqrt(num); i++)
	{
		if (num%i == 0&&num/i!=1)
		{
			printf("%d*", i);
			num = num / i;
			i = 2;
		}
	}
	printf("%d\n", num);
	system("pause");
	return 0;
}