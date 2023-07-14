#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char base_16[16] = "0123456789abcdef";

	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(base_16[i]);
	}
	putchar('\n');
	return (0);
}
