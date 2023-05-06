#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, j, int1, int2, *rslt, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	rslt = malloc(sizeof(int) * len);
	if (!rslt)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		rslt[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		int1 = s1[len1] - '0';
		j = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			int2 = s2[len2] - '0';
			j += rslt[len1 + len2 + 1] + (int1 * int2);
			rslt[len1 + len2 + 1] = j % 10;
			j /= 10;
		}
		if (j > 0)
			rslt[len1 + len2 + 1] += j;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (rslt[i])
			a = 1;
		if (a)
			_putchar(rslt[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(rslt);
	return (0);
}
