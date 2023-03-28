#include "main.h"

/**
 * _puts - function that prints a string,
 * followed by a new line, to stdout
 * @str: sring to print on standard output
 * Return: None
 */

void _puts(char *str)
{
	char ch;

	for (ch = *str; ch != '\0'; ch = *++str)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
