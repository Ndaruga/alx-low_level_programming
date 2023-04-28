#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: character to be printed
 * Return: None
*/

void _puts_recursion(char *s)
{
	/* check for null pointer as base condition*/
	if (*s == '\0')
		_putchar('\n');
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
