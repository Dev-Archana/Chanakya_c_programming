#include<stdio.h>
int main(){
    int num1;
    printf("Enter Number\n");
    scanf("%d",&num1);
    int fact=1;
    for(int i=1;i<=num1;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %d",num1,fact);
    return 0;
}