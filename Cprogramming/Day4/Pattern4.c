/*
A
BB
CCC
DDDD
 WANT IT IN CHARCATER LOOPING
*/
#include <stdio.h>
int main() {
    for (char i = 'A'; i <= 'D'; i++) {
        for (char j = 'A'; j <= i; j++) {
            printf("%c", i);
        }
        printf("\n");
    }
    return 0;
}