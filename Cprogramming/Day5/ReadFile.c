#include <stdio.h>
int main()
{
    FILE *ptr;
    char str[100];
    ptr = fopen("text1.txt", "r");
    if (ptr == NULL)
    {
        printf("File does not exist.\n");
        return 1;
    }
    fgets(str, sizeof(str), ptr);
    printf("Content: %s", str);
    fclose(ptr);
    return 0;
}