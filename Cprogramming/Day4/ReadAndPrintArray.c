#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("Enter Array Elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array Elements Are:\n ");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}