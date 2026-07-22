#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter String: ");
    scanf("%s", str);

    printf("Original String: %s\n", str);
    printf("Length of Given String: %zu\n", strlen(str));

    // String Copy
    char s[100];
    strcpy(s, str);
    printf("Copied String: %s\n", s);

    // String Concatenation
    char str2[] = " World";
    strcat(str, str2);
    printf("Concatenated String: %s\n", str);

    // String Compare
    int result = strcmp(str, s);
    printf("Comparison Result: %d\n", result);

    // string Reverse
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed String: %s\n", str);
    // string lowercase and uppercase
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert to lowercase
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase
        }
    }
    printf("Modified String: %s\n", str);

    // character lower and upper case
    char ch;
    printf("Enter Character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("Lowercase of %c: %c\n", ch, ch + 32);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Uppercase of %c: %c\n", ch, ch - 32);
    } else {
        printf("%c is not an alphabet character.\n", ch);
    }

    // list of string methods and there respective examples 
    printf("\nList of String Methods and Examples:\n");
    printf("1. strlen() - Returns the length of the string.\n");
    printf("2. strcpy() - Copies one string to another.\n");
    printf("3. strcat() - Concatenates two strings.\n");
    printf("4. strcmp() - Compares two strings.\n");
    printf("5. strrev() - Reverses a string.\n");
    printf("6. strlwr() - Converts a string to lowercase.\n");
    printf("7. strupr() - Converts a string to uppercase.\n");
    // Example for each string method can be added here
    char exampleStr[] = "Hello";
    printf("\nExample for strlen(): Length of '%s' is %zu\n", exampleStr, strlen(exampleStr));
    char copyStr[100];
    strcpy(copyStr, exampleStr);
    printf("Example for strcpy(): Copied string is '%s'\n", copyStr);
    char concatStr[100] = "Hello";
    strcat(concatStr, " World");
    printf("Example for strcat(): Concatenated string is '%s'\n", concatStr);
    int cmpResult = strcmp("Hello", "World");
    printf("Example for strcmp(): Comparison result of 'Hello' and 'World' is %d\n", cmpResult);
    // Example for strrev() - Reverses a string
    char revStr[] = "Hello";
    printf("Example for strrev(): Reversed string of '%s' is '%s'\n", revStr, strrev(revStr));
    // Example for strlwr() - Converts a string to lowercase
    char lowerStr[] = "HELLO";
    printf("Example for strlwr(): Lowercase of '%s' is '%s'\n", lowerStr, strlwr(lowerStr));
    // Example for strupr() - Converts a string to uppercase
    char upperStr[] = "hello";
    printf("Example for strupr(): Uppercase of '%s' is '%s'\n", upperStr, strupr(upperStr));

    return 0;
}