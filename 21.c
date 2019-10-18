/*两个乒乓球队进行比赛，各出三人。甲队为a, b, c三人，乙队为x, y, z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。
a说他不和x比，c说他不和x, z比，请编程序找出*/
#include<stdio.h>
#include<Windows.h>

int main()
{
	char A;
	char B;
	char C;
	char str;
	for (str = 'x'; str <= 'z'; str++)
	{
		if (str != 'x'&&str != 'z')
		{
			C = str;
		}
	}
	for (str = 'x'; str <= 'z'; str++)
	{
		if (str != 'x'&& str!=C)
		{
			A = str;
		}
	}
	
	for (str = 'x'; str <= 'z'; str++)
	{
		if (str != A && str != C)
		{
			B=str;
		}
	}
	printf("A的对手是%c\n", A);
	printf("B的对手是%c\n", B);
	printf("C的对手是%c\n", C);
	
	system("pause");
	return 0;

}