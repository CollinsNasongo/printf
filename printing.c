#include "main.h"

/**
 * _printf - prints an output based on a given format
 *
 * @format: the format of the string
 *
 * Return: length of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, len = 0;
	print_op print_ops[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{NULL, NULL}
	};
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;

				while (print_ops[j].symbol != NULL)
				{
					while (format[i] == ' ')
						i++;
					if (*(print_ops[j].symbol) == format[i])
					{
						len += print_ops[j].print(args);
						break;
					}
					if (format[i] == '%')
					{
						_putchar(format[i]);
						len++;
						break;
					}
					j++;
					if (print_ops[j].symbol == NULL)
					{
						if (format[--i] == ' ')
						{
							_putchar('%');
							_putchar(' ');
							len += 2;
						}
					}
				}
			}
			else
			{
				_putchar(format[i]);
				len++;
			}
			i++;
		}
	}
	return (len);
}
