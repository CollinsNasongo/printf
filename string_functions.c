#include "main.h"

/**
 * print_str - a function that prints strings
 *
 * @str: the string
 *
 * Return: the length of the string
 */
int print_str(va_list str)
{
	char *s;
	char *n = "(null)";
	int idx = 0;

	s = va_arg(str, char *);
	if (!(s))
	{
		while (*n != '\0')
		{
			_putchar(*n);
			n++;
		}
		return (6);
	}

	while (s[idx] != '\0')
	{
		_putchar(s[idx]);
		idx++;
	}
	return (idx);
}

/**
 * print_char - prints characters
 *
 * @c: the character to be printed
 *
 * Return: the length
 */
int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
