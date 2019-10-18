//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

#include<stdio.h>
#include<Windows.h>


int main()
{
	char m ;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	printf("请输入一行字符:");
	m = getchar();
	while (m != '\n')
	{
		if (m >= 'a'&&m <= 'z' || m >= 'A'&&m <= 'Z')
		{
			a++;
		}
		else if (m >= '0'&&m <= '9')
		{
			b++;
		}
		else if (m == ' ')
		{
			c++;
		}
		else
		{
			d++;
		}
		m = getchar();
	}
	printf("英文字母有%d个,数字个数有%d个,空格的个数有%d个,其他字符的个数有%d个\n", a, b, c, d);
	system("pause");
	return 0;
}