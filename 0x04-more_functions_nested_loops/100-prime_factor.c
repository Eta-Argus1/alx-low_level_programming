#include "main.h"
#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: return 0 if the program runs correctly
 */
int main(void)
{
	long int num, count;

	num = 612852475143;

	for (count = 2; num > 1; count++)
	{
		if (num % count == 0)
		{
			num /= count;
			count--;
		}
	}
	printf("%ld\n", count);
	return (0);
}
