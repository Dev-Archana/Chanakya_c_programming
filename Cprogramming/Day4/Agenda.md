## Agenda
- Nested Loops

__Nested For Loop__
- A nested for loop is a loop inside another loop. The inner loop is executed one time for each iteration of the outer loop.

questions Based on Nested For Loop:
1. Write a program to print a pattern of stars using nested for loop.
a. 
****
****
****
****

b. 
*
**
***
****

c. 
****
***
**
*

d.
1
12
123
1234
12345

e. 
4321
432
43
4

f. 
*****
*   *
*   *
*   *
*****

**Arrays**
- An array is a collection of variables of the same type that are stored in contiguous memory locations.
- The size of an array must be a constant expression and cannot be changed during runtime.
- Array elements are accessed using an index, which starts from 0 and ends at the size of the array minus one.
- unlike other programming languages, C does not provide built-in bounds checking for arrays. It is the programmer's responsibility to ensure that they do not access elements outside the bounds of the array.

**Syntax**
data_type array_name[array_size];

Example:
```c
int numbers[5]; 
```

1. Write a program to create an array of integers and print the elements of the array using a for loop.

2. Write a program to create an array of characters and print the elements of the array using a for loop.
**Linear search**
- Linear search is a simple search algorithm that checks each element of an array sequentially until the desired element is found or the end of the array is reached.
3. Write a program to implement linear search on an array of integers and print the index of the element if found, or a message indicating that the element is not found.


4.multidimensional arrays
- A multidimensional array is an array of arrays. It can be thought of as a table with rows and columns. The most common type of multidimensional array is the two-dimensional array, which can be visualized as a matrix.

**Syntax**
data_type array_name[row_size][column_size];

Strings In C Programming 
Group of characters is called a string. In C programming, strings are represented as arrays of characters terminated by a null character '\0'.

char str[20]; 

String Methods:
1. strlen() - Returns the length of the string.
2. strcpy() - Copies one string to another.
3. strcat() - Concatenates two strings.
4. strcmp() - Compares two strings.
5. strlwr() - Converts a string to lowercase.
6. strupr() - Converts a string to uppercase.

scanf(" %[^\n]", str);   

