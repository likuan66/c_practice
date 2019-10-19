/*有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。
问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？*/
#include<stdio.h>
#include<Windows.h>

int main()
{
	int i;
	for (i =1; i <=5; i++)
	{
		printf("第%d个人的年龄是%d \n", i, 10 + 2 * (i - 1));
	}
	system("pause");
	return 0;
}