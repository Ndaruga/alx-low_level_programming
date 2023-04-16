#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * alloc_grid - create a 2D array
 * @width: with of array
 * @height: height pof array
 * Return: pointer to 2D array
*/

int **alloc_grid(int height, int width)
{
	int **two_dim; /*----- Pointer to a pointer to an int-----*/
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	/**
	 * -----Allocate memory of size int* to width. This way we allocate a memory
	*	block for a 1D array of pointers.-----
	*/
	two_dim = (int **) malloc(sizeof(int *) * width);
	if (two_dim == NULL)
	{
		free(two_dim);
		return (NULL);
	}
	/*--------Nested for loops -------*/
	for (i = 0; i < width; i++)
	{
		/**
		 * create a 2D array from each pointer in 1D array
		*/
		two_dim[i] = (int *) malloc(sizeof(int) * height);
		if (two_dim[i] == NULL)
		{
			{
			/* free all previous memory allocations */
			for (j = 0; j < i; j++)
				free(two_dim[j]);
			free(two_dim);
			return (NULL);
			}
		}
		for (j = 0; j < height; j++)
		{
			two_dim[i][j] = 0; /* ----Fill all elements in the 2D array----*/
		}
		free(two_dim[i]);
	}
	free(two_dim);
	return (two_dim);
}
