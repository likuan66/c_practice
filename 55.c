//���Ŵ���ѧ�����������ġ��㾭���������һ�������ġ���Ǯ��ټ����⡱������һ��ֵǮ�壬��ĸһ��ֵǮ������������ֵǮһ����Ǯ��ټ������̡�ĸ���������Σ�
#include<stdio.h>
#include<windows.h>

int main()
{
	int i, j, k;
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			for (k = 0; k < 100; k++)
			{
				if (i * 5 + j * 3 + k / 3 == 100 && k % 3 == 0 && i + k + j == 100)
				{
					printf("����Ϊ%dֻ��ĸ��Ϊ%dֻ��С��Ϊ%dֻ\n", i, j, k);
				}
			}
		}
	}
	system("pause");
	return 0;
}