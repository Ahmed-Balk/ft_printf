# ft_printf()

This project involves reimplementing the printf() fucntion in C by creating ft_printf().
This task provides an opportunity to explore variadic functions and enhance programming skills.

The goal is to create a library named libftprintf.a, which inculdes the ft_printf() function capable of handling various conversions such as characters, strings, pointers, integres, and more.
The implementation does not require replication the original printf()'s buffer management system.

It's a funny project to improve my skills in C.

## Format specifiers Reference

- `%c`: Prints a single character.
- `%s`: Prints a string (as defined by the common C convention).
- `%p`: Prints a void * pointer argument in hexadecimal format.
- `%d`: Prints a decimal (base 10) number.
- `%i`: Prints an integer in base 10.
- `%u`: Prints an unsigned decimal (base 10) number.
- `%x`: Prints a number in hexadecimal (base 16) lowercase format.
- `%X`: Prints a number in hexadecimal (base 16) uppercase format.
- `%%`: Prints a percent sign.

## Demonstration 

### create a main.c

#### Example of main.c

'''bash
#include "ft_printf.h"

int main()
{
	ft_printf("Hello world number %d !\n", 5);
}
'''

#### Output 

'''bash
$> make
$> gcc main.c libftprintf.a
$> ./a.out
Hello world number 5 !

$>

'''
