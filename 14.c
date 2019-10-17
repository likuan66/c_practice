//利用条件运算符的嵌套来完成此题：学习成绩 >= 90分的同学用A表示，60 - 89分之间的用B表示，60分以下的用C表示。
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int result = 0;
	printf("请输入学生成绩：\n");
	scanf("%d", &result);

	if (result >= 90)
	{
		printf("A");
	}
	else if (result >= 60 && result <= 89)
	{
		printf("B");
	}
	else
	{
		printf("C");
	}
	system("pause");
	return 0;
}