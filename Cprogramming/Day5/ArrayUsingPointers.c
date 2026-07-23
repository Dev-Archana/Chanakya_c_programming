#include<stdio.h>
int main(){
    //pointers with arrays print the actual value for the given array
    int arr1[]={1,2,3,4};
    printf("%p",&(arr1)+2);

    // Print Array Elements using pointers
    int arr[]={1,2,3,4};
    // int *ptr=arr;
    // for(int i=0;i<4;i++)
    // {
    // printf("%d\n",*(ptr+i));
    // }
    return 0;
}