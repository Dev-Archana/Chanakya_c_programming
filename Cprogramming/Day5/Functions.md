## Function 
function is a block of code that performs a specific task.
It is a reusable piece of code that can be called multiple times in a program. 
Functions help in breaking down complex problems into smaller, manageable parts.
Function will get executed when it is called in the program.

# Predefined Functions
main() - the entry point of a C program. Every C program must have a main function.
printf() - used to print output to the console.
scanf() - used to read input from the user.
string methods etc....

# Syntax of a function:
_without parameters:_
return_type function_name()
{
    //Statements
}

_with parameters:_
return_type function_name(parameters)
{
    //Statements
}

*Declared functions are not executed immediately. They are "saved for later use"*
*To call a function, write the function's name followed by two parentheses () and a semicolon*

# A function consist of two parts:

Declaration: the function's name, return type, and parameters (if any)
Definition: the body of the function (code to be executed)

# Math Functions
Math functions are pre-defined functions in C that perform mathematical operations. Some common math functions include:
- `sqrt()`: Calculates the square root of a number.
Example : sqrt(16) will return 4.

- `pow()`: Raises a number to a power.
Example : pow(2, 3) will return 8.

- `abs()`: Returns the absolute value of an integer.
Example : abs(-5) will return 5.

- `round()`: Rounds a floating-point number to the nearest integer.
Example : round(3.7) will return 4.

- `ceil()`: Rounds a floating-point number up to the nearest integer.
Example : ceil(3.2) will return 4.

- `floor()`: Rounds a floating-point number down to the nearest integer.
Example : floor(3.8) will return 3.



# Scope of a Variable
The scope of a variable refers to the region of the program where the variable is accessible. In C programming, there are two main types of variable scope:

1. **Local Scope**: A variable declared inside a function is said to have local scope. It can only be accessed within that function.
2. **Global Scope**: A variable declared outside all functions is said to have global scope. It can be accessed from any function in the program.

Coding Examples questions :
1. Write a function to calculate the factorial of a number.
2. Write a function to check if a number is prime or not.
3. Write a function to find the largest of three numbers.
4. Write a function to reverse a string.
5. Write a function to calculate the sum of an array of integers.
6. deposit and withdraw money from a bank account using functions.