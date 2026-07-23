#include<stdio.h>
int main()
{
    int a=2;
    char b='Z';
    int *a1=&a;
    char *b1=&b;
    printf("a=%d and size of the pointer %d\n",a,sizeof(a1));
    printf("a=%c and size of the pointer %d",b,sizeof(b1));
    return 0;
}