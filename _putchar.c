#include <unistd.h>
#include "main.h"

/**
 * _putchar - takes a character as a parameter and prints it
 *
 * Return: returns -1 when there is an error
 * returns 1 on success
 */
int _putchar(char value)
{
	return (write(1, &value, 1));
}
