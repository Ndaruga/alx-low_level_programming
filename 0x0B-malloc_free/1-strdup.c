#include "main.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the text given as a parameter
 * @str: text to be duplicated
 * Return: Pointer to the newly allocated space
*/

char *_strdup(char *str)
{
	char *mem;
	int len = strlen(str), i = 0;

	mem = malloc(sizeof(str) * i);
	if (mem == NULL)
		return (NULL);
	while (i < len)
	{
		mem[i] = *str++;
		i++;
	}
	return (mem);
}
