//左旋字符串中的k个字符 
#include<stdio.h>
#include<assert.h>
#include<Windows.h>
#pragma warning(disable:4996)

char *left_reverse(char *dest, const char *src, int n)
{
	int i = 0;
	assert(src != NULL);
	assert(dest != NULL);
	char *start = src;
	while (*(src + n) != '\0')  //将不需要旋转的字符先放在dest中
	{
		*dest++ = *(src + n);
		src++;
	}
	for (i = 0; i < n; i++)  //再将需要旋转的放在dest中
	{
		*dest++ = *start++;
	}
	*dest = '\0';
	return dest;
}
int main()
{
	int n = 0;
	char q[20] = "0";
	char p[] = "abcdef";
	printf("%s\n", p);
	int len = sizeof(p) / sizeof(p[0])-1;
	while (1)
	{
		printf("请输入要旋转字符的个数：\n");
		scanf("%d", &n);
		if (n <= len)
		{
			left_reverse(q, p, n);
			break;
		}
		else
		{
			printf("你输入的字符串太长！\n");
		}
	}
	printf("%s\n", q);

	system("pause");
	return 0;
}