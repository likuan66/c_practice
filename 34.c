/*��ӡ�����������  (Ҫ��:��ӡ��10������ͼ��
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1  */
/*#include<stdio.h>
#include<Windows.h>

int main()
{
	int arr[10][10];
	int i, j;
	arr[0][0] = 1;//��һ�е�һ��λ1
	for (i = 0; i < 10; i++)
	{
		arr[i][0] = 1;//ÿ�еĵ�һ��Ԫ��λ1
		for (j = 0; j < 10; j++)
		{
			if (j == 0)//�ж��ǲ���ÿ�еĵ�һ��Ԫ�أ��ǵĻ���Ϊ1
			{
				arr[i][j] = arr[0][0];
			}
			else if (i >= 1 && j >= 1 && i != j)//�ж��Ƿ����м�Ԫ�أ����ǵ�һ�в������һ��
			{
				arr[i][j] = arr[i - 1][j] + arr[i-1][j - 1];
			}
			else if (j == i)//�ж��Ƿ������һ��
			{
				arr[i][j] = arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
	
		for (j = 0; j <=i; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}*/
#include<stdio.h>
#include<Windows.h>
 int main()
{
	int i, j, a[11][11];        /*����i��j��a[11][11]Ϊ��������*/
	for (i = 1; i < 11; i++)     /*forѭ��i�ķ�Χ��1��10*/
	{

		a[i][i] = 1;         /*�Խ���Ԫ��ȫΪ1*/

		a[i][1] = 1;            /*ÿ�е�һ��Ԫ��ȫΪ1*/

	}
	for (i = 3; i < 11; i++)          /*forѭ����Χ�ӵ�3�п�ʼ����10��*/
	{
		for (j = 2; j <= i - 1; j++)      /*forѭ����Χ�ӵ�2�п�ʼ������������һ��Ϊֹ*/
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];  /*��i��j�е��ڵ�i-1��j-1�е�ֵ���ϵ�i-1��j�е�ֵ*/
		}
	}

	for (i = 1; i < 11; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%4d", a[i][j]);              /*ͨ����������forѭ������ά����a��Ԫ�����*/
		}
		printf("\n");                            /*ÿ�����һ�н���һ�λ���*/
	}
	system("pause");
	return 0;
}
