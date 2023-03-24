#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: character to check
 * Return: None
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
			if (j == i)
				_putchar('\\');
		}
		_putchar('\n');
	}
}
