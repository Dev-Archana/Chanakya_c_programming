#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    float arr[size];
    printf("Enter Array Elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%f",&arr[i]);
    }
    printf("Array Elements Are:\n ");
    for(int i=0;i<size;i++)
    {
        printf("%.2f\t",arr[i]);
    }
    return 0;
}