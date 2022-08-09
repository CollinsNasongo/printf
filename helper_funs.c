#include "main.h"

/**
 * get_fun - determines the required printing function
 *
 * @fmt: format specifier
 *
 * Return: pointer to the right function
 */
int (*get_fun(char fmt))(va_list)
{
	int i;
	print_op print_ops[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{NULL, NULL}
	};

	for (i = 0; print_ops[i].symbol; i++)
	{
		if (fmt == *(print_ops[i].symbol))
			return (print_ops[i].print);
	}
	return (NULL);
}
