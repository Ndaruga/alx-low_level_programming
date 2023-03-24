#include "main.h"

/**
 * print_most_numbers - numbers, from 0 to 9, without 2 &4.
 * Return: none
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
