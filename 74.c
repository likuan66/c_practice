//翻转

#include<stdio.h>
#include<Windows.h>
#include<string.h>

void reverse(char *str)
{
	char *p = str + strlen(str) - 1;//最后一个字符的地址
	char temp;
	while (str < p)
	{
		temp = *str;
		*str++ = *p;
		*p-- = temp;
		
	}
}
int main()
{
	char str[30] = "abcdsef";
	printf("翻转前：%s\n", str);
	reverse(str);
	printf("翻转后：%s\n", str);
	system("pause");
	return 0;
}