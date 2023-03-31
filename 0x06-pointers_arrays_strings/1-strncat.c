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
 * _strncat -  concatenate two strings
 * @dest: string 1
 * @src: string 2
 * @n: Number of bytes
 * Return: destination string/ string 1
*/

char *_strncat(char *dest, char *src, int n)
{
        int i = _strlen(dest);
        int j = _strlen(src);

        for (j = 0; src[j] != '\0'; i++, j++)
        {
            if (j == n)
                continue;
            else
                dest[i] = src[j];
        }
        dest[i] = '\0';

        return (dest);
}
