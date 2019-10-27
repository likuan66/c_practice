//如果一个渔夫从 2011 年 1 月 1 日开始每三天打一次渔，两天晒一次网，编程实现当输入 2011 1 月 1 日以后的任意一天，输出该渔夫是在打渔还是在晒网。
#include<stdio.h>
#include<Windows.h>

int Isleap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int sum(int year, int mounth, int day)
{
	int sum = 0;
	int i = 2011;
	for (i = 2011; i < year; i++)
	{
		if (Isleap(i))
		{
			sum += 366;
		}
		else
		{
			sum += 365;
		}
	}
	int array[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	for (int i = 0; i < mounth; i++)
	{
		sum += array[i];
	}
	sum += day;

	if (Isleap(year) && (mounth > 2))
	{
		sum += 1;
	}
	return sum;
}
int main()
{

	int year, mounth, day;
	printf("请输入年月日：\n");
	scanf_s("%d%d%d", &year, &mounth, &day);
	int n = 0;
	n = sum(year, mounth, day);
	if (n % 5<4 && n % 5 > 0)
	{
		printf("在打鱼\n");
	}
	else
	{
		printf("晒网\n");
	}

	system("pause");
	return 0;
}