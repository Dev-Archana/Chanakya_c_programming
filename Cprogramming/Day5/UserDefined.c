#include<stdio.h>

int main()
{
    struct Student
    {
    char name[20];
    int rollnumber;
    char section;
    };
    struct Student s1={"Alice",203,'A'};
    printf("%s\n",s1.name);
    printf("%d",sizeof(s1));
    return 0;
}