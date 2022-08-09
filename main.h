#ifndef MAIN_H 
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char value);
int print_char(va_list c);
int print_str(va_list str);
int print_int(va_list n);
int print_bin(va_list binum);

/**
 * struct printer - struct defining a printer
 *
 * @symbol: Data type symbol
 * @print: the function that prints the data type
 */
typedef struct printer
{
	char *symbol;
	int (*print)(va_list arg);
} print_op;

#endif /*MAIN_H*/
