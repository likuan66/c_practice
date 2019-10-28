//实现strcat

#include<stdio.h>
#include<Windows.h>
#include<assert.h>
#pragma warning(disable:4996)
char *strcat(char *str1, const char *str2)
{
	assert(str1 != NULL&&str2!=NULL);
	char *temp = str1;
	while (*temp != '\0')
	{
		temp++;
	}
	while ((*temp++ = *str2++) != '\0');//将字符串中str2中的字符复制到str1中
	return str1;
}
int main()
{
	char str1[20] = "abc";
	char str2[] = "efg";
	char *str3 = strcat(str1, str2);
	printf("str1=%s\n", str1);
	printf("str2=%s\n", str2);
	printf("str3=%s\n", str3);

	system("pause");
	return 0;

}