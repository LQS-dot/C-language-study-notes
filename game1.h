#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ThCount 10

#define ROWS ROW + 2
#define COLS COL + 2

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisBoard(char board[ROWS][COLS], int row, int col);
void SetThunder(char board[ROWS][COLS],int row,int col);
void CheckThunder(char board[ROWS][COLS],char board_dis[ROWS][COLS],int row,int col);