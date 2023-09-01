#include<stdio.h>
#include<conio.h>
void printBoard();
int checkWin();
void system();
char board[]={'0','1','2','3','4','5','6','7','8','9'};
int main(){
    int player=1;
    int input;
    int status =-1;
    printBoard();
    
    while (status==-1)
    {   
        player=(player%2==0) ? 2 :s1;
        char mark=(player==1) ? 'X':'0';
        printf("Please enter Number for player %d ",player);
         scanf("%d",&input);
    if(input<1 || input >9){
        printf("invalid input");
    }
     board[input]=mark;
     printBoard();
     int result=checkWin();
     if(result==1){
        printf("Player %d is Winner",player);
        status =1;
        return 0;
     }
     else if(result==0){
        printf("draw");
        status=1;
        return 0;
     }
     player++;
    }
    
   
   

}
void printBoard(){
    system("cls");
    printf("*** TIC TAC TOE ***\n");
    printf("     |    |    \n",board[1],board[2],board[3]);
    printf(" %c   | %c  |  %c\n");
    printf(" ____|____|____\n");
    printf("     |    |    \n");
    printf("  %c  | %c  |  %c\n",board[4],board[5],board[6]);
    printf(" ____|____|____\n");
    printf("     |    |    \n");
    printf("  %c  | %c  |  %c\n",board[7],board[8],board[9]);
    printf("     |    |    \n");
}
int checkWin(){
    if(board[1]==board[2] && board[2]==board[3]){
        return 1;
    }
     if(board[4]==board[5] && board[5]==board[6]){
        return 1;
    }
     if(board[7]==board[8] && board[8]==board[9]){
        return 1;
    }
     if(board[1]==board[4] && board[4]==board[7]){
        return 1;
    }
     if(board[2]==board[5] && board[5]==board[8]){
        return 1;
    }
     if(board[3]==board[6] && board[6]==board[9]){
        return 1;
    }
     if(board[1]==board[5] && board[5]==board[9]){
        return 1;
    }
     if(board[3]==board[5] && board[5]==board[7]){
        return 1;
    }
    int i;
    int count;
    for(i=1;i<=9;i++){
        if(board[i]=='X'||board[i]=='0'){
            count++;
        }

    }
    if(count==9){
return 0;
    }
    return -1;
}