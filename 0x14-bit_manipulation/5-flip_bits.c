#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: the number
 * @m: number of bits
 * Return: flipped number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j;
	unsigned long int x;
	unsigned long int y;

	j = 0;
	y = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		x = y >> i;
		if (x & 1)
			j++;
	}
	return (j);
}
