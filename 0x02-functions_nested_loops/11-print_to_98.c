#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all nautral from n to 98, followed by a new line
 * @n: integer to start from
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else if (n == 98)
	{
		printf("98\n");
	}
}
