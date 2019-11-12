/*题目 : 假如现手中有m(m<=24)个火柴棍，希望拼出A+B=C等式。等式中的A、B、C均为火柴棍拼出来的整数（若该数非0，则最高位不能为0）。
注意：
1、加号与等号各自需要2根火柴棍；
2、如果A不等于B，则A+B=C与B+A=C视为不同的等式（三者均大于0）；
3、所有根火柴棍必须全都用上。
思路：24根除去 '+' 和 '=' 4根还有20根，而数字1所需火柴棍最少，需2根。则三者中任一数不能超过1111。只需枚举A和B, C可以通过A和B计算。
A中火柴棍数加上B中火柴棍数等于C中火柴棍数，若恰好等于m-4的话，则成功找出一组解。
*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int fun(int n)
{
	int arr[] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };//用数组列出0-9每个数所需要的火柴个数
	int ret = 0;
	while (n / 10 != 0)  //判断n是不是2位数或者多位数
	{
		ret += arr[n % 10];//将个位数所需要的火柴数相加
		n /= 10;
	}
	ret += arr[n];//最后加上n需要的火柴个数（n为一位数）
	return ret;
}
int main()
{
	int i, j, k, num, count=0;
	printf("请输入火柴的个数：\n");
	scanf("%d", &num);
	for (i = 0; i <= 1111; i++)
	{
		for (j = 0; j <= 1111; j++)
		{
			k = i + j;
			if (fun(i) + fun(j) + fun(k) == num - 4)
			{
				printf("%d + % d = %d\n", i, j, k);
				count++;
			}

		}
	}
	printf("一共可以拼出%d个不同的等式!\n", count);
	system("pause");
	return 0;
}