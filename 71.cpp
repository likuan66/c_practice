//整数m与n二进制中有多少个bit位不同
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{

	int m, n;
	printf("请输入两位整数：\n");
	scanf("%d%d", &m, &n);
	int count = 0;
	int ret = m^n;//异或相同为0，不同为1；
	while (ret)
	{
		ret = ret&(ret - 1);
		count++;
	}
	printf("%d", count);
	system("pause");
	return 0;
}