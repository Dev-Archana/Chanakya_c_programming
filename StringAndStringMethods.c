
// Strings in C Programming

/*
 * 1. C does not have a built-in data type named "string".
 *
 * 2. A string in C is represented as an array of characters
 *    terminated by a special character called the null character ('\0').
 *
 * 3. The %s format specifier is provided by the C standard library
 *    (stdio.h) to read and print character arrays that represent strings.
 *    It does not mean that "string" is a built-in data type.
 *
 * 4. Since a string is implemented using an array of characters,
 *    it is called a derived data type.
 *
 * 5. Strings are enclosed in double quotes (" ").
 *
 *    Example:
 *        char name[] = "John";
 *
 *    Internally, it is stored as:
 *        {'J', 'o', 'h', 'n', '\0'}
 *
 * 6. Each character in a string can be accessed using its index.
 *
 *    Example:
 *        name[0] = 'J';
 *        name[1] = 'o';
 *
 * 7. Individual characters in a string can be modified using their index,
 *    provided the string is stored in a writable character array.
 *
 *    Example:
 *        name[0] = 'R';   // "John" becomes "Rohn"
 *
 * 8. String indexing starts from 0, just like arrays.
 *
 * 9. The last character of every C string is the null character ('\0'),
 *    which marks the end of the string.
 */


#include <stdio.h>
#include<string.h>
int main()
{
    char str[]="Hello World";
    printf("%s\n",str);
    // method -2 to create an string 
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", greetings);
    printf("Length of the string %d\n",strlen(str)); //print length of the string
    printf("length of string including the null character :%d",sizeof(str));
    // string concatination 
    char c1[10]="Hello",c2[10]=" Sahana";
    // String Copy
    char s2[10];
    strcpy(s2,c1);
    printf("\n%s",s2);
    // string comparision
    printf("\n%d", strcmp(c1, c2));
    return 0;
}
