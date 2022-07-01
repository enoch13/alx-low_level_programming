#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		c++;
	}

	i = 'A';

	while (i <= 'Z')
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
