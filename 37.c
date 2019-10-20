//.十进制与二进制相互转换
#include<stdio.h>
#include<Windows.h>
#include<math.h>
#define N 100
int Exchange1(long long n)
{
	int i = 0;
	int sum = 0;
	while (n > 0)
	{
		sum += ((n % 10)*pow(2, i++));
		n /= 10;
	}
	return sum;
}

int main()
{
	long long num1 = 0;
	int num2 = 0;
	printf("请输入一位二进制数\n");
	scanf_s("%11d", &num1);
	printf("%d\n", Exchange1(num1));
	
	printf("请输入一位十进制数\n");
	scanf_s("%d", &num2);
	int a[N];
	int i = 0;
	
	while (num2>0)
	{
		a[i] = num2 % 2;
		i = i + 1;
		num2 = num2 / 2;
	}
	for (i--; i >= 0; i--)
	{
		printf("%d",a[i]);
	}
	system("pause");
	return 0;
}
