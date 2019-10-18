//求s = a + aa + aaa + aaaa + aa...a的值，其中a是一个数字。例如2 + 22 + 222 + 2222 + 22222(此时共有5个数相加)，几个数相加有键盘控制。
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int main()
{
	int a ,num;
	int sum = 0;
	int temp = 0;
	printf("请输一位需要求的整数，再输入一位需要几个数相加的数：\n");
	scanf("%d%d", &a,&num);
	int i = 0;
	for (i = 0; i <num; i++)
	{

		temp = temp * 10 + a;
		sum += temp;
		

	}
	printf("%d", sum);
	system("pause");
	return 0;

}