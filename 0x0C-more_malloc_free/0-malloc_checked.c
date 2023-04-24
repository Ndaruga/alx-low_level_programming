#include "stdlib.h"
#include "stdio.h"
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number to be allocated memory for
 * Return: none
*/

void *malloc_checked(unsigned int b)
{
	int *alloc;

	/**
	 * allocate memory and exit eith status 98 if it fails
	*/
	alloc = malloc(sizeof(b));
	if (alloc == NULL)
	{
		exit(98);
	}

	return (alloc);
}
