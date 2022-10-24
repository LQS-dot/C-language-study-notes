// #define ROW 3
// #define COL 3

// void InitBoard(int board[ROW][COL], int row, int col);
// void DisplayBoard(int board[ROW][COL], int row, int col);
// void UserPlay(int board[ROW][COL], int row, int col);
// void ComputerPlay(int board[ROW][COL], int row, int col);


#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void InitBorard(char board[ROW][COL], int row, int  col);
void DisplayBorard(char board[ROW][COL], int row, int  col);
void UserInsertBoard(char board[ROW][COL],int x,int y);
void CopInsertBoard(char board[ROW][COL],int x,int y);
int GetBoard(char board[ROW][COL],int row,int col);