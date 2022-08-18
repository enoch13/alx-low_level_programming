#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips;
	int count;

	flips = n ^ m;
	count = 0;

	while (flips)
	{
		count++;
		flips &= (flips - 1);
	}

	return (count);
}
