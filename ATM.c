#include<stdio.h>
int main(){
    float x,y;
    char ch;
    printf("Enter initial amount\n");
    scanf("%f",&x);
    printf("Enter\nc for credit\nd for debit\nb for balance\n");
    scanf("\n%c",&ch);
    switch(ch){
        case 'c':
        printf("Enter credit amount\n");
        scanf("%f",&y);
        x=x+y;
        printf("New amount=%f",x);
        break;
        case 'd':
        printf("Enter debit amount\n");
        scanf("%f",&y);
        if(x>=y){
              x=x-y;  
        }
        else{
            printf("insufficient amount in account\n");
        }
    
        printf("New Amount=%f",x);
        break;
        case 'b':
        printf("balance=%f",x);
        break;
        default:
        printf("Invalid option\n");
        break;

    }

}