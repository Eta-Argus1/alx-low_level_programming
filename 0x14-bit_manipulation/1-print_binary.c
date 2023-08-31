#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int bin;
	int i = 0, j;

	for (j = 63; j >= 0; j--)
	{
		bin = n >> j;

		if (bin & 1)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}
