
#include <stdio.h>

int main()
{
    int a=9;
    int *ptr=&a;
    int **ptr1=&ptr;
    printf("%p\t%p",ptr,ptr1);
    return 0;
}