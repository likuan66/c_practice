//Çó1 + 2!+ 3!+ ... + 20!µÄºÍ
#include<stdio.h>
#include<Windows.h>


int main()
{
	int sum = 0;
	int temp = 1;
	int i = 0;
	for (i = 1; i <= 20; i++)
	{
		temp *= i;
		sum += temp;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}