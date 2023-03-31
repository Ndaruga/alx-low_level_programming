#include "main.h"
#include "stdio.h"

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
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: None
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int i = _strlen(dest);

	for (j = 0; src[j] != '\0'; i++, j++)
		dest[i] = src[j];

	dest[i] = '\0';

	return (dest);
}
