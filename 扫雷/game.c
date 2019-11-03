#include "game.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	memset(mine, '0', sizeof(mine));//初始化数组置为0
	memset(show, '*', sizeof(show));//初始化数组置为*
	int no_y, no_x;
	set_mine(mine,ROWS,COLS,&no_x,&no_y);//布雷  ‘1’表示雷
	int x = 0;
	int y = 0;
	int time = 100 - NUM;
	
	while (time > 0)
	{
		system("cls");//清屏
		Show(show, ROWS, COLS);//打印 棋盘
		printf("请输入坐标：\n");
		scanf("%d%d", &x, &y);
		if (x<1 || x>10 || y<1 || y>10)
		{
			printf("你输入有误，请重新输入：\n");
			continue;
		}
		if (show[x][y] != '*')
		{
			printf("你输入有误，请重新输入：\n");
			continue;
		}
		if (mine[x][y] == '1')
		{
			if (time == 80)//如果第一次有雷，用一个没雷的与这个交换
			{
				mine[x][y] = '0';
				mine[no_y][no_y] = '1';
			}
			else
			{
				printf("game over!\n");
				Show(mine, ROWS, COLS);
				break;
			}
		}
		show[x][y] = get_mine_count(mine, x, y) + '0';
		Expand(mine, show, x, y);
		time--;
	}


}
void set_mine(char mine[ROWS][COLS],int col,int row,int *no_x,int *no_y)//声明布雷函数
{
	int count = NUM;//设置计数器，统计布雷的个数

	while (count > 0)
	{
		int x = rand() % (col-2) + 1;
		int y = rand() % (col-2) + 1;
		if ((mine[x][y]) == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; i <= 10; j++)
		{
			if (mine[i][j] == '0')
			{
				no_x = i;
				no_y = j;
				return;
			}
		}
	}
}
void Show(char mine[ROWS][COLS], int row, int col)//声明打印棋盘函数
{
	int i = 0;
	int j = 0;
	printf("    ");
	for (i = 1; i <= 10 ; i++)
	{
		printf("%2d |", i);
	}
	printf("\n");
	for (i = 1; i <= 11; i++)
	{
		printf("----");
	}
	printf("\n");
	for (i = 1; i <= 10 ; i++)
	{
		printf("%2d |", i);
		for (j = 1; j <= 10; j++)
		{
			printf("%2c |", mine[i][j]);
		}
		printf("\n");
		for (int i = 1; i <= 11; i++)
		{
			printf("----");
		}
		printf("\n");
	}

}
int get_mine_count(char mine[ROWS][COLS], int x, int y)//雷数统计
{
	return mine[x - 1][y - 1]+ mine[x][y - 1] + mine[x + 1][y - 1]+ mine[x + 1][y]\
		+ mine[x + 1][y + 1]+ mine[x][y + 1] + mine[x - 1][y + 1]+ mine[x - 1][y] - 8 * '0';
}

void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (x >= 1 && x <= 10 && y >= 1 && y <= 10)
	{
		if (get_mine_count(mine, x, y) + '0' == '0')  //表示x，y周围没雷
		{
			show[x][y] = '0';
			if (show[x - 1][y - 1] == '*')
			{
				Expand(mine, show, x - 1, y - 1);
			}
			if (show[x - 1][y] == '*')
			{
				Expand(mine, show, x - 1, y );
			}
			if (show[x - 1][y + 1] == '*')
			{
				Expand(mine, show, x - 1, y + 1);
			}
			if (show[x ][y - 1] == '*')
			{
				Expand(mine, show, x , y - 1);
			}
			if (show[x][y + 1] == '*')
			{
				Expand(mine, show, x , y + 1);
			}
			if (show[x + 1][y - 1] == '*')
			{
				Expand(mine, show, x + 1, y - 1);
			}
			if (show[x + 1][y] == '*')
			{
				Expand(mine, show, x + 1, y );
			}
			if (show[x + 1][y + 1] == '*')
			{
				Expand(mine, show, x + 1, y + 1);
			}
		}
	}
}
