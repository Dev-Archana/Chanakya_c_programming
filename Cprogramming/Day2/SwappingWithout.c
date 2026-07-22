// Swapping of two numbers without third variable
#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;

    printf("orginal a = %d\n",a);
    printf("orginal b = %d\n",b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("swapped a =%d\n",a);
    printf("swapped b =%d\n",b);
    return 0;
}