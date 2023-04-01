#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: always an integer
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		/* If *s1 and s2 are not equal, return diffrence*/
		if (*s1 != *s2)
			return (*s1 - *s2);
		else
			return (0);
		s1++, s2++;
	}
	return (0);
}

