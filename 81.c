//大小端的判断
#include<stdio.h>
#include<Windows.h>
int main()
{

	char c;
	int a = 2;
	int *p = &a;
	c = *p;
	if (c == a)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	system("pause");
	return 0;
}