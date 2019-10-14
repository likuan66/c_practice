//输入某年某月某日，判断这一天是这一年的第几天？
#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int main()
{

	int year, month, day;
	int sum = 0;
	printf("请输入年月日：\n");
	scanf("%d%d%d", &year, &month, &day);

	switch (month)
	{
	case 1:sum = 0;
		break;
	case 2:sum = 31;
		break;
	case 3:sum = 31 + 28;
		break;
	case 4:sum = 31 + 28 + 31;
		break;
	case 5:sum = 31 + 28 + 31 + 30;
		break;
	case 6:sum = 31 + 28 + 31 + 30 + 31;
		break;
	case 7:sum = 31 + 28 + 31 + 30 + 31 + 30;
		break;
	case 8:sum = 31 + 28 + 31 + 30 + 31 + 30 + 31;
		break;
	case 9:sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
		break;
	case 10:sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		break;
	case 11:sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		break;
	case 12:sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		break;
	default:
		break;
	}
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		if (month >= 2)
		{
			sum++;
		}
	}
	sum += day;
	printf("%d\n", sum);
	system("pause");
	return 0;
}

