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
 * puts2 - prints every other character of a string
 * @str: charachers to check from
 * Return: None
 */
void puts2(char *str)
{
	int len = _strlen(str);
	int start = 1;
	char ch = *str;

	_putchar(ch);
	/* increment ch */
	ch = *++str;

	while (start < len)
	{
		if (start % 2 == 0)
		{
			_putchar(ch);
		}
		ch = *++str;
		start++;
	}
	_putchar('\n');
}
