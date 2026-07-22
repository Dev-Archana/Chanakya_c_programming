// // check number is positive , negative or zero
// #include<stdio.h>
// int main(){
//     int num1;
//     printf("Enter Number\n");
//     if(num1>0){
//         printf("Given Number %d is positive ",num1);
//     }else if(num1<0){
//         printf("Given Number %d is Negative ",num1);  
//     }
//     else{
//         printf("given number is zero");
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter Any 3 Numbers\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        printf("Num1 is greater %d",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("Num2 is greater %d",num2);
    }else{
        printf("Num3 is greater %d",num3);
    }
}