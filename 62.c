//实现strstr()

#include<stdio.h>
#include<Windows.h>


const char *my_strstr(const char *str, const char *sub_str)
{
	int i = 0;

	while (str[i++] != '\0')
	{
		int tem = i; //tem保留主串中的起始判断下标位置   
		int j = 0;
		while (str[i++] == sub_str[j++])
		{
			if (sub_str[j] == '\0')
			{
				return &str[tem];
			}
		}
		i = tem;
	}
	return NULL;
}

int main()
{
	char *arr = "1233345hello";
	char *brr = "345";
	printf("%s\n", my_strstr(arr, brr));
	system("pause");
	return 0;
}
