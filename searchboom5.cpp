#include<game.h>
void game()
{
char board[ROW][COL];
InitBoard(board, ROW, COL);
DisplayBoard(board, ROW, COL);
char ret = 0;
while (1)
{
PlayerMove(board, ROW, COL);
DisplayBoard(board, ROW, COL);
ret = IsWin(board, ROW, COL);
if (ret != 'C')
{
 break;
}
ComputerMove(board, ROW, COL);
DisplayBoard(board, ROW, COL);
ret = IsWin(board, ROW, COL);
if (ret != 'C')
{
 break;
}
}
if (ret == '*')
{
printf("玩家赢\n");
}
else if (ret == '#')
{
printf("电脑赢\n");
}
else
{
printf("平局\n");
}
}

void menu()`
{
printf("******************************\n");
printf("*******     1.play      ******\n");
printf("*******     0.exit      ******\n");
printf("******************************\n");
}
int main()
{
int input = 0;
srand((unsigned int)time(NULL));
do
{
menu();
printf("请输入：\n");
scanf("%d", &input);
switch (input)
{
case 1:
 game();
 break;
case 0:
 printf("退出游戏\n");
 break;
default:
 printf("输入错误，请重新输入：\n");
 break;
}
} while (input);
return 0;
}
game.c:

#include "game.h"


void InitBoard(char board[ROW][COL], int row, int col)
{
int i = 0;
for (i = 0; i < row; i++)
{
int j = 0;
for (j = 0; j < col; j++)
{
 board[i][j] = ' ';
}
}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
int i = 0;
for (i = 0; i < row; i++)
{
int j = 0;
for (j = 0; j < col; j++)
{
 printf(" %c ",board[i][j]);
 if (j < col - 1)
 {
  printf("|");
 }
}
printf("\n");
if (i < row - 1)
{
 for (j = 0; j < col; j++)
 {
  printf("---");
  if (j < col - 1)
   printf("|");
 }
}
printf("\n");
}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
printf("玩家走：\n");
int i = 0;
int j = 0;
while (1)
{
printf("请输入坐标：\n");
scanf("%d%d", &i, &j);
if (i >= 1 && i <= row && j >= 1 && j <= col)
{
 if (board[i - 1][j - 1] == ' ')
 {
  board[i - 1][j - 1] = '*';
  break;
 }
 else
 {
  printf("坐标被占用,请重新输入\n");
 }
}
else
{
 printf("坐标超出范围\n");
}
}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
int i = 0;
int j = 0;
printf("电脑走：\n");
while (1)
{
i = rand() % row;
j = rand() % col;
if (board[i][j] == ' ')
{
 board[i][j] = '#';
 break;
}
}
}
int IsFull(char board[ROW][COL], int row, int col)
{
int i = 0;
int j = 0;
for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
 if (board[i][j] == ' ')
 {
  return 0;//棋盘没满
 }
}
}

return 1;//棋盘满了

}

char IsWin(char board[ROW][COL], int row, int col)
{
int i = 0;
//判断三行
for (i = 0; i < row; i++)
{
if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
{
 return  board[i][1];//
}
}

//判断三列
for (i = 0; i < col; i++)
{
if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
{
 return board[1][i];
}
}

//判断对角线
if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
{
return board[1][1];
}
if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
{
return board[1][1];
}

//判断平局
//如果棋盘满了返回1， 不满返回0
int ret = IsFull(board, row, col);
if (ret == 1)
{
return 'Q';
}

//继续
return 'C';
}
game.h:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
