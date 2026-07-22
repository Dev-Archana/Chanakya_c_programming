#include <stdio.h>

int main()
{
    printf("+ for addition\n- for subtraction\n* for multiplication\n/ for division");
    printf("\nEnter Your Choice");
    char ch;
    scanf("%c",&ch);
    int num1,num2;
    switch(ch){
        case '+':
        printf("Enter Two Numbers\n");
        scanf("%d%d",&num1,&num2);
        printf("%d",num1+num2);
        break;
        case '-':
        printf("Enter Two Numbers\n");
        scanf("%d%d",&num1,&num2);
        printf("%d",num1-num2);
        break;
        case '*':
        printf("Enter Two Numbers\n");
        scanf("%d%d",&num1,&num2);
        printf("%d",num1*num2);
        break;
        case '/':
        printf("Enter Two Numbers\n");
        scanf("%d%d",&num1,&num2);
        printf("%d",num1/num2);
        break;
        default:
        printf("Invalid Choice\n");
    }
    return 0;
}