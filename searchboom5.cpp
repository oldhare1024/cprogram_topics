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
printf("���Ӯ\n");
}
else if (ret == '#')
{
printf("����Ӯ\n");
}
else
{
printf("ƽ��\n");
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
printf("�����룺\n");
scanf("%d", &input);
switch (input)
{
case 1:
 game();
 break;
case 0:
 printf("�˳���Ϸ\n");
 break;
default:
 printf("����������������룺\n");
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
printf("����ߣ�\n");
int i = 0;
int j = 0;
while (1)
{
printf("���������꣺\n");
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
  printf("���걻ռ��,����������\n");
 }
}
else
{
 printf("���곬����Χ\n");
}
}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
int i = 0;
int j = 0;
printf("�����ߣ�\n");
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
  return 0;//����û��
 }
}
}

return 1;//��������

}

char IsWin(char board[ROW][COL], int row, int col)
{
int i = 0;
//�ж�����
for (i = 0; i < row; i++)
{
if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
{
 return  board[i][1];//
}
}

//�ж�����
for (i = 0; i < col; i++)
{
if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
{
 return board[1][i];
}
}

//�ж϶Խ���
if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
{
return board[1][1];
}
if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
{
return board[1][1];
}

//�ж�ƽ��
//����������˷���1�� ��������0
int ret = IsFull(board, row, col);
if (ret == 1)
{
return 'Q';
}

//����
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
