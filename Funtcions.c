/******************************************************************************
Function In c :

inline function :
An inline function is a small function that asks the compiler to insert its code directly where it is called, instead of jumping to it.
example:
inline int square(int x) {
  return x * x;
}

Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

*******************************************************************************/

#include <stdio.h>
static inline void sumOfTwo(){
    printf("%d",2+4);
}
int main()
{
    printf("Hello World\n");
sumOfTwo();
    return 0;
}
