//十六进制转十进制
#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)
void exchange1(int n)
{
	char arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'A', 'B', 'C', 'D', 'E', 'F' };
	char arr1[10];
	int i = 0;
	while(n > 0)
	{
		arr1[i] = arr[n % 16];
		i++;
		n /= 16;
	}
	for (i--; i >= 0; i--)
	{
		printf("%c", arr1[i]);
	}
}

void exchange2(char arr[])
{ 
		char str[10];
		int len = 0;
		int i = 0;
		int sum = 0;
		gets(str);
		len = strlen(str);

		for (i = 0; i < len; i++)
		{
			if (str[len - 1 - i] >= 'A' && str[len - 1 - i] <= 'F')
			{
				sum += (str[len - 1 - i] - 'A' + 10) * pow(16, i);
			}
			else if (str[len - 1 - i] >= '0' && str[len - 1 - i] <= '9')
			{
				sum += (str[len - 1 - i] - '0') * pow(16, i);
			}
		}
		printf("%d\n", sum);
}
int main()
{
	int num1;
	printf("请输入一位十进制数\n");
	scanf_s("%d", &num1);
	exchange1(num1);

	char arr[10];
	printf("请输入一位十六进制数\n");
	getchar(arr);
	exchange2(arr);

	system("pause");
	return 0;
}