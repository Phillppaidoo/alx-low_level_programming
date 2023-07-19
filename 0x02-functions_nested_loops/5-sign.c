#include "main.h"

/**
 * print_sign - print integer
 * @n: print zero,  positive, or negative integer
 * Return: 1 if it's positive, 0 if it's negative and -1 if it's negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
