#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: the string whose length to return
 *
 * Return: the length of the string
 */

size_t _strlen(char *s)
{
	size_t i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
