#include "main.h"

/**
 * print_line -draw a straight line
 * @n: number of times to print the _
 * Return: none
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/**
		 * @i: looping variable
		 */
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
