//输入一个字母判断是星期几，如首字符相同，判断第二个字母
#include<stdio.h>
#include<Windows.h>
#include<conio.h>
int main()
{
	char ch;
	printf("请输入第一个字母：\n");
	while ((ch = _getche()) != 0)
	{
		printf("\n");
		switch (ch)
		{
		case 'M':
		case 'm':
			printf("Monday\n");
			break;
		case 'T':
		case 't':
			printf("请输入第二个子母:\n");
			if ((ch == _getche()) == 'u' || ch == 'U')
			{
					printf("\nTuesday\n");
			 }
			else if (ch == 'h' || ch == 'H')
			{
					printf("\nThursday\n");
			 }
			else
			{
					printf("输入错误!");
			 }
			break;
		case 'W':
		case 'w':
			printf("Wednesday\n");
			break;
		case 'F':
		case 'f':
			printf("Friday\n");
			break;
		case 'S':
		case 's':
			printf("请输入第二个字母\n");
			if ((ch = _getche()) == 'a' || ch == 'A')
			{
					printf("\nSaturday\n");
			 }
			else if (ch == 'U' || ch == 'u')
			{
					printf("\nSunday\n");
			 }
			else
			{
					printf("输入错误!\n");
			 }
			break;
		default:

			break;
		}
	}
	system("pause");
	return 0;
}