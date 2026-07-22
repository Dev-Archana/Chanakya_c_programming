#include<stdio.h>
int main(){
    int temp;
    printf("Enter Temperature");
    scanf("%d",&temp);
    int isSummer;
    printf("Enter Summer details\n");
    scanf("%d",&isSummer);
    if((isSummer==0 && temp>=60 &&temp<=90)
    || (isSummer==1 && temp>=60 &&temp<=100)){
        printf("squirrels will play");
    }else{
        printf("squirrels will Not play");
    }
}