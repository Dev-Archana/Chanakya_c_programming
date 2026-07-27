
#include <stdio.h>
struct Book{
    char bookID;
    char bookName[20];
    char authorName[20];
    float price;
};
int main()
{
    struct Book b1={'A',"BookName","AuthorName",200};
    printf("\n%d",sizeof(b1));
    return 0;
}
    // printf("BookID: %c\nBook Name: %s\nAuthor Name: %s\nPrice: %.2f",b1.bookID,b1.bookName,b1.authorName,b1.price);