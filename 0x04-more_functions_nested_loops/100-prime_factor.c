#include "main.h"
#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: return 0 if the program runs correctly
 */
int main(void)
{
	long int num, counts[20];

	int max, count, i;

	num = 612852475143;

	i = 0;

	max = 0;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			num /= count;
		}
		counts[i] = count;
		if (counts[i] > max)
			max = counts[i];
		i++;
	}
	printf("%d", max);
	return (0);
}
