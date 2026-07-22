#include<stdio.h>
int main(){
    int n1=5;
    int flag=0;
    for(int k=2;k<n1;k++)
    {
        if(n1%k==0){
          flag++;
        }
    }
    if(flag==0){
        printf("Prime Number:%d\n",n1);
    }else{
        printf("Not a Prime Number:%d\n",n1);
    }
    return 0;
}