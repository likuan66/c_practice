//递归和非递归分别实现strlen
//#include<stdio.h>
//#include<Windows.h>
//
//int strlen(char *str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "likuan";
//	
//	printf("%d", strlen(str));
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<Windows.h>

int strlen(char *str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + strlen(str+1);
	}
}
int main()
{
	char str[] = "likuan";

	printf("%d", strlen(str));
	system("pause");
	return 0;
}