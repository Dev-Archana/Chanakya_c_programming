/*
Write a program to print the grade of a student based on the marks entered by the user 
(A for marks >= 90, B for marks >= 80, C for marks >= 70, D for marks >= 60, F for marks < 60) 
using switch statement.
*/
#include<stdio.h>
int main(){
    int marks;
    printf("Enter Marks\n");
    scanf("%d",&marks);
    switch(marks/10){
        case 10:
        case 9:printf("Grade A\n");
                break;
        case 8:printf("Grade B\n");
                break;
        case 7:printf("Grade C\n");
                break;
        case 6:printf("Grade D\n");
                break;
        default:printf("Grade F\n");
    }
    return 0;
}