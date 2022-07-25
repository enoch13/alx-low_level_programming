#include "main.h"
#include <stdlib.h>
/**
* create_array - Creates an array of chars and initializes it with a
* specific char
* @size: size of the array
* @c: the character to initialize the array with
* Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	j = malloc(sizeof(char) * size);
	if (size == 0 || j == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		j[i] = c;
		i++;
	}

	return (j);
}
