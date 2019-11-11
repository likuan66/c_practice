//小程序版
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#pragma warning(disable:4996)
char s[10100], ss[10100];
int a[10100], b[10100];
int len;

void Add()     //自定义函数"jia"
{
	int l1 = strlen(s);     //"strlen"是一个计算字符串长度的函数 
	int l2 = strlen(ss);    //将输入的两个字符串的长度赋值给l1,l2
	if (l1 > l2)
		len = l1;      //将len赋值为l1,l2中大的那个 
	else
		len = l2;
	//		for (int i = 0 ; i <= len ; i++)  //清零（这里for循环和下面三句memset都为将字符串清零 ） 
	//			a[i] = b[i] = c[i] = 0;
	memset(a, 0, sizeof(a));    //清零too(只能清零，不能干别的) 
	memset(b, 0, sizeof(b));    //这是清零函数（字符串） 
	//两个for循环是将输入的两个字符串倒过来
	for (int i = l1 - 1; i >= 0; i--)    //再将字符串里的字符转换为数字赋值给a,b整型数组 
		a[l1 - i - 1] = s[i] - '0';        //但为什么大数要用字符串存呢？
	for (int i = l2 - 1; i >= 0; i--)    //因为大数太大，用任何整型变量都存不下 
		b[l2 - i - 1] = ss[i] - '0';       //为什么要把字符串倒过来赋值呢？ 
	//因为大数与大数是一位一位运算的，还要涉及进位等 
	for (int i = 0; i < len; i++)
	{
		a[i] = a[i] + b[i];    //运算 
		a[i + 1] += a[i] / 10;    //如有进位，在后一位上加上 
		a[i] = a[i] % 10;      //原来那一位减掉进位了的 
	}
	if (a[len] != 0) len++;    //如果有进位就多显示一位（这句话很重要） 
	for (int i = len - 1; i >= 0; i--)  //输出结果 
		printf("%d", a[i]);
	printf("\n");
}                              //高精度加法你懂了吗？

int main()
{
	printf("高精度加法(By STY)\n\n");
	printf("退出请按“Ctrl+Z”(在键盘上)，并按回车，谢谢使用！\n");
	printf("请输入两个数字：\n");
	printf("数字：(用空格隔开)\n");
	while (scanf("%s%s", s, ss) != EOF)
	{
		printf("\n结果：\n");
		Add();     //引用高精度加法函数
		printf("\n\n");
		printf("高精度加法(By STY)\n\n");
		printf("退出请按“Ctrl+Z”(在键盘上)，并按回车，谢谢使用！\n");
		printf("请输入两个数字：\n");
		printf("数字：(用空格隔开)\n");
	}
	return 0;
}
