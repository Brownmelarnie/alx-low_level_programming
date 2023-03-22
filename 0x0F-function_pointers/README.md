C - Function pointers
0.Write a function that prints a name.
1.Write a function that executes a function given as a parameter on each element of an array.
2.Write a function that searches for an integer.
3.Write a program that performs simple operations.
4.Write a program that prints the opcodes of its own main function.

3-calc.h
This file should contain all the function prototypes and data structures used by the program.
You can use this structure

3-op_functions.c
This file should contain the 5 following functions (not more):
op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);

3-get_op_func.c
This file should contain the function that selects the correct function
to perform the operation asked by the user.You’re not allowed to declare any other function.
Prototype: int (*get_op_func(char *s))(int, int);
where s is the operator passed as argument to the program
This function returns a pointer to the function that corresponds to the operator given as a parameter.
Example: get_op_func("+") should return a pointer to the function op_add
You are not allowed to use switch statements
You are not allowed to use for or do ... while loops
You are not allowed to use goto
You are not allowed to use else
You are not allowed to use more than one if statement in your code
You are not allowed to use more than one while loop in your code
If s does not match any of the 5 expected operators (+, -, *, /, %), return NULL
You are only allowed to declare these two variables in this function:

3-main.c
This file should contain your main function only.
You are not allowed to code any other function than main in this file
You are not allowed to directly call op_add, op_sub, op_mul, op_div or op_mod from the main function
You have to use atoi to convert arguments to int
You are not allowed to use any kind of loop -
You are allowed to use a maximum of 3 if statements
