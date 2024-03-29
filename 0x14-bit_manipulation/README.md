0x14. C - Bit manipulation

General Requirements

Allowed editors: vi, vim, emacs

All your files will be compiled on Ubuntu 20.04 LTS using gcc,
using the options -Wall -Werror -Wextra -pedantic -std=gnu89

All your files should end with a new line

A README.md file, at the root of the folder of the project is mandatory

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

You are not allowed to use global variables

No more than 5 functions per file

The only C standard library functions allowed are malloc, free and exit.
Any use of functions like printf, puts, calloc, realloc etc… is forbidden

You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file.
If you do it won’t be taken into account

In the following examples, the main.c files are shown as examples.
You can use them to test your functions, but you don’t have to push them to your repo
(if you do we won’t take them into account). We will use our own main.c files at compilation.
Our main.c files might be different from the one shown in the examples

The prototypes of all your functions and the prototype of the
function _putchar should be included in your header file called main.h
Don’t forget to push your header file
All your header files should be include guarded

FILES			PROTOTYPE
0-binary_to_uint.c	int _putchar(char c);
1-print_binary.c	unsigned int binary_to_uint(const char *b);
2-get_bit.c		void print_binary(unsigned long int n);
3-set_bit.c		int get_bit(unsigned long int n, unsigned int index);
4-clear_bit.c		int set_bit(unsigned long int *n, unsigned int index);
5-flip_bits.c		int clear_bit(unsigned long int *n, unsigned int index);
100-get_endianness.c	unsigned int flip_bits(unsigned long int n, unsigned long int m);
101-password		int get_endianness(void);

TASKS
0. 0
Write a function that converts a binary number to an unsigned int.

1. 1
Write a function that prints the binary representation of a number.

2. 10
Write a function that returns the value of a bit at a given index.

3. 11
Write a function that sets the value of a bit to 1 at a given index.

4. 100
Write a function that sets the value of a bit to 0 at a given index.

5. 101
Write a function that returns the number of bits you would need to flip to get from one number to another.

6 Endianness
 Write a function that checks the endianness.

7. Crackme3
Find the password for this program.
