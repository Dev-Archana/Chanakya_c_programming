#include <stdio.h>
void palindrome(int num)
{
    int original, reverse = 0, rem;
    original = num;
    while (num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    if (original == reverse)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is not a Palindrome number.\n", original);
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    palindrome(number);
    return 0;
}