#include<stdio.h>
int main()
{
    int age=10;
    // pointer
    int* ptr=&age;
    printf("%p\n",ptr);
    int *ptr1=&age;
    printf("%d\n",*ptr1);
    printf("%d",sizeof(ptr));
    return 0;
}