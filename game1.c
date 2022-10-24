#include "game1.h"


void InitBoard(char board[ROWS][COLS], int rows, int cols, char set){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            board[i][j] = set;
        }
    }
}

void DisBoard(char board[ROWS][COLS], int row, int col){
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
}

void SetThunder(char board[ROWS][COLS],int row,int col){
    int count = ThCount;

    while (count)
    {
        /* code */
        int x = rand() % row + 1;
        int y = rand() % col + 1;

        if(board[x][y] == '0'){
            board[x][y] = '1';
            count--;
        }
    }
}

int GetCount(char board[ROWS][COLS], int x,int y){
    return  board[x-1][y] - '0' +
            board[x-1][y-1] - '0' +
            board[x-1][y+1] - '0' +
            board[x][y-1] - '0' +
            board[x][y+1] - '0' +
            board[x+1][y-1] - '0' +
            board[x+1][y] - '0' +
            board[x+1][y+1] -'0';
}

void CheckThunder(char board[ROWS][COLS],char board_dis[ROWS][COLS],int row,int col){
    int x = 0;
    int y = 0;
    int guess_times = ROW * COL - ThCount;
    int times = 0;
    char ch;
    while (1)
    {
        /* code */
        printf("请输入坐标:>");
        scanf("%d%d",&x,&y);
        if (x >= 1 && x <=9 && y >=1 && y<=9){
            if (board[x][y] == '1'){
                printf("很遗憾，你被炸死了\n");
                break;
            }else{
                int count = GetCount(board, x, y);
                board_dis[x][y] = count + '0';
                DisBoard(board_dis, ROW, COL);
                times++;
            }
        }else{
            printf("坐标错误,");
        }
        if(times == guess_times){
            printf("恭喜你，成功了\n");
        }

        while((ch=getchar()) != '\n'){
            ;
        }
    }
    
}