#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string characters to be printed in reverse
 * Return: None
 */

void print_rev(char *s)
{
	char ch;
	int len = _strlen(s);

	for (ch = '\0'; ch <= len; ch = *++s)
		_putchar(ch);
	_putchar('\n');
}
