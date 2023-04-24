#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * free_grid - frees the 2D grid prebiously created by alloc_grid
 * @grid: grid shape
 * @height: height of the grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
    int i;

    for (i=  0; i<height; i++)
        free(grid);
    free(grid);
}
