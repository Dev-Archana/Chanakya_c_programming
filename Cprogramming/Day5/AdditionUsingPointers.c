#include <stdio.h>

int main() {
    // int res = *a1 + *b1;
    // printf("Sum = %d\n", res);
    
    
    int a, b;
    printf("Enter two integer values:\n");
    scanf("%d %d", &a, &b);
    int *a1 = &a;
    int *b1 = &b;
    if (*a1 > *b1) {
        printf("%d is greater.\n", *a1);
    } else if (*b1 > *a1) {
        printf("%d is greater.\n", *b1);
    } else {
        printf("Both numbers are equal.\n");
    }
    return 0;
}