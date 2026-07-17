/******************************************************************************
Structures, unions, enum and basic dynamic memory allocation

Structures can be created using the keyword "struct".
Each element in a structure is called a member.
A structure can contain members of different data types.

Syntax:
    struct StructureName
    {
        data_type member1;
        data_type member2;
    };
- In a struct, each member has its own memory.




Unions :
A union is similar to a struct in that it can store members of different data types.
In a union, all members share the same memory, which means you can only use one of the values at a time.\



typedef :
The typedef keyword lets you create a new name (an alias) for an existing type. This can make complex declarations easier to read, and your code easier to maintain.

For example : 

typedef float Temperature;
  Temperature today = 25.5;
  Temperature tomorrow = 18.6;
  
Use :
Simplifies code
Improves clarity


Structure Padding :
When you create a struct in C, the compiler may add some extra bytes of padding between members.
s is done to make the program run faster on your computer, because most CPUs read data more efficiently when it's properly aligned in memory.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

struct Employee
{
    int empID;
    char name[20];
};
struct Owner {
  char firstName[30];
  char lastName[30];
};

struct Car {
  char brand[30];
  int year;
  struct Owner owner; // Nested structure
};

int main()
{
    struct Employee e1;

    e1.empID = 1;
    strcpy(e1.name, "Ananya");

    printf("%d, %s\n", e1.empID, e1.name);
    struct Employee e2={2,"Nayana"};
    printf("%d, %s", e2.empID, e2.name);
    
    
    // Nested structure call 
     struct Owner person = {"John", "Doe"};
  struct Car car1 = {"Toyota", 2010, person};

  printf("Car: %s (%d)\n", car1.brand, car1.year);
  printf("Owner: %s %s\n", car1.owner.firstName, car1.owner.lastName);

  return 0;

}
