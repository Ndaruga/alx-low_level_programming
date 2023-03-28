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
 * rev_string - reverse a string
 * @s: characters in the string to be reversed
 * Return: None
 */

void rev_string(char *s)
{
	int j = (_strlen(s) - 1);
	int i = 0;
	char temp;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++, j--;
	}
}
