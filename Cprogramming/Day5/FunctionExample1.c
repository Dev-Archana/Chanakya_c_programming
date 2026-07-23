#include<stdio.h>
int add() // called Function
{
    printf("%d\n",2+3);
    printf("Add Function\n");
    return 0;
}
void printNumbers()
{
    for(int i=1;i<=10;i++)
    {
        printf("%d\t",i);
    }
}
int fact()
{
    int f=1;
    for(int i=1;i<=5;i++)
    {
        f*=i;
    }
    return f;
}
int main(){
    printf("Main Method\n");
    // add(); //calling Function 
    // printNumbers();
    printf("%d",fact());
    return 0;
}