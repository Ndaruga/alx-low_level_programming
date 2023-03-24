#include "main.h"

/**
 * print_trianle - print a triangle followed by a new line
 * Return: None
 */

void print_triangle(int size)
{
	int j;
	int iter;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (iter = 0; iter >= size; iter--)
		{
			for (j = 0; j > iter; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

