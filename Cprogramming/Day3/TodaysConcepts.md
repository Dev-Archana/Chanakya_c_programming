## Switch Statement
- Instead of writing many if..else statements, you can use the switch statement.
- The switch statement selects one of many code blocks to be executed:

_Syntax_

```c
switch (expression) {
    case x:
        // statements
        break;
    case y:
        // statements
        break;
    default:
        // statements
}
```
### Question: 
1. Write a program to print the name of the day based on the number entered by the user (1 for Monday, 2 for Tuesday, etc.) using switch statement.

2. Write a program to print the name of the month based on the number entered by the user (1 for January, 2 for February, etc.) using switch statement.

3. Write a program to print the name of the color based on the number entered by the user (1 for Red, 2 for Blue, etc.) using switch statement.

4. Write a program to print the name of the fruit based on the number entered by the user (1 for Apple, 2 for Banana, etc.) using switch statement.

//Simple Calculator using switch statement
5. Write a program to perform addition, subtraction, multiplication, and division based on the operator entered by the user (+ for addition, - for subtraction, * for multiplication, / for division) using switch statement.

//students grade using switch statement
6. Write a program to print the grade of a student based on the marks entered by the user 
(A for marks >= 90, B for marks >= 80, C for marks >= 70, D for marks >= 60, F for marks < 60) 
using switch statement.

## Looping Control Statements

Loops can execute a block of code as long as a specified condition is true.

## 1. For Loop
The for loop is used when the number of iterations is known. It repeats a block of code a specified number of times:

_Syntax_

```c
for (initialization; condition; increment/decrement) {
    // statements
}

## Note: The initialization, condition, and increment/decrement can be omitted in the for loop. However, the semicolons are mandatory.

Questions Based on For Loop:
1. Write a program to print the first 10 natural numbers using for loop.
2. Write a program to print the first 10 even numbers using for loop.
3. Write a program to print the first 10 odd numbers using for loop.
4. Write a program to print the first 10 prime numbers using for loop.
5. Write a program to print the multiplication table of a number entered by the user using for loop.
6. Write a program to calculate the factorial of a number entered by the user using for loop.

7. Write a program to check whether a number entered by the user is prime or not using for loop.


## 2. While Loop
The while loop repeats a block of code as long as a specified condition is true:

_Syntax_

```c
while (condition) {
    // statements
}
```

## 3. Do While Loop

```c
do {
    // statements
} while (condition);

Example:
int n=1;
do{
    printf("Hello world\n");
    n++;
}while(n>1);
```