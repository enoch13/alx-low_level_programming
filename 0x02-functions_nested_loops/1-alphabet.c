#include <_putchar.c>
/**
 *print_alphabet - print alphabet in lowercase using only `_putchar`
 *
 *Return: 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
