**User defined datatypes in c**
- group several related variables into one place.
- Each variable in the structure is known as a member of the structure.

Syntax :
struct Student{
    int rollNumber;
    char section;
}

- create variable of the struct 
struct Student s1;

- use of structure 
s1.rollnumber

# sizeof(s1)
- compiler adds padding at the end so that the structure size is a multiple of the largest member's alignment.
- the compiler adds padding at the end so that the structure size is a multiple of the largest member's alignment.

Largest member = int
Alignment required = 4 bytes

**Unions**
A union is similar to a struct in that it can store members of different data types.

However, there are some differences:

- In a struct, each member has its own memory.
- In a union, all members share the same memory, which means you can only use one of the values at a time.

- The size of a union will always be the same as the size of its largest member

**Use unions when:**
You need to store different types in the same location
You only use one type at a time
Saving memory is very important

**typedef**
- The typedef keyword lets you create a new name (an alias) for an existing type. This can make complex declarations easier to read, and your code easier to maintain.

Syntax: 
typedef datatype newname;

Example :
typedef int rollnum;

**Use of typedef:**
- Simplifies code: Shorter, easier-to-read type names.
- Improves clarity: Expresses intent better (for example, AGE instead of just int). Also helps avoid confusion when many variables share the same base type (like float or double).
-we can use typedef with struct

*example* :
typedef struct {
  char brand[30];
  int year;
} Car;

*usage of typedef and struct together :*
struct Car c1={"BMW",2000};