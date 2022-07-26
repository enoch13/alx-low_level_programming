#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - prototype
* @width: Width of grid
* @height: height of grid
* Return: NULL on failure, NULL if @width or @height is 0 or negative,
* on success: pointer to a 2 dimensional array of integers
*/

int **alloc_grid(int width, int height)
{
int **a;
int x, y, z;

if (width <= 0 || height <= 0)
return (NULL);
a = malloc(sizeof(int *) * height);
if (a == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
a[x] = malloc(sizeof(int) * width);
if (a[x] == NULL)
{
while (x >= 0)
{
free(a[x]);
x--;
}
free(a);
return (NULL);
}
}
for (y = 0; y < height; y++)
{
for (z = 0; z < width; z++)
a[y][z] = 0;
}
return (a);
}
