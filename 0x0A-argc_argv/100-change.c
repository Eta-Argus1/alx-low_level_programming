#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: array length
 * @argv: the array
 * Return: 0 if it runs succesfully and 1 if not
 */
int main(int argc, char *argv[])
{
	int i, x;
	int change[5] = {25, 10, 5, 2, 1};

	int result = 0;

	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("0\n");
	}
	for (i = 0; i < 5; i++)
	{
		while (x >= change[i])
		{
			result++;
			x -= change[i];
		}
	}

	printf("%d\n", result);

	return (0);
}
