#include <stdio.h>

/**
 * main - block
 *Use putcahr to print the alphabet in lowercase, except for q and e.
 * Return: Always 0.
 */
int main(void)
{
	char i;

	for (i = 'a'; i<= 'z'; ir++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}

	putchar('\n');

	return (0);
}
