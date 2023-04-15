#include "main.h"
#include "stdio.h"
#include <stdlib.h>


/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the text given as a parameter
 * @str: text to be duplicated
 * Return: Pointer to the newly allocated space
 */

char *_strdup(char *str)
{
    char *dup_str;
	int i = 0;
	int len = 0;

	if (str == NULL)
	{
		printf("String is null\n");
		return (NULL);
	}
	/*---------Check length of the string without null terinator------*/
	while (*str++)
	{
		len++;
	}
	len++;
	dup_str = malloc(sizeof(char) * len);
	if (dup_str == NULL )
	{
		printf("Malloc returned NUll\n");
		return (NULL);
	}
	for (i = 0; i < len; i++, *str++)
	{
		dup_str[i] = *(str);
	}
	return (dup_str);
}
