#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int bin[64];
	int i = 0, j;

	if (n == 0)
		_putchar('0');

	while (n > 0)
	{
		bin[i] = n & 1;
		n >>= 1;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar('0' + bin[j]);
}
