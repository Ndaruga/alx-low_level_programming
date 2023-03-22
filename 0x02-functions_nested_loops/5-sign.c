#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 * @n: integer to check
 * Return: 1 & print + if > 0, 0 & print 0 if 0, -1 & print - if < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
