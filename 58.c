//ÊµÏÖstrlen 
#include<stdio.h>
#include<Windows.h>
#include<assert.h>

int strlen(const char *string)
{
	assert(string != NULL);
	int count = 0;
	if (*string == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + strlen(string + 1);
	}
}
int main()
{
	char string[] = "abcdefg";
	
	printf("%d\n", strlen(string));
	system("pause");
	return 0;
}