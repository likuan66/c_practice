//编写一个函数reverse_string(char* string)（递归实现） 实现：将参数字符串中的字符反向排列。 要求：不能使用C函数库中 的字符串操作函数
#include<stdio.h>
#include<windows.h>

void reverse_string(char* string)
{
	if (*string == '\0')
	{
		printf("%c", *string);
	}
	else
	{
		reverse_string(++string);
		printf("%c", *(--string));
	}
	
}
int main()
{
	char string[] = "abcdefg";
	reverse_string(string);
	system("pause");
	return 0;
}