#include<stdio.h>
int main(){
    int a=10;int *a1=&a;
    int b=20;int *b1=&b;
    printf("%d\t%d",a,b);
    int temp;
    temp=*a1;
    *a1=*b1;
    *b1=temp;
    printf("%d\t%d",a,b);
    return 0;
}