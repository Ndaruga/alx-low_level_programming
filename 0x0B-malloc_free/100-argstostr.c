#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * str_concat - concatenate two strings
 * @s1: string to be concatenated to
 * @s2: string to concatenate with
 * Return: Return ptr to newly allocaated space
*/

char *str_concat(char *s1, char *s2)
{
	char *concatd_str;
	int len_s1 = 0;
	int len_s2 = 0;
	int i = 0;
	char *temp = s1; /*---- set a duplicate value of s1 to temp*/

	if (s2 == NULL)
		return (" ");
	else if (s1 == NULL)
		return (" ");
	/*-----Get the length of s1-----*/
	while (*s1++)
	{
		len_s1++;
	}
	s1 = temp;

	/**-------Get length of s2--------*/
	temp = s2;

	while (*s2++)
	{
		len_s2++;
	}
	len_s2++;
	s2 = temp;
	concatd_str = malloc(sizeof(char) * (len_s1 + len_s2));
	if (concatd_str == NULL)
		return (NULL);

	/*------Add s1 to concatd_str-------*/
	for (i = 0; i < len_s1; i++, *s1++)
	{
		concatd_str[i] = *s1;
	}
	for (i = len_s1; i < (len_s1 + len_s2); i++, *s2++)
	{
		concatd_str[i] = *s2;
	}
	return (concatd_str);
}

/**
 * argstostr - concat all args 
 * @ac: number of args
 * @av: args
 * Return: Pointer to new string
*/

char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *sc;
	char *new_string;

	if ((ac == 0) || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (*av++)
			len++;
		len++;
		for (j = 0; j < i; j++, *av++)
		{
			new_string = (char *) malloc(sizeof(char) * len);
			if (new_string == NULL)
				return (NULL);
			sc = str_concat(*av, "\n");
			new_string = sc;
		}
	}

	return (new_string);
}
