
// Arrays in C Programming
// Read a simple array and print its values.

/*
 * 1. An array can store only elements of the same data type.
 *
 * 2. In C, there is no built-in function to find the size of an array.
 *    You can calculate it using:
 *
 *        int size = sizeof(arr) / sizeof(arr[0]);
 *
 *    Note: This works only for arrays declared in the same scope,
 *    not for arrays passed as function parameters.
 *
 * 3. Arrays have a fixed size. Once an array is declared, its size
 *    cannot be changed during program execution.
 *
 *    - To use a different fixed size, modify the declaration and
 *      recompile the program.
 *    - To create arrays whose size can change at runtime, use
 *      dynamic memory allocation (malloc(), calloc(), realloc()).
 *
 * 4. Array indexing starts from 0.
 *
 * 5. If an array contains n elements:
 *      - First index = 0
 *      - Last index  = n - 1
 *
 * 6. Arrays are index-based, which means you can access, update,
 *    and print elements using their index values.
 */


#include <stdio.h>
int linearSearch(int arr[],int n,int key);
int binarySearch(int arr[],int n , int key);
int main()
{
    int n,arr[10];
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter Array Elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // printf("Array Elements are\n");
    // for(int i=0;i<n;i++){
    //     printf("%d\t",arr[i]);
    // }
    int key;
    printf("Enter Key Value That You Want to find\n");
    scanf("%d",&key);
    printf("Index Number : %d",binarySearch(arr,n,key));
    return 0;
}

// Liner Search Using Simple Array
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

// Binary Search : Sorted Array Is Manditory
int binarySearch(int arr[],int n , int key){
    int l=0,h=n-1;
    int mid=0;
    while(l<h){
     mid=(l+h)/2;
        if(arr[mid]>key){
            h=mid-1;
        }else if(arr[mid]<key){
            l=mid+1;
        }
        else if(arr[mid]==key){
            return mid;
        }
    }
    return -1;
}




