//猜数字游戏
#include<stdio.h>
#include<Windows.h>
#include<time.h>
void menu()
{
	printf("#####################\n");
	printf("##      1.play     ##\n");
	printf("###     0.exit     ##\n");
	printf("#####################\n");
}
void game()
{
	int i = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("请输入你要猜的数：\n");
		scanf_s("%d", &i);
		if (ret > i)
		{
			printf("你猜小了！\n");
		}
		else if (ret < i)
		{
			printf("你猜大了！\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//生成随机数
	do
	{
		menu();
		printf("请选择：\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束！\n");
			break;
		default :
			printf("输入有误!请重新输入：\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}