#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - allocate a 2d integer grid
*
* @width: width of grid
* @height: height of grid
* Return: returns pointer to grid created
*/
int **alloc_grid(int width, int height)
{
int **grid, i, j, k;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
i--;
while (i >= 0)
{
free(grid[i]);
i--;
}
free(grid);
return (NULL);
}
}
for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
{
grid[j][k] = 0;
}
}
return (grid);
}
