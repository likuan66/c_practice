//创建一个数组， 实现函数init（）初始化数组、 实现empty（）清空数组、 实现reverse（）函数完成数组元素的逆置。要求：自己设计函数的参数，返回值
#include<stdio.h>
#include<Windows.h>

void init(int array[],int length)//初始化数组
{
	int i, num;
	printf("初始化数组，请输入10个整数:\n");
	for (i = 0; i < length; i++)
	{
		scanf_s("%d", &num);
		array[i] = num;	
	}
}
void empty(int array[],int length)//清空数组
{
	int i = 0;
	printf("清空数组：\n");
	for (i = 0; i < length; i++)
	{
		array[i] = 0;
	}
	for (i = 0; i < length; i ++ )
	{
		printf("%d ", array[i]);
	}
}
void reverse(int array[], int length)//逆置数组
{
	int i, temp;
	printf("逆置数组：\n");
	for (i = 0; i < length/2; i++)
	{
		temp=array[i];
		array[i] = array[length - 1 - i];
		array[length - 1 - i] = temp;
	}
	for (i = 0; i < length; i++)
	{
		printf("%d ",array[i]);
	}
}
int main()
{
	int array[10] = { 0 };

	int length = sizeof(array) / sizeof(array[0]);
	init(array, length);
	
	reverse(array, length);
	printf("\n");
	empty(array, length);

	system("pause");
	return 0;
}