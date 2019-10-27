// µœ÷strcpy

#include<stdio.h>
#include<Windows.h>
#include<assert.h>
#pragma warning(disable:4996)
char* MyStrcpy(char* q, const char* p)

{
	assert(q != NULL);
	assert(p != NULL);
	char* res = q;
	while ((*res++ = *p++) != '\0');
	return q;
}


int main()
{
	char str1[] = "abcdefg";
	char str2[20];
	printf("%s\n", MyStrcpy(str2, str1));

	system("pause");
	return 0;
}