#include "main.h"
#include "stdio.h"

/**
 * _strlen_recursion - returns the lengh of a string
 * @s: sring to be calc'd its length
 * Return: length of the stritng s
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}
