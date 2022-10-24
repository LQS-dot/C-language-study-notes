// #include <stdio.h>
// #include <stdlib.h>
// #include "game.h"

// void InitBoard(int board[ROW][COL], int row, int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             board[i][j] = ' ';
//         }
//     }
// }

// void DisplayBoard(int board[ROW][COL], int row, int col){
//     for ( int i = 0; i < row; i++)
//     {
//         /* code */
//         if(i == 0){
//             for(int j = 0;j<col;j++){
//                 printf("---");
//                 if(j < col -1){
//                     printf("--");
//                 }
//             }
//             printf("\n");
//         }
//         for (int j = 0;j < col;j++){
//             if(j == 0){
//                 printf("|");
//                 printf(" %c ",board[i][j]);
//             }else{
//                 printf(" %c ",board[i][j]);
//             }
//             // if (j < col - 1){
//                 printf("|");
//             // }
//         }
//         printf("\n");
//         if (i < row -1){
//             for(int j = 0;j<col;j++){
//                 if(j == 0){
//                     printf("|---");
//                 }else{
//                     printf("---");
//                 }
//                 // if (j < col -1){
//                  printf("|");
//                 // }
//             }
//             printf("\n");
//         }
//         if(i == row - 1){
//             for(int j = 0;j<col;j++){
//                 printf("---");
//                 if(j < col -1){
//                     printf("--");
//                 }
//             }
//         }
//     }
//     printf("\n");
// }

// void UserPlay(int board[ROW][COL], int row, int col){
//     int x,y;
//     printf("玩家走:\n");

//     while (1)
//     {
//         /* code */
//         printf("请输入坐标>");
//         scanf("%d%d",&x,&y);
//         if(x >= 1 && x <=row && y >= 1 && y <= col){
//             if( board[x-1][y-1] == ' ' ){
//                 board[x-1][y-1] = 'x';
//                 break;
//             }else{
//                 printf("坐标已存在棋子,请重新输入\n");
//             }
//         }else{
//             printf("坐标有误，请重新输入\n");
//         }
//     }
// }

// void ComputerPlay(int board[ROW][COL], int row, int col){
//     int x,y = 0;
//     printf("电脑走\n");
//     while (1)
//     {
//         /* code */
//         x = rand() % row;
//         y = rand() % col;
//         if ( board[x][y] == ' ' ){
//             board[x][y] = '#';
//             break;
//         }        
//     }
    
// }


#include "game.h"


void InitBorard(char board[ROW][COL], int row, int  col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            board[i][j] = ' ';
        }
    }
}

void DisplayBorard(char board[ROW][COL], int row, int  col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf(" %c ",board[i][j]);
            if(j < col -1){
                printf("|");
            }
        }
        printf("\n");

        if (i < row -1){        
            for(int j=0;j<col;j++){
                printf("---");
                if(j<col -1){
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}

void UserInsertBoard(char board[ROW][COL],int x,int y){
    printf("请玩家输入坐标>");
    while (1)
    {
        /* code */
        char ch;

        scanf("%d %d",&x,&y);
        if(x > 0 && x < ROW +1 && y > 0 && y < ROW +1){
            if (board[x-1][y-1] == ' '){
                board[x-1][y-1] = 'x';
                break;
            }else{
                printf("坐标已有棋子,请重新选择>");
            }
        }else{
            printf("坐标错误,请重新输入>");
        }

        while((ch=getchar()) != '\n'){
            ;
        }
    }
}

void CopInsertBoard(char board[ROW][COL],int x,int y){
    printf("电脑下棋\n");
    while(1){
        int x = rand() % ROW;
        int y = rand() % COL;
        if(board[x][y] == ' '){
            board[x][y] = '#';
            break;
        }
    }
}

int GetBoard(char board[ROW][COL],int row,int col){
    // 查询是否有赢家 
    /*
        int 1 电脑赢
        int 2 玩家赢
        int 3 继续
        int 0 平局

        横三
        纵三
        斜三
    */
   // 横纵三
    for(int i=0;i < row;i++){    
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' '){
            if (board[i][i] == '#'){
                return 1;
            }else{
                return 2;
            }
        }

        if(board[0][i] == board[1][i] && board[2][i] == board[0][i] && board[0][i] != ' '){
            if (board[0][i] == '#'){
                return 1;
            }else{
                return 2;
            }            
        }
    }

    //斜三
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' '){
        if (board[0][0] == '#'){
            return 1;
        }else{
            return 2;
        }       
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' '){
        if (board[0][2] == '#'){
            return 1;
        }else{
            return 2;
        }       
    }

    // 是否继续
    for(int i=0;i < row;i++){
        for(int j=0;j < col;j++){
            if(board[i][j] == ' '){
                return 3;
            }
        }
    }
    return 0;
}