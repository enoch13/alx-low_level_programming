#include "main.h"
/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *c)
{
	char arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (c[i] == arr[j])
				c[i] = replace[j / 2];
		}
	}
	return (c);
}
