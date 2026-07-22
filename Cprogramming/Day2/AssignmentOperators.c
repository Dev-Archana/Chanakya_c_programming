#include<stdio.h>
int main(){
    int m1=5;
    // m1=m1+1;
    m1+=1;
    printf("%d\n",m1);
    m1-=2;
    printf("%d\n",m1);
    m1*=2;
    printf("%d\n",m1);
    m1/=m1;
    printf("%d\n",m1);
    m1%=m1;
    printf("%d\n",m1);
    return 0;
}