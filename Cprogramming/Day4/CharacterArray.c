#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    char arr[size];

    printf("Enter Array Elements\n");

    for (int i = 0; i < size; i++)
    {
        scanf(" %c", &arr[i]);   // Space before %c ignores whitespace
    }

    printf("Array Elements Are:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%c\t", arr[i]);
    }

    printf("\n");

    return 0;
}
