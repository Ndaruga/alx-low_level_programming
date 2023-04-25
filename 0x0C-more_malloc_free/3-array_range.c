#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of integers
 * @min: start of range
 * @max: end of range
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j = (max - min + 1);

	if (min > max)
		return (NULL);

	/* malloc and check for error */
	ptr = malloc(sizeof(int) * j);
	if (ptr == NULL)
		return (NULL);

	/* set values */
	for (i = 0; i < j; i++)
		ptr[i] = min++;

	return (ptr);
}