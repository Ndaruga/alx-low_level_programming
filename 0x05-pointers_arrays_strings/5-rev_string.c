#include "main.h"

/**
 * rev_string - reverse a string
 * @s: characters in the string to be reversed
 * Return: None
 */

void rev_string(char *s)
{
	int count = 0;
	char i = *s;

	while (i != '\0')
	{
		i = *++s;
		count++;
	}

	i = *--s;

	while (count > 0)
	{
	       _putchar(i);
	       i = *--s;
	       count--;
	}
	_putchar('\n');
}
