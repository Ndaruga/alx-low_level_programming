#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: cahracter to check for
 * Return: 1 if c is alphabetic 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'z' || c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
