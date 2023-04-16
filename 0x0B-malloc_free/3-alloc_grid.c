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
    /**--------Decleare Variables ------*/
    int **two_dim;
    int i, j;

    if (height <= 0)
        return (NULL);
    if (width <= 0)
        return (NULL);
    
    two_dim = malloc(sizeof(int*) * width);
    if (two_dim == NULL)
        return (NULL);
    
    /*--------Nested for loops -------*/
    for (i = 0; i < width; i++)
    {
        two_dim[i] = (int *) malloc(sizeof(int) * height);
        if (two_dim[i] == NULL)
            return NULL;
        for (j = 0; j < height; j++)
        {
            two_dim[i][j] = 0;
        }
    }

    return (two_dim);

}