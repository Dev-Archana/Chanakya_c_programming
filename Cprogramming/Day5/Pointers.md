# Pointers
A pointer is a variable that stores the memory address of another variable as its value.
- If you are storing an integer variable, then the pointer will store the address of that integer variable.
- Pointers are used to store the address of variables and to manipulate data stored in memory.
- to access address of a variable, we use the address-of operator (&).
- pointers allow us to manipulate the data in the computer's memory.

**Syntax of a pointer:**

data_type *pointer_name;

**use**
Creating Data Structures
_Pointers are essential for implementing:_
Linked Lists
Stacks
Queues
Trees
Graphs

| Use                    | Example                  |
| ---------------------- | ------------------------ |
| Access variable        | `*ptr`                   |
| Modify variable        | `*ptr = 50;`             |
| Function arguments     | `swap(&a, &b);`          |
| Array traversal        | `*(ptr+i)`               |
| Dynamic memory         | `malloc()`, `free()`     |
| Data structures        | Linked List, Tree, Queue |
| Return multiple values | Pointer parameters       |
| String handling        | `char *str`              |


**double pointer**
pointer that points to another pointer. [a pointer that stores the address of another pointer.]

Syntax :
int **pptr = &ptr;
