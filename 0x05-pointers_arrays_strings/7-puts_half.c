#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: Characters to count
 * Return: count integer
 */

int _strlen(char *s)
{
	int count = 0;
	char i;

	for (i = *s; i != '\0'; i = *++s)
	{
		count++;
	}
	return (count);
}


/**
 * puts_half - pritns second half of a string
 * @str: character array
 * Return: None
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int start;

	if (len % 2 != 0)
		start = ((len - 1) / 2) + 1;
	else
		start = len / 2;

	while (start < len)
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
