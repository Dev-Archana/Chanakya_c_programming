#include <stdio.h>

int main() {
    printf("+ for addition\n");
    printf("- for subtraction\n");
    printf("* for multiplication\n");
    printf("/ for division\n");
    printf("Enter Your Choice: ");
    char ch;
    scanf(" %c", &ch);
    int num1, num2;
    switch (ch) {
        case '+':
            printf("Enter Two Numbers\n");
            scanf("%d %d", &num1, &num2);
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("Enter Two Numbers\n");
            scanf("%d %d", &num1, &num2);
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("Enter Two Numbers\n");
            scanf("%d %d", &num1, &num2);
            printf("%d\n", num1 * num2);
            break;
        case '/':
            printf("Enter Two Numbers\n");
            scanf("%d %d", &num1, &num2);
            if (num2 != 0) {
                printf("%d\n", num1 / num2);
            } else {
                printf("Cannot divide by zero\n");
            }
            break;
        default:
            printf("Invalid Choice\n");
    }

    return 0;
}