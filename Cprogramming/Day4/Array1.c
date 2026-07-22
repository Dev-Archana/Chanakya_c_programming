#include<stdio.h>
int main(){
    // // Access Array Elements
    // printf("Array Element: %d\n",arr[0]);
    // // Update Array Elements 
    // arr[0]=100;
    // printf("Array Element: %d\n",arr[0]);
    int a;
    printf("int data type size :%d\n",sizeof(a));
    float a1;
    printf("Float Data Type Size:%d\n",sizeof(a1));
    char a2;
    printf("char Data Type Size:%d\n",sizeof(a2));
    double a3;
    printf("double Data Type Size:%d\n",sizeof(a3));
    int arr[]={1,2,3,4};
    printf("Array size: %d\n",sizeof(arr)/sizeof(arr[0]));
    return 0;
}