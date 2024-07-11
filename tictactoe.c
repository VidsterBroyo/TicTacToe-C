#include "tictactoe.h"

char board[] = "0 1 2 3\n1 - - -\n2 - - -\n3 - - -";
char player = 'X';

void main(){
    while(1){
        printf("\n\n%s", board);
        gamePlay();

        checkWinner();
        if(player == 'X'){
            player = 'O';
        }
        else{
            player='X';
        }
        
    }

}


void gamePlay(){
    int x;
    int y;
    int flag = 0;

    printf("\n\n%c's turn!", player);

    do{
        if(flag > 0){
            printf("\nThat spot is taken. Try again");
        }

        printf("\nx: ");
        scanf("%d", &x);

        printf("y: ");
        scanf("%d", &y);

        flag++;
    }
    while(board[y*8+x*2] != '-');


    board[y*8+x*2] = player;
}

void createBanner(){
    printf("\n***********************\n");
}

void printWinner(){
    printf("\n\n%s", board);
    createBanner();
    printf("!!PLAYER %c IS THE WINNER!!", player);
    createBanner();
    exit(0);
}

void checkWinner(){

    for(int index=2; index<=6; index+=2){
        if(board[index+8] == player && board[index+16] == player && board[index+24] == player){
            printWinner();
            break;
        }
    }

    for(int index=8; index<=24; index+=8){
        if(board[index+2] == player && board[index+4] == player && board[index+6] == player){
            printWinner();
            break;
        }
    }

}




void drawBoard(int size){
    for(int i=0; i<size; i++){
        printf("%d ", i);
    }

    for(int i=0; i<size-1; i++){
        printf("\n%d ", i+1);

        for(int j=0; j<size-1; j++){
            printf("- ");
        }

    }
}