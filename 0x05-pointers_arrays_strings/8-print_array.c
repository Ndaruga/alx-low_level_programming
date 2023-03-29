#include "main.h"
#include "stdio.h"

/**
 * print_array - print array of characters
 * @a: integer to be appended in array
 * n: number of items in array
 * Return: None
 */

void print_array(int *a, int n)
{
	int i = *a;
	int idx = 0;

	while (idx < n)
	{
		if (idx != n - 1)
			printf("%d, ", i);
		else
			printf("%d", i);
		i = *++a, idx++;
	}
	printf("\n");
}
