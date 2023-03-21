#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets 10 times
 * Return : none 
 */

void print_alphabet_x10(void)
{
	int iter;
	char alpha;

	for (iter = 0; iter <= 10; iter++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}

