#include<stdio.h>
int main()
{
    int d=0;
    int n=1234;
    while(n>0){
        int rem=n%10;
        d++;
        n=n/10;
    }
    printf("%d",d);
    return 0;
}