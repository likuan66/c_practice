#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#include<time.h>
#include<string.h>


#define ROWS 12
#define COLS 12
#define NUM 20 //À×µÄ¸öÊý

void game();
void set_mine(char mine[ROWS][COLS],int row, int col, int *no_x, int *no_y);
void Show(char mine[ROWS][COLS], int row, int col);
int get_mine_count(char mine[ROWS][COLS], int x, int y);
void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);

#endif