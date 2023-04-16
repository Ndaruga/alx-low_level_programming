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

    if (height <= 0)
        return (NULL);
    if (width <= 0)
        return (NULL);

    /*-----Allocate memory of size int* to width. This way we allocate a memory 
            block for a 1D array of pointers.-----*/
    two_dim = (int **) malloc(sizeof(int*) * width);
    if (two_dim == NULL)
        return (NULL);
    
    /*--------Nested for loops -------*/
    for (i = 0; i < width; i++)
    {
        /*--------For each Pointer in the 1D array, allocate other array
                of pointers of size int thereby creating a 2D array----------*/
        two_dim[i] = (int *) malloc(sizeof(int) * height);
        if (two_dim[i] == NULL)
            return NULL;
        for (j = 0; j < height; j++)
        {
            two_dim[i][j] = 0; /* ----Fill all elements in the 2D array----*/
        }
        free(two_dim[i]);
    }
    free(two_dim);
    return (two_dim);

}