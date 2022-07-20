#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be checked
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
  return(0);
	{
		i++;
		i = 1 + _strlen_recursion(s + 1);
	}

	return (i);
}
