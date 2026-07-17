/**
 * in c programming we have a important concept called as pointers 
 * A pointer is a variable that stores the memory address of another variable as its value.
 * int* ptr = &myAge; => pointer creation
 * format Specifier to print pointer : %p
 * unsigened int : %zu
 * 
 * 
 * Double Pointer :
 *  pointer that points to another pointer This is called a pointer to pointer
 *  A pointer to pointer stores the address of another pointer.
    *ptr gives the value of a variable.
    **pptr gives the same value by following two levels of indirection.
    They can be useful when passing pointers to functions or working with complex data structures.

 * */
 
#include <stdio.h>

int main()
{
    //printing array eleents using pointer 
    int myNumbers[4] = {25, 50, 75, 100};
    int *p = myNumbers;  // points to myNumbers[0]  
    printf("%d\n", *p);      
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));
    printf("%d\n", *(p + 3)); 
    
    return 0;
}
