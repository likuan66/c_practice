//八进制与二进制相互转
#include<stdio.h>
#include<windows.h>
#include<math.h>

int exchange1(int n)
{
	int sum = 0;
	int m = 0;
	int i = 0;
	while (n > 0)
	{
		m = n % 1000;
		n /= 1000;
		sum += (m % 10 * 1 + m / 10 % 10 * 2 + m / 100 * 4)*pow(10, i);
		i++;
	}
	return sum;
}
int exchange2(int n)
{
	int sum = 0;
	int i = 0;
	int total = 0;
	while (n > 0)
	{
		sum += (n % 10) * pow(8, i++);
		n /= 10;
	}
	i = 0;
	while (sum > 0)
	{
		total += (sum % 2) * pow(10, i++);
		sum /= 2;
	}
	return total;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("请输入一位2进制数\n");
	scanf_s("%d", &num1);
	printf("%d", exchange1(num1));

	printf("请输入一位8进制数\n");
	scanf_s("%d", &num2);
	printf("%d", exchange2(num2));

	system("pause");
	return 0;
}

