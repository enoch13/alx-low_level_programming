#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free up a 2d grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
int i = 0;

while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
