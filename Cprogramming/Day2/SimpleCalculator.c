#include<stdio.h>
int main(){
int num1,num2;
char c;
printf("Enter Your Choice:");
scanf("%c",&c);
printf("Enter Two Numbers\n");
scanf("%d%d",&num1,&num2);
if(c=='+'){
    printf("Addition Of Two Numbers :%d",num1+num2);
}else if(c=='-'){
    printf("Subtraction Of Two Numbers :%d",num1-num2);
}else if(c=='*'){
    printf("Multiplication Of Two Numbers :%d",num1*num2);
}else if(c=='/'){
    printf("Division Of Two Numbers :%d",num1/num2);
}else{
    printf("Invalid Choice");
}
    return 0;
}