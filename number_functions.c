#include "main.h"

/**
 * print_int - print integer values
 *
 * @n: the integer to be printed
 *
 * Return: the length of the number
 */
int print_int(va_list n)
{
	int len, num, mult, count;
	unsigned int n_copy, x;

	num = va_arg(n, int);
	mult = 1;
	count = 1;

	if (num < 0)
	{
		_putchar('-');
		x = num * -1;
		n_copy = x;
	}
	else
	{
		x = num;
		n_copy = num;
	}
	while (n_copy >= 10)
	{
		n_copy /= 10;
		mult *= 10;
		count++;
	}
	if (num < 0)
		len = count + 1;
	while (count > 1)
	{
		if ((x / mult) < 10)
		{
			_putchar((x / mult) + '0');
		}
		else
		{
			_putchar(((x / mult) % 10) + '0');
		}
		count--;
		mult /= 10;
	}
	return (len);
}

/**
 * print_bin - prints a binary number
 *
 * @binum: the binary number
 *
 * Return: length
 */
int print_bin(va_list binum)
{
	int num = va_arg(binum, int);

	return (num);
}
