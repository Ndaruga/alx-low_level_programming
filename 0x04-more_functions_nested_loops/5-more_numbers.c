#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: none
 */

void more_numbers(void)
{
	int i;
	int iter;

	for (iter = 0; iter < 10; iter++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				i = '1'+(i % 10);
			}
			else
				_putchar(i);	
		}
		_putchar('\n');
	}
}
