#include "holberton.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers
* @min: the smallest integer in the array
* @max: the largest integer in the array
* Return: the pointer to the newly created array, NULL if min > max,
* NULL if malloc fails
*/
int *array_range(int min, int max)
{
int *x;
int i;

if (min > max)
return (NULL);

x = malloc((max - min + 1) * sizeof(*x));
if (x == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
p[i] = min;

return (x);
}
