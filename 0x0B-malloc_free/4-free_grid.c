#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* free_grid - free matrix pointer
* @grid: matrix
* @height: height
*Return: pointer to the matrix
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; ++i)
{
free(grid[i]);
}
free(grid);
}
