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
	va_list args;
	int (*fun)(va_list), len = 0, i;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '%')
			{
				fun = get_fun(format[i + 1]);
				if (fun == NULL)
				{
					write(1, &format[i], 1);
					len++;
				}
				else
				{
					len = len + fun(args);
					i++;
				}
			}
			else
			{
				write(1, &format[i], 1);
				len++;
				i++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			len++;
		}
	}
	va_end(args);
	return (len);
}
