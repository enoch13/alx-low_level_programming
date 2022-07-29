#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using free and malloc
 * @ptr: pointer to previous memory block
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: size in bytes for new allocated space
 * Return: Pointer to new memory or NULL if error
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	char *dat = ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		x = malloc(new_size);
		return (x);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	x = malloc(new_size);
	if (x == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		x[i] = dat[i];

	free(dat);
	return (x);
}
