#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Prints the last digit of a number
 * @n: the concerned integer
 * Return: the value of the last integer
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = abs(n);
	x = n % 10;
	if (x < 0)
		x = abs(x);
	_putchar(x + '0');
	return (x);
}
