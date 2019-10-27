//实现strcmp
#include<stdio.h>
#include<Windows.h>
#include<string.h>

int strcmp(char *str1, char *str2)
{
	if (str1 == NULL || str2 == NULL)
	{
		return -1;
	}
	while (*str1 == *str2&&*str1 != '\0'&&*str2 != '\0')
	{
		str1++;
		str2++;
	}
	if (*str1 == *str2)
	{
		return 0;     //用0表示零个字符串相等
	}
	else if (*str1>*str1)
	{
		return 1;     //用1表示*str1>*str2
	}
	else
	{
		return 2;      //用2表示*str1<*str2
	}
}
int main()
{
	char str1[] = "abcdefef";
	char str2[] = "scjsacnasnc";
	
	printf("用-1表示两个字符串都是空，用0表示零个字符串相等,用1表示*str1>*str2,用2表示*str1<*str2:\n");
	printf("%d\n", strcmp(str1, str2));
	system("pause");
	return 0;

}