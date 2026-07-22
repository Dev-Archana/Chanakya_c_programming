#include<stdio.h>
int main(){
    char name[]="Hello World";
    printf("%s",name);
    // string methods code example
 char str1[20] = "Hello";
    char str2[20] = "World";

    // 1. strlen() - Length of string
    printf("Length: %d\n", strlen(str1));

    // 2. strcpy() - Copy string
    char copy[20];
    strcpy(copy, str1);
    printf("Copy: %s\n", copy);

    // 3. strcat() - Concatenate strings
    strcat(str1, str2);
    printf("Concatenated: %s\n", str1);

    // 4. strcmp() - Compare strings
    printf("Compare: %d\n", strcmp("Apple", "Apple"));

    // Convert to lowercase
    strlwr(str1);
    printf("Lowercase: %s\n", str1);
    // Convert to uppercase
    strupr(str2);
    printf("Uppercase: %s\n", str2);

    return 0;
}