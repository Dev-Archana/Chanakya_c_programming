// // write a program to check whether a number is even or odd without using % operator
// #include<stdio.h>
// int main(){
//     int num1;
//     printf("Enter Number\n");
//     scanf("%d",&num1);
//     if(num1/2*2==num1){
//         printf("Given Number %d is Even",num1);
//     }else{
//         printf("Given Number %d is Odd",num1);
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    int num1;
    printf("Enter Number\n");
    scanf("%d",&num1);
    if(num1 & 1){
        printf("Given Number %d is Odd",num1);
    }else{
        printf("Given Number %d is Even",num1);
    }
    return 0;
}