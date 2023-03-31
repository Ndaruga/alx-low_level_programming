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
 * _strncpy - copies a string
 * @dest: string 1
 * @src: string 2
 * @n: bytes to be copied
*/

char *_strncpy(char *dest, char *src, int n)
{
    int i = _strlen(src);

    for (i = 0;  i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
     for ( ; i < n; i++)
        dest[i] = '\0';
    return (dest);
}