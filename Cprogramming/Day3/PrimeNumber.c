#include<stdio.h>
int main(){
    int num1=0;
    int ind=0;
    printf("Enter a number:");
    scanf("%d",&num1);
    if(num1<=1){
        printf("num1 :%d not prime number",num1);
    }
    else if(num1==2){
        printf("%d Even Prime Number\n",num1);
    }else{
        for(int i=2;i<num1;i++)
        {
            if(num1%i==0){
                ind++;
            }
        }
        if(ind==0){
            printf("given Number is prime number %d",num1);
        }else{
            printf("given Number is NOT prime number %d",num1);

        }
    }
    return 0;
}