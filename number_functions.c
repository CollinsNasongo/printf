#include "main.h"

/**
 * print_int - print integer values
 * @n: the integer to be printed
 *
 * Return: the length of the number
 */
int print_int(va_list n)
{
	int num = va_arg(n, int), nn = 0, i = 1, d = 1, j;
	unsigned int m = num;
	unsigned int b = num;

	if (num >= 0 && num <= 9)
		_putchar('0' + num);
	else if (num < 0 && num >= -9)
	{
		num = -num;
		i++;
		_putchar('-');
		_putchar('0' + num);
	}
	else
	{
		if (num <= -10)
		{
			num = -num, nn = 1;
			_putchar('-');
			b = num;
			m = num;
		}
		while (m >= 10)
		{
			m = m / 10;
			i++;
		}
		for (j = i; j > 1; j--)
			d = d * 10;
		for (j = 1; j <= i; j++)
		{
			m = b / d;
			b = b - (m * d);
			d = d / 10;
			_putchar('0' + m);
		}
	}
	if (nn == 1)
		return (i + 1);
	return (i);
}

/**
 * print_bin - transform integer to binary
 *
 * @binum: number to print
 *
 * Return: length of the number
 */
int print_bin(va_list binum)
{
	unsigned int n = va_arg(binum, int);
	unsigned int y = n;
	int r, i, j, len = 0;
	char *ptr;

	if (n < 1)
	{
		_putchar('0' + 0);
		return (1);
	}
	for (j = 0; y > 0; j++)
		y = y / 2;
	ptr = malloc(sizeof(char) * j);
	if (ptr == NULL)
		return (-1);
	for (i = 0; n > 0; i++)
	{
		r = n % 2;
		n = n / 2;
		ptr[i] = r;
		len++;
	}
	for (; i > 0; i--)
		_putchar('0' + ptr[i - 1]);
	free(ptr);
	return (len);
}
