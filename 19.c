//一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
#include<stdio.h>
#include<Windows.h>

int main()
{
	double hight = 100;
	int i = 0;
	double sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum += 3 * hight / 2;
		hight = hight / 2;
	}
	printf("第十次落地时共经过%f米，第十次反弹的高度是%f\n",sum,hight);
	system("pause");
	return 0;
}