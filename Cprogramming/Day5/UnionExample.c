#include <stdio.h>

union Book {
    char bookID;
    char bookName[20];
    char authorName[20];
    float price;
};

int main() {
    union Book b1 = {.price = 200.0};
    printf("Size of union: %d bytes\n", sizeof(b1));
    printf("Price: %.2f\n", b1.price);

    return 0;
}